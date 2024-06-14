#include <stdio.h>
#define ll long long

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n, flag = 0;
        char str[3];
        scanf("%s %s %d", str, str, &n);

        ll a[n * n], b[n * n];
        int k = n * n - 1;
        for (int j = 0; j < n * n; j++) {
            scanf("%lld", &a[j]);
            if (a[j] < 0)
                flag = 1;
            b[k] = a[j];
            k--;
        }

        for (int w = 0; w < n * n; w++) {
            if (a[w] != b[w]) {
                flag = 1;
                goto end;
            }
        }

    end:
        if (flag)
            printf("Test #%d: Non-symmetric.\n", i);
        else
            printf("Test #%d: Symmetric.\n", i);
    }
}
