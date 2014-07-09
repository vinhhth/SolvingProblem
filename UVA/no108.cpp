#include <cstdio>
#include <climits>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

int main() 
{
    int nEvents;
    scanf("%d\n", &nEvents)
    vector <int> right;
    for(int i = 0; i < nEvents; i++)
        scanf("%d", &right[i]);
    while(!EOF())
    {
        vector<int> answer;
        int score = 0;
        for(int i = 0; i < nEvents; i++)
            scanf("%d", &answer[i]);
        for(int i = 0; i < nEvents; i++)
        {
            if(answer[i] == vector[i])
                score++;
        }

    }
    return 0;
}