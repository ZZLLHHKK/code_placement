#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(a == d && b == c){
            printf("Case %d: %d\n", i, abs(a-b)); 
            continue;
        }
        
        ll cnt = 1, x = a, y = b, m = c, n = d;
        while(x != a+b && y != 0) x++, y--, cnt++;
        while(m != 0 && n != c+d) m--, n++, cnt++;

        for(int u = (a+b)+1; u < (c+d); u++) cnt += (ll)(u+1);
        printf("Case %d: %lld\n", i, cnt);
    }
}
