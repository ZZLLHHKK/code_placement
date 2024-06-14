#include <stdio.h>
#define ll long long

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    int n;

    while(scanf("%d", &n) && n){
        ll G = 0;
        for(int i = 1; i < n; i++){
            for(int j = i+1; j <= n; j++){
                G += gcd(i, j);
            }
        }
        printf("%lld\n", G);
    }
}
