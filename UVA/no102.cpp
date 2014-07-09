#include <cstdio>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() 
{
    int b1, g1, c1, b2, g2, c2, b3, g3, c3;
	//BCG, BGC, CBG, CGB, GBC, GCB
    while (scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF) 
    {
        unsigned int bcg = g1 + c1 + b2 + g2 + b3 + c3;
        unsigned int bgc = g1 + c1 + b2 + c2 + b3 + g3;
        unsigned int cbg = b1 + g1 + g2 + c2 + b3 + c3;
        unsigned int cgb = b1 + g1 + b2 + c2 + g3 + c3;
        unsigned int gbc = b1 + c1 + g2 + c2 + b3 + g3;
        unsigned int gcb = b1 + c1 + b2 + g2 + g3 + c3;
        unsigned int min = bcg;
        int c = 1;
        if(bgc < min)
        {
            min = bgc;
            c = 2;
        }
        if(cbg < min)
        {
            min = cbg;
            c = 3;
        }
        if(cgb < min)
        {
            min = cgb;
            c = 4;
        }
        if(gbc < min)
        {
            min = gbc;
            c = 5;
        }
        if(gcb < min)
        {
            min = gcb;
            c = 6;
        }
        if(c == 1)
            cout << "BCG " << bcg << endl;
        else if(c == 2)
            cout << "BGC " << bgc << endl;
        else if(c == 3)
            cout << "CBG " << cbg << endl;
        else if(c == 4)
            cout << "CGB " << cgb << endl;
        else if(c == 5)
            cout << "GBC " << gbc << endl;
        else if(c == 6)
            cout << "GCB " << gcb << endl;
    }
    return 0;
}