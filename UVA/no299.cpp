#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int no;
    int trainNo;
    scanf("%d", &no);
    for(int i = 0; i < no; i++)
    {
        scanf("%d", &trainNo);
        int a[trainNo];
        for(int l = 0; l < trainNo; l++)
            cin >> a[l];
        int count = 0;
        for(int j = 1; j < trainNo; j++)
        {
            for(int k = 0; k < trainNo - 1; k++)
            {
                if(a[k] > a[k+1])
                {
                    count++;
                    std::swap(a[k], a[k+1]);
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
}