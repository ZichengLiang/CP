#include<stdio.h>
#include<math.h>

int main() {
    /* pseudo codes:
     * for (int a = 1; a <= 9; a++)
     *     for (int b = 0; b <= 9; b++)
     *         if (aabb is square) {printf("%d\n", aabb);}
     */

    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            int n = a * 1100 + b * 11;
            int m = floor(sqrt(n));
            if (n == m * m) {
                printf("%d\n", n);
            }
        }
    }

    return 0;
}
