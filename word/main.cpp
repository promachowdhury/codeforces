#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int big = 0, small = 0;

    // প্রতিটি অক্ষর দেখি
    for (char c : word) {
        if (c >= 'A' && c <= 'Z') big++;   // বড় হাতের
        else small++;                      // ছোট হাতের
    }

    // যেটা বেশি, সেই অনুযায়ী পুরো শব্দ ছোট বা বড় করো
    if (big > small) {
        for (char &c : word) {
            c = toupper(c); // বড় বানাও
        }
    } else {
        for (char &c : word) {
            c = tolower(c); // ছোট বানাও
        }
    }

    cout << word << endl;
    return 0;
}
