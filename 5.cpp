#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> s;
    string a, b;

    while (true) {
        cin >> a;
        if (a == "#") {
            break;
        }

        cin >> b;
        if (a == "+") {
            s.insert(b);
        } else if (a == "-") {
            s.erase(b);
        } else if (a == "?") {
            if (s.count(b)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
