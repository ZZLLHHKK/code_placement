#include <stdio.h>

int main(){
    int t, j = 1;
    scanf("%d", &t);

    while(t--){
        int a, b, sum = 0;
        scanf("%d%d", &a, &b);
        for(int i = a; i <= b; i++){
            if(i % 2 == 1) sum += i;
            else continue;
        }
        printf("Case %d: %d\n", j++, sum);
    }
}
