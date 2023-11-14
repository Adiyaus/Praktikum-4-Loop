#include <stdio.h>

int main() {
    int n, k;
    for(int i = 0; i < 3; i++){
    scanf("%d %d", &n, &k);

    int SumAll = 0;

        for (int i = 1; i <= n; i++) {
            int SumLine = 0;
            for (int j = i; j >= 1; j--) {
                int h = j * k;
                SumLine += h;
                printf("(%d * %d)", j, k, h);
                if (j > 1) {
                    printf(" + ");
                }
            }
            SumAll += SumLine;
            printf(" = %d\n", SumLine);
        }

        printf("%d\n", SumAll);
        }
        return 0;
    }