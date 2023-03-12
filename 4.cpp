#include <iostream>
#include <stack>

int main(){
    std::string s;
    std::getline(std::cin,s);
    //std::cin>>s;

    std::stack<int>n;
    int i=0;
    while(i<s.length()){
        std::string st;
        while(i<s.length() && s[i] != ' '){
            st+=s[i];
            i++;
        }
        if(st == "+"){
            int op1 = n.top();
            n.pop();
            int op2 = n.top();
            n.pop();
            n.push(op1 + op2);
        }
        else if(st == "-"){
            int op1 = n.top();
            n.pop();
            int op2 = n.top();
            n.pop();
            n.push(op2 - op1);
        }
        else if(st == "*"){
            int op1 = n.top();
            n.pop();
            int op2 = n.top();
            n.pop();
            n.push(op1 * op2);
        } else{
            if(!st.empty()) {
                int op = std::stoi(st);
                n.push(op);
            }
        }
        i++;
    }
    std::cout<<n.top();

}
