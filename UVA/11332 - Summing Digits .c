#include <stdio.h>

int SUM(long long n){
    long long sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main(){
    long long a;

    while(scanf("%lld", &a) != EOF && a){
        long long ans = 100;
        if(a < 10) ans = a;
        else{
            while(ans >= 10){
                ans = SUM(a);
                if(ans >= 10) a = ans;
            }
        }
        printf("%lld\n", ans);
    }
}
