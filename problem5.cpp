#include <iostream>
#include <string>
using namespace std;

void countAndPrintChars(const string& s) {
    int uppercaseCount = 0;
    int lowercaseCount = 0;

    string uppercaseChars = "";
    string lowercaseChars = "";

    for (char c : s) {
        if (isupper(c)) {
            uppercaseCount++;
            uppercaseChars += c;
        } else if (islower(c)) {
            lowercaseCount++;
            lowercaseChars += c;
        }
    }

    cout << uppercaseCount;
    if (uppercaseCount > 0) cout << " " << uppercaseChars;
    cout << endl;

    cout << lowercaseCount;
    if (lowercaseCount > 0) cout << " " << lowercaseChars;
    cout << endl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    countAndPrintChars(s);

    return 0;
}
