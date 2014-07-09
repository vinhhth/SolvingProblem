#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int i, j;
    while(scanf("%d", &n) != EOF)
    {
        vector <int> books;
        int b;
        for(int k = 0; k < n; k++)
        {
            scanf("%d", &b);
            books.push_back(b);
        }
        sort(books.begin(), books.begin() + n);
        scanf("%d", &m);
        for(int first = 0, last = n - 1; first < last;)
        {
            int sum = books[first] + books[last];
            if(sum > m)
                last--;
            else if(sum < m)
                first++;
            else
            {
                i = first;
                j = last;
                first++;
                last--;
            }
        }
        cout << "Peter should buy books whose prices are " << books[i] << " and " << books[j] << "." << endl;
        cout << "" << endl;
    }
}