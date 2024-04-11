#include <stdio.h>
#define ll long long 

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        ll a, b;
        scanf("%lld%lld", &a, &b);
        if(a > b) printf(">\n");
        else if(a < b) printf("<\n");
        else printf("=\n");
    }
}
