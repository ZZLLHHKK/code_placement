#include <stdio.h>
#include <string.h>

void swap(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapStr(char str1[], char str2[]){
    char temp[100]; 
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void rev(char a[]){
    int n = strlen(a);
    int s = 0, e = n - 1;
    while(e > s){
        char tmp = a[s];
        a[s] = a[e];
        a[e] = tmp;
        s++, e--;
    }
}

int main(){
    char a[100], b[100], c[100];
    memset(a, '\0', sizeof(a));
    memset(b, '\0', sizeof(b));

    while(scanf("%s%s", a, b) != EOF && !(a[0] == '0' && b[0] == '0')){ 
        int cnt = 0, carry = 0;
        rev(a);
        rev(b);
        if(strlen(a) < strlen(b)) swapStr(a, b);

        for(int z = 0; z < (strlen(a) > strlen(b) ? strlen(a) : strlen(b)); z++){
            int flag = carry;
            if(z < strlen(a)) flag += (a[z]-'0');
            if(z < strlen(b)) flag += (b[z]-'0');
            carry = flag / 10;
            if(carry > 0) cnt++;
        }

        if(cnt == 0) printf("No carry operation.\n");
        else if(cnt == 1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", cnt);
    }
}
