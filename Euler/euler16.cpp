#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <int> stuff;
    stuff.push_back(2);
    for(int i = 0; i < 1000; i++)
    {
        int carryOver = 0;
        int j = stuff.size() - 1;
        for(; j >= 0; j--)
        {
            int k = stuff[j];
            k *= 2;
            stuff[j] = k % 10;
            stuff[j] += carryOver;
            if(k >= 10)
                carryOver = 1;
            else
                carryOver = 0;
            if(j == 0 && k >= 10)
                stuff.insert(stuff.begin(), 1);
        }
    }
    int sum = 0;
    for(int i = 0; i < stuff.size(); i++)
        sum += stuff[i];
    for(int i = 0; i < stuff.size(); i++)
        cout << stuff[i];
    cout << endl;
    cout << sum << endl;
}