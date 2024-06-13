#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;

    while(scanf("%d", &n) != EOF){
        int a[n], b[n+1], flag = 0;
        memset(b, 0, sizeof(b));
        if(n == 1) flag = 1;
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);

        if(n > 1){
            for(int i = 1; i <= n-1; i++){
                int r = abs(a[i-1] - a[i]);
                b[r]++;
            }
            for(int j = 1; j <= n-1; j++){
                if(b[j] > 1 || b[j] == 0){
                    flag = 0;
                    break;
                } else flag = 1;
            }
        }
    
        if(flag) printf("Jolly\n");
        else printf("Not jolly\n");
    }
}
