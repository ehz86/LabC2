#include <iostream>
#include <set>
int main() {
    int n;
    std::cin>>n;
    std::set<int> s;
    for(int i=0;i<n;i++){
        int a=0;
        std::cin>>a;
        s.insert(a);
    }
    std::cout<<s.size();
    return 0;
}
