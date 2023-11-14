#include <stdio.h>
int main(){
    int x, y;
    for(int i = 0; i <= 3; i++){
        scanf("%d %d", &x, &y); 
        if(x > y){
            for(int i = x, j = y; i >= y && j <= x; i--, j++){
                printf("%d %d", i, j);
                if(i != y && j != x){
                    printf(" - ");
                }
            }printf("\n");
        }else{
            for(int i = x, j = y; i <= y && j >= x; i++, j--){
                printf("%d %d", i, j);
                if(i != y && j != x){
                    printf(" - ");
                }
            }printf("\n");
        }
    }
    return 0;
}