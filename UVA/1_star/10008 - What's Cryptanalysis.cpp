#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int a[26] = {};
    char s[1001], ch[26];
    for (int j = 0; j <= t; j++){
        for (int k = 0; k < 26; k++) 
            ch[k] = 'A' + k;

        fgets(s, sizeof(s), stdin);
        for (int i = 0; i < strlen(s); i++) {
            if(islower(s[i])) 
                s[i] = toupper(s[i]);
            if(isalpha(s[i])) 
                a[s[i]-'A']++;
        }
    }

    for (int i = 0; i < 25; i++){
        for (int j = 0; j < 25 - i; j++) {
            if(a[j] < a[j+1]){
                swap(a[j], a[j+1]);
                swap(ch[j], ch[j+1]);
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if(a[i] != 0) 
            cout << ch[i] << " " << a[i] << endl;
    }
}
