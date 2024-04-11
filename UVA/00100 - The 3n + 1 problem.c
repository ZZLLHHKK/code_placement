#include <stdio.h>

int ca(int num, int cnt){
    cnt++;
    if(num % 2 == 0) return ca(num / 2, cnt);
    else if(num % 2 == 1 && num > 1){
        return ca(3*num + 1, cnt);
    }
    return cnt;
}

int main(){
    int x, y;

    while(scanf("%d%d", &x, &y) != EOF){
        int tmpx = x, tmpy = y, max = 0;
        if(x > y){
            int tmp = x; 
            x = y; 
            y = tmp;
        }
        for(int i = x; i <= y; i++){
            if(max < ca(i, 0)){
                max = ca(i, 0);
            }
        }
        printf("%d %d %d\n", tmpx, tmpy, max);
    }
}
