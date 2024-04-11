#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		int a, k = 0;
		cin >> a;
		int b[1000] = {0};
		for(int i = 1; i <= (a/2); i++){
			if(a % i == 0){
				b[k] = i;
				k++;
			}
		}
		int sum = 0;
		for(int i = 0; i < 1000; i++){
			if(b[i] != 0) sum += b[i];
			else break;
		}
		if(sum > a) cout << "abundant" << endl;
		else if(sum == a) cout << "perfect" << endl;
		else cout << "deficient" << endl;
	}
}
