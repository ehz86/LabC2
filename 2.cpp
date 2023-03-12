#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> p1;
    vector<int> p2;
    int c=-1;
    for (int i = 0; i < 5; i++) {
        cin >> c;
        p1.push_back(c);
    }
    c=-1;
    for (int i = 0; i < 5; i++) {
        cin >> c;
        p2.push_back(c);
    }
    int m = 0;

    while (!p1.empty() && !p2.empty() && m < 1000000) {
        int card1 = p1.front();
        int card2 = p2.front();
        p1.erase(p1.begin());
        p2.erase(p2.begin());
        if (((card1 > card2)&&(card1!=9 || card2!=0)) ||(card1 == 0 && card2 == 9)) {
            p1.push_back(card1);
            p1.push_back(card2);
        }
        else if (((card1 < card2)&&(card1!=0 || card2!=9)) || (card1 == 9 && card2 == 0)) {
            p2.push_back(card1);
            p2.push_back(card2);
        }
        else {
            p1.push_back(card1);
            p2.push_back(card2);
        }
        m++;
    }
    if (m == 1000000) {
        cout << "botva" << endl;
    }
    else if (p2.empty()) {
        cout << "first " << m << endl;
    }
    else {
        cout << "second " << m<< endl;
    }
    return 0;
}
