#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int no;
    scanf("%d", &no);
    vector <int> stuff;
    while(1)
    {
        if(no == 0)
            break;
        int d;
        for(int i = 0; i < no; i++)
        {
            scanf("%d", &d);
            stuff.push_back(d);
        }
        std::sort(stuff.begin(), stuff.end());
        for(int i = 0; i < stuff.size() - 1; i++)
            cout << stuff[i] << " ";

        cout << stuff[stuff.size() - 1] << endl;
        stuff.clear();
        scanf("%d", &no);
    }
    return 0;
}