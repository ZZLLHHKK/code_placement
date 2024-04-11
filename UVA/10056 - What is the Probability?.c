#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		double n, p, i;
		scanf("%lf%lf%lf", &n, &p, &i);
		double ans = (p*pow(1-p, i-1))/(1-pow(1-p, n));
		printf("%.4lf\n", ans);
	}
}
