#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
        long long n , m;
        while(true)
        {
                scanf("%d" , &n);
                if(n < 0)
                        break;
                m = n * (n + 1)/2+1;
                cout << m <<endl;
        }
        return 0;
}