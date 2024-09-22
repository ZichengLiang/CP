#include<stdio.h>
#include<time.h>
#define INF 1000000
int main () {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");

    int x, n = 0, s = 0, kase = 0;

    while(fscanf(fin, "%d", &n) == 1 && n) {
        int s = 0, max = -INF, min = INF;
        for (int i = 0; i < n; i++) {
            fscanf(fin, "%d", &x);
            s += x;
            if (x < min) min = x;
            if (x > max) max = x;
        }
        if (kase) fprintf(fout, "\n");
        fprintf(fout, "Case %d: %d %d %.3f\n",++kase, min, max, (double) s / n);
        /*
          printf("x = %d, min = %d, max = %d\n", x, min, max);
         */
    }

    fclose(fin);
    fclose(fout);
    return 0;
}

