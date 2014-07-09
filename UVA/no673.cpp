#include <stack>
#include <vector>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    int no;
    char * input;
    scanf("%d\n", &no);
    string sd;

    for(int i = 0; i < no; i++)
    {
        gets(input);
        int lol = 0;
        for(int j = 0; j < strlen(input); j++)
        {
            if(sd[j] == '(' || sd[j] == '[')
                lol++;
            if(sd[j] == ')' || sd[j] == ']')
                lol--;
        }
        if(lol == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}