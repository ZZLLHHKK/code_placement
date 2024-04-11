#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, ans = 0;
        scanf("%d", &n);

        int a[n];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), compare);

        ans = (a[n-1]-a[0]) * 2;

        printf("%d\n", ans);
    }
}
