#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double n, p;
    double k;
    while(scanf("%lf%lf", &n, &p) == 2)
    {
        k = pow(p, 1/n);
        printf("%.0lf\n", k);
    }
    return 0;
}