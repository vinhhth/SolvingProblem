#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c;
    scanf("%d", &c);
    int a, b;
    for(int i = 0; i < c; i++)
    {
        scanf("%d %d", &a, &b);
        if(a > b)
            cout << ">" << endl;
        else if(a < b)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}