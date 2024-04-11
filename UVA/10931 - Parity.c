#include <stdio.h>
#include <string.h>

int main(){
    int a;

    while(scanf("%d", &a) && a != 0){
        int i = 0, cnt = 0;
        char str[101];
        memset(str, '\0', sizeof(str));
        while(a > 0){
            int r = a % 2;
            a /= 2;
            str[i] = (char)(r + '0');
            i++;
        }
        for(int j = 0; j < strlen(str); j++){
            if(str[j] == '1') cnt++;
        }
        printf("The parity of ");
        for(int k = strlen(str)-1; k >= 0; k--) printf("%c", str[k]);
        printf(" is %d (mod 2).\n", cnt);
    }
}
