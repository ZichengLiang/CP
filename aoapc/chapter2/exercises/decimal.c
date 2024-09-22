#include<stdio.h>
#include<string.h>
int main() {
    FILE *fin, *fout;
    fin = fopen("dec.in", "rb");
    fout = fopen("dec.out", "wb");

    long a[3];
    int i = 0, k = 0;

    while(fscanf(fin, "%ld", &a[i]) == 1) {
        if (i == 2) {
            if (a[0] == a[1] && a[1] == a[2] && a[0] == 0) return 0;
            char out[32];
            strcpy(out, "Case %d: %.");
            char dec[16];
            sprintf(dec, "%ld", a[2]);
            strcat(out, dec);
            strcat(out, "f\n");
            // figure out how to customize the decimal digits
            // declare a new string, then convert the value into a string by using sprintf(str, "%f", x) (why?)
            fprintf(fout, out, ++k, (double) a[0] / a[1]);
            i = 0;
        } else {
            i++;
        }
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
