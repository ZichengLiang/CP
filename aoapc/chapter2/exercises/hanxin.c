#include<stdio.h>

int hanxin(int a, int b, int c) {
    for (int j = 10; j < 100; j++) {
        if ( j % 3 == a && j % 5 == b && j % 7 == c) {
            return j;
        } 
    }
    return 0;
}

int main() {
    FILE *fin, *fout;
    fin = fopen("hanxin.in", "rb");
    fout = fopen("hanxin.out", "wb");

    int a[3];
    int i = 0, k = 0;

    while (fscanf(fin, "%d", &a[i]) == 1) {
        if (i == 2) {
            int r = hanxin(a[0], a[1], a[2]);
            if (r) {
                fprintf(fout, "Case %d: %d\n", ++k, r);
            } else fprintf(fout, "Case %d: No answer\n", ++k);
            i = 0;
        } else if (i < 2) {
            i++;
        }
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
