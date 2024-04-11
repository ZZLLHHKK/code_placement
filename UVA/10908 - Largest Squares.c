#include <stdio.h>
#include <string.h>

int m, n, q;
char b[100][100];

int len(int i, int j, int rad){
    int an = 1, u = i-rad, d = i+rad, l = j-rad, R = j+rad;
    char r = b[i][j];
    if(u < 0 || d >= m || l < 0 || R >= n) return 0;

    for(int a = u; a <= d; a++){
        for(int c = l; c <= R; c++){
            if(b[a][c] != r) return 0;
        }
    }

    return 1;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &m, &n, &q);
        memset(b, '\0', sizeof(b));

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++) scanf(" %c", &b[i][j]);

        int a[q][2];
        for(int k = 0; k < q; k++) scanf("%d%d", &a[k][0], &a[k][1]);

        printf("%d %d %d\n", m, n, q);
        for(int x = 0; x < q; x++){
            int r = 0;
            while(len(a[x][0], a[x][1], r)) r++;
            printf("%d\n", r*2 - 1);
        }
    }
}
