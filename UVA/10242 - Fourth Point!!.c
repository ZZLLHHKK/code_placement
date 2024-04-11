#include <stdio.h>
#include <math.h>

int main(){
    double x[4], y[4];
    double x1, x2, x3, y1, y2, y3;

    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) != EOF){
        if(x[0] == x[2] && y[0] == y[2]){
            x1 = x[1]; y1 = y[1];
            x2 = x[0]; y2 = y[0];
            x3 = x[3]; y3 = y[3];
        } else if(x[0] == x[3] && y[0] == y[3]){
            x1 = x[1]; y1 = y[1];
            x2 = x[0]; y2 = y[0];
            x3 = x[2]; y3 = y[2];
        } else if(x[1] == x[2] && y[1] == y[2]){
            x1 = x[0]; y1 = y[0];
            x2 = x[1]; y2 = y[1];
            x3 = x[3]; y3 = y[3];
        } else if(x[1] == x[3] && y[1] == y[3]){
            x1 = x[0]; y1 = y[0];
            x2 = x[1]; y2 = y[1];
            x3 = x[2]; y3 = y[2];
        }
        double ans1 = round((x1+x3-x2)*1000)/1000;
        double ans2 = round((y1+y3-y2)*1000)/1000;
        printf("%.3lf %.3lf\n", ans1, ans2);
    }
}
