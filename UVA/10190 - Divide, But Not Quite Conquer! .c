#include <stdio.h>
#define ll long long

int main(){
    ll a, b, flag = 0;

    while(scanf("%lld%lld", &a, &b) != EOF){
        if(a < b || a <= 1 || b <= 1){
            printf("Boring!\n");
            continue;
        }
        ll s[1000] = {}, i = 0;
        while(a >= 1){
            s[i] = a;
            i++;
            if(a % b != 0 && a != 1){
                flag = 0;
                break;
            } else{
                a /= b;
                flag = 1;
            }
        }
        if(flag){
            for(int i = 0; s[i] != 0; i++) printf("%d ", s[i]);
            printf("\n");
        } else{
            printf("Boring!\n");
        }
    }
}
