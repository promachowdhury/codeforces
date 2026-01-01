#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char ch;
    bool color = false;

    for (int i = 0; i < n * m; i++) {
        cin >> ch;
        if (ch == 'C' || ch == 'M' || ch == 'Y') {
            color = true;
        }
    }

    if (color)
        cout << "#Color";
    else
        cout << "#Black&White";

    return 0;
}
