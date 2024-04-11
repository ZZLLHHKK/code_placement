#include <stdio.h>
#include <stdlib.h>

int n;

int compare(const void *a, const void *b){
    int x = *(int *)a;
    int y = *(int *)b;
    if(x % n > y % n){
        return 1;
    }
    else if(x % n == y % n){
        if(x % 2 == 1 && y % 2 == 1){
            if(x > y) return -1;
            else if(x == y) return 0;
            else return 1;
        } 
        else if(x % 2 == 0 && y % 2 == 0){
            if(x > y) return 1;
            else if(x == y) return 0;
            else return -1;
        } 
        else if(x % 2 == 1 && y % 2 == 0) return -1;
        else if(x % 2 == 0 && y % 2 == 1) return 1;
    }
    else if(x % n < y % n){
        return -1;
    } 
}

int main(){
    int m;

    while(scanf("%d%d", &m, &n) != EOF){
        printf("%d %d\n", m, n);
        if(m == 0 && n == 0) break;
        int a[m];
        for(int i = 0; i < m; i++) scanf("%d", &a[i]);
        qsort(a, m, sizeof(int), compare);
        for(int j = 0; j < m; j++) printf("%d\n", a[j]);
    }
}
