#include<stdio.h>

int msd(int n) {
    return n / 100;
}

int ssd(int n) {
    return (n / 10) % 10;
}

int lsd(int n) {
    return n % 10;
}


int main() {
    for(int n = 100; n < 333; n++) {
        int a = msd(n); int b = ssd(n); int c = lsd(n);
        int d = msd(2 * n); int e = ssd(2 * n); int f = lsd(2 * n);
        int g = msd(3 * n); int h = ssd(3 * n); int i = lsd(3 * n);

        int j[9] = {a, b, c, d, e, f, g, h, i};
        int l[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int t[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        
        for (int k = 0; k < 9; k++) {
            int m = j[k];
            l[m-1] = 0;
        }

        int z = 1;
        for (int k = 0; k < 9; k++) {
            if (l[k] != t[k]) {
                z = 0;
            } 
        }

        if (z) {
            printf("%d %d %d\n", n, n * 2, n * 3);
        }

    }
    return 0;
}
