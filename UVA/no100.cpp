#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int max_cycle = 1;
    int i, j;
    while ( scanf("%d%d", &i, &j) != EOF )
    {    
        if(i > 1000000 || j > 1000000 || i < 0 || j < 0)
            return 0;
        int min = std::min(i, j);
        int max = std::max(i, j);
        for(int k = min; k <= max; k++)
        {
            int cycle = 1;
            int num = k;
            while(num > 1)
            {
                if(num % 2 == 1)
                    num = 3 * num + 1;
                else
                    num = num >> 1;
                cycle ++;
            }
            if(cycle > max_cycle)
                max_cycle = cycle;
        }
        cout << i << " " << j << " " << max_cycle << endl;
    }
    return 0;
}