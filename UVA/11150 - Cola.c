#include <stdio.h>

int main(){
	int a;
	
	while(scanf("%d", &a) != EOF){
		int t = a*3/2;
		printf("%d\n", t);
	}
}
