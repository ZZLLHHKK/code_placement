#include <stdio.h>
#include <string.h>

int SUM(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main(){
    char s[1001];

    while(scanf("%s", s) != EOF && s[0] != '0'){
        int sum = 0, cnt = 1;
        for(int i = 0; i < strlen(s); i++) sum += (s[i] - '0');

        if(sum % 9 != 0) printf("%s is not a multiple of 9.\n", s);
        else{
            while(sum != 9){
                sum = SUM(sum);
                cnt++;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", s, cnt);
        }
    }
}
