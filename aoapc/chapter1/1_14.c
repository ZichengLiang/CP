#include <stdio.h>
void swap (int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
}
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) { swap(a, b); } // a <= b after this line, possible: a > c, b > c
    if (a > c) { swap(a, c); }
    if (b > c) { swap(b, c); }
    printf("%d %d %d", a, b, c);
}
