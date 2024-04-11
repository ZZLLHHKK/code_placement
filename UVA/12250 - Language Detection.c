#include <stdio.h>
#include <string.h>

int main(){
    const char* a[6] = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
    char str[20];
    memset(str, '\0', sizeof(str));
    int i = 1;

    while(scanf("%s", str) && str[0] != '#'){
        if(strcmp(a[0], str) == 0){
            printf("Case %d: ENGLISH\n", i);
            i++;
        }
        else if(strcmp(a[1], str) == 0){
            printf("Case %d: SPANISH\n", i);
            i++;
        }
        else if(strcmp(a[2], str) == 0){
            printf("Case %d: GERMAN\n", i);
            i++;
        }
        else if(strcmp(a[3], str) == 0){
            printf("Case %d: FRENCH\n", i);
            i++;
        }
        else if(strcmp(a[4], str) == 0){
            printf("Case %d: ITALIAN\n", i);
            i++;
        }
        else if(strcmp(a[5], str) == 0){
            printf("Case %d: RUSSIAN\n", i);
            i++;
        } else{
            printf("Case %d: UNKNOWN\n", i);
            i++;
        }
        memset(str, '\0', sizeof(str));
    } 
}
