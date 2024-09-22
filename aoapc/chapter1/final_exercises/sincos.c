#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d", &n);
    const double PI = acos(-1.0);
    double d = PI / 180.0 * n;
    printf("cos: %f, sin: %f\n", cos(d), sin(d));
    return 0;
}
