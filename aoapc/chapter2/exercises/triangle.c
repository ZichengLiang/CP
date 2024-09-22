#include<stdio.h>

void pl(int j) {
    int k = 2 * j - 1;
    while (k > 0) {
        printf("#");
        k--;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = n; i > 0; i--) {
        for (int l = n - i; l > 0; l--) {
            printf(" ");
        }
        pl(i);
    }
    return 0;
}
