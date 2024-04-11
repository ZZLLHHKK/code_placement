#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int t;
    scanf("%d", &t);

    int a[26] = {};
    char s[1001], ch[26];
    for(int j = 0; j <= t; j++){
        for(int k = 0; k < 26; k++) ch[k] = 'A' + k;

        fgets(s, sizeof(s), stdin);
        for(int i = 0; i < strlen(s); i++){
            if(islower(s[i])) s[i] = toupper(s[i]);
            if(isalpha(s[i])) a[s[i]-'A']++;
        }
    }

    for(int i = 0; i < 25; i++){
        for(int j = 0; j < 25 - i; j++){
            if(a[j] < a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;

                char tp = ch[j];
                ch[j] = ch[j+1];
                ch[j+1] = tp;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(a[i] != 0) printf("%c %d\n", ch[i], a[i]);
    }
}
