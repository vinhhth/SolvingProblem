#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
    int n;
    int x;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        x = sqrt(n);
        if(n == x*x)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}