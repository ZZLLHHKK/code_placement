#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    while (getline(cin, str)) {
        stringstream ss(str);
        string word;

        int sum = 0;
        while (ss >> word) {
            bool isNum = 1;
            for (char c : word) {
                if (!isdigit(c)) {
                    isNum = 0;
                    break;
                }
            }
            if (isNum)
                sum += stoi(word);
        }
        cout << sum << endl;
    }
}
