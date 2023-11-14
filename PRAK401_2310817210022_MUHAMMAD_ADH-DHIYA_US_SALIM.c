#include <stdio.h>
int main(){
    int n;
    char t;
    for(int i = 0; i <3; i++){
        scanf("%d %c", &n, &t);
        for(int j = 1; j <= 50; j ++){
            if(j % n == 0){
                printf("%c", t);
            }
            else{
                printf("%d", j);
            }
        }printf("\n");
    }
    return 0;
}