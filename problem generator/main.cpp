#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t; // test cases
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string a;
        cin >> a;

        map<char, int> freq;
        for (char c : a) {
            freq[c]++;
        }

        int need = 0;
        for (char ch = 'A'; ch <= 'G'; ch++) {
            if (freq[ch] < m) {
                need += (m - freq[ch]);
            }
        }

        cout << need << endl;
    }

    return 0;
}
