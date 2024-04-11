#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, f;
        scanf("%d%d", &a, &f);

        while(f--){
            for(int i = 1; i <= a; i++){
                int x = i;
                while(x--) printf("%d", i);
                printf("\n");
            }
            for(int j = a-1; j >= 1; j--){
                int y = j;
                while(y--) printf("%d", j);
                printf("\n");
            }
            printf("\n");
        }
    }
}
