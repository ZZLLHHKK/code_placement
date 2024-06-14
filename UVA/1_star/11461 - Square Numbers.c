#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
	
    while(scanf("%d%d", &a, &b) != EOF && a && b){
	    int t = floor(sqrt(b)) - ceil(sqrt(a)) + 1;
	    printf("%d\n", t);
    }
}
