#include <stdio.h>
#define ll long long

int main(){
    ll s, d;

    while(scanf("%lld%lld", &s, &d) != EOF){
        ll ans = 0;
        while(d > 0){
            ans = s;
            while(ans > 0){
                ans--;
                d--;
            }
            s++;
        }
        printf("%lld\n", s-1);
    }
}
