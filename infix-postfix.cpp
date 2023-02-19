#include <bits/stdc++.h>
using namespace std;
  //infix to postfix
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s)
{
  
    stack<char> st; // C++ built-in stack
    string result;
    
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
          else if (c == '(')
            st.push('(');
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
         // If an operator is scanned
        else {
            while (!st.empty()
                   && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
             }
    }
  
    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout<<result<<endl;
}
int main(){
	string expr="a+b*(c^d-e)-i";
	infixToPostfix(expr);
	return 0;
} 

  