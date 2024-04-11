#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    memset(str, '\0', sizeof(str));

    while(scanf("%s", str) != EOF && str[0] != '0'){
        int sum = 0;
        for(int i = 0; i < strlen(str); i++){
            if(i % 2 == 0) sum = sum + (str[i] - '0');
            if(i % 2 == 1) sum = sum - (str[i] - '0');
        }
        if(sum % 11 == 0) printf("%s is a multiple of 11.\n", str);
        else printf("%s is not a multiple of 11.\n", str);
        memset(str, '\0', sizeof(str));
    }
}
