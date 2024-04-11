#include <stdio.h>

int fun(int a, int b, int c, int x){
	return a*x*x + b*x + c;
}

int main(){
	int a, b, c, d, L;
	
	while(scanf("%d%d%d%d%d", &a, &b, &c, &d, &L) != EOF){
		if(a == 0 && b == 0 && c == 0 && d == 0 && L == 0) break;
		int cnt = 0;
		for(int i = 0; i <= L; i++){
			if(fun(a, b, c, i) % d == 0) cnt++;
		}
		printf("%d\n", cnt);
	}
}
