#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)a-*(int *)b;
}

int main(){
    int n, i = 1;
    scanf("%d", &n);

    while(n--){
        int a[3];
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        qsort(a, 3, sizeof(int), compare);
        printf("Case %d: %d\n", i, a[1]);
        i++;
    }
}
