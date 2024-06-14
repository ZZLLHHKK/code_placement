#include <bits/stdc++.h>
using namespace std;

int main() {
    char input[1001]; 
    
    while (scanf("%s", input) && !(input[0] == '0' && strlen(input) == 1)) {
        string str;
        for (int i = 0; i < strlen(input); ++i) {
            if (isdigit(input[i])) 
                str.push_back(input[i]);
        }
        int sum = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (i % 2)
                sum += (str[i] - '0');
            else 
                sum -= (str[i] - '0');
        }
        if (sum % 11 == 0) 
            cout << str << " is a multiple of 11." << endl;
        else
            cout << str << " is not a multiple of 11." << endl;
    }
}
