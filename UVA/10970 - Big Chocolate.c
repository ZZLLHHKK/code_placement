#include <stdio.h>

int main(){
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF){
        int sum = a*b - 1;
        printf("%d\n", sum);
    }
}
