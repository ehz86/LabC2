#include <iostream>
#include <stack>

int main() {
    std::string s;
    std::getline(std::cin,s);
    std::stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (st.empty()) {
                std::cout << "no" <<std::endl;
                return 0;
            } else if ((s[i] == ')' && st.top() == '(') ||
                       (s[i] == ']' && st.top() == '[') ||
                       (s[i] == '}' && st.top() == '{')) {
                st.pop();
            } else {
                std::cout << "no" <<std::endl;
                return 0;
            }
        }
    }
    if(st.empty())
        std::cout<<"yes";
    else
        std::cout<<"no";
    return 0;
}
