#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, swap = 0;
        scanf("%d", &n);
        int a[50];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);

        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(a[j] > a[j+1]){
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    swap++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swap);
        memset(a, 0, sizeof(a));
    }
}
