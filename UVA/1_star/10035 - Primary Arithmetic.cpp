#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;

    while (cin >> a >> b && !(a[0] == '0' && b[0] == '0')){ 
        int cnt = 0, carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if (a.length() < b.length()) 
            swap(a, b);

        for (int z = 0; z < (a.length() > b.length() ? a.length() : b.length()); z++){
            int flag = carry;
            if (z < a.length()) 
                flag += (a[z]-'0');
            if (z < b.length()) 
                flag += (b[z]-'0');
            carry = flag / 10;
            if (carry > 0) 
                cnt++;
        }

        if (cnt == 0) 
            printf("No carry operation.\n");
        else if (cnt == 1) 
            printf("1 carry operation.\n");
        else 
            printf("%d carry operations.\n", cnt);
    }
}
