#include <stdio.h>
int main(){
    int n;
    for(int i = 0;i < 3; i++){
        scanf("%d", &n);
        for(int j = 1; j <= n; j++){
            if(j % 2 != 0){
                printf("%d", j);
            }
        }printf("\n");
        for(int j = n; j > 0; j--){
            if(j % 2 == 0){
                printf("%d", j);
            }
        }printf("\n");
    }return 0;
}