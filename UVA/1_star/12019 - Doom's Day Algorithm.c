#include <stdio.h>

//1/1 saturday
int main(){
    int t, M, D;
    int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char* d[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &M, &D);
        int day_s = D-1;
        for(int i = M-1; i >= 1; i--) day_s += md[i-1];
        printf("%s\n", d[day_s % 7]);
    }
}
