#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[10];
        memset(str, '\0', sizeof(str));
        scanf("%s", str);
        if(strlen(str) == 5) printf("3\n");
        else {
            if(strcmp("one", str) == 0) printf("1\n");
            else if(strcmp("two", str) == 0) printf("2\n");
            else if((str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e') || (str[0] == 'o' && str[1] == 'n')) printf("1\n");
            else if((str[1] == 'w' && str[2] == 'o') || (str[0] == 't' && str[2] == 'o') || (str[0] == 't' && str[1] == 'w')) printf("2\n");
        }
        memset(str, '\0', sizeof(str));
    }
}
