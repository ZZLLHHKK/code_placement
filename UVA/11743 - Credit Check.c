#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n = 0, m = 0, sum = 0, num[8] = {}, no = 0;
        char cd[4][5];
        for(int i = 0; i < 4; i++){
            scanf(" %s", cd[i]);
            no += (cd[i][1] - '0') + (cd[i][3] - '0');
        }
        int x = 0;
        for(int k = 0; k < 4; k++){
            num[x++] = (cd[k][0] - '0') * 2;
            num[x++] = (cd[k][2] - '0') * 2;
        }
        
        for(int k = 0; k < 8; k++){
            while(num[k] > 0){
                sum += num[k] % 10;
                num[k] /= 10;
            }
        }
        sum += no;
        if(sum % 10 == 0) printf("Valid\n");
        else printf("Invalid\n");
    }
}
