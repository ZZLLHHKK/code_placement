#include <stdio.h>
#include <math.h>
#define ll long long

ll dec_to_bi(ll n){
    ll result = 0;
    while(n > 0){
        result = result + (n % 2); 
        n /= 2;
        result *= 10;
    }
    return result;
}

ll hex_to_bi(ll n){
    ll result = 0, i = 0;
    while(n > 0){
        result += powl(16, i)*(n % 10);
        n /= 10, i++;
    }
    result = dec_to_bi(result);
    return result;
}

ll count(ll n){
    ll cnt = 0;
    while(n > 0){
        if(n % 10 == 1) cnt++;
        n /= 10;
    }
    return cnt;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        ll a, b1, b2;
        scanf("%lld", &a);
        b1 = count(dec_to_bi(a));
        b2 = count(hex_to_bi(a));
        printf("%lld %lld\n", b1, b2);
    }
}
