#include <stdio.h>
#include <string.h>
int a = 0, b = 0;
char bd[100][100];

int cnt(int i, int j){
    int count = 0;
    for(int x = i-1; x <= i+1; x++){
        for(int y = j-1; y <= j+1; y++){
            if(x >= 0 && x < a && y >= 0 && y < b && bd[x][y] == '*') count++;
        }
    }
    return count;
}

int main(){
    int n = 1;

    while(scanf("%d%d", &a, &b) != EOF && a && b){
        for(int i = 0; i < a; i++) scanf("%s", bd[i]);
        printf("Field #%d:\n", n);
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(bd[i][j] == '*') printf("*");
                else printf("%c", (char)(cnt(i, j) + '0'));
            }
            printf("\n");
        }
        printf("\n");
        n++;
    }
}
