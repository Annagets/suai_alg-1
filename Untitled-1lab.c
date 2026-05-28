#include <stdio.h>

int main(void)
{
    float V;
    float v1;
    float t;
    float v2;

    printf("V = ");
    scanf("%f", &V);

    printf("v1 = ");
    scanf("%f", &v1);

    printf("t = ");
    scanf("%f", &t);

    v2 = v1 - V / t;

    printf("v2 = %f\n", v2);

    return 0;
}
