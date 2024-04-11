#include <stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) && a != 0){
        int r = (a * (a + 1) * (2 * a + 1) / 6);
        printf("%d\n", r);
    }
}
