#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        float s, d;
        scanf("%f%f", &s, &d);
        float ans_1 = (s + d) / 2;
        if(s < d || (ans_1 - (int)ans_1 > 0)){
            printf("impossible\n");
            continue;
        }
        float ans_2 = (s - d) / 2;
        printf("%.0f %.0f\n", ans_1, ans_2);
    }
}
