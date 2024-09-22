#include<stdio.h>

double sub(long n, long m) {
    double re = 0.0;
    for (long j = n; j <= m; j++) {
        re += (double) 1 / (j * j);
    }
    return re;
}

int main() {
    FILE *fin, *fout;
    fin = fopen("sub.in", "rb");
    fout = fopen("sub.out", "wb");
    
    long a[2];
    a[0] = a[1] = 1;
    int i = 0, k = 0;

    while(fscanf(fin, "%ld", &a[i]) == 1) {
        if (i == 1) {
            if (a[0] == a[1] && a[0] == 0) return 0;
            printf("a: %ld, %ld\n", a[0], a[1]);
            fprintf(fout, "Case %d: %.5f\n", ++k, sub(a[0], a[1]));
            i = 0;
        } else {
            i++;
        }
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
