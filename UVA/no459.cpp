#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector <int> tree;

void addelements(int num)
{
	for(int i = 0; i < num; i++)
		tree.push_back(-1);
}

int find(int elem)
{
	if(tree[elem] < 0) 
		return elem;
	else
		return find(tree[elem]);
}

void setunion(int a, int b)
{
	int root1 = find(a);
	int root2 = find(b);
	int news = tree[root1] + tree[root2];
	if(tree[root1] <= tree[root2])
	{
		tree[root2] = root1;
		tree[root1] = news;
	}
	else
	{
		tree[root1] = root2;
		tree[root2] = news;
	}
}

int main()
{
    int no;
    int d;
    string lol;
    scanf("%d\n", &no);
    for(int i = 0; i < no; i++)
    {
        getline(cin, lol);
        d = lol[0] - 'A' + 1;
        addelements(d);
        while(true)
        {
            if(!getline(cin, lol) || lol.empty())
                break;
            int d1 = lol[0] - 'A';
            int d2 = lol[1] - 'A';
            if(find(d1) != find(d2))
            {
                setunion(d1, d2);
                d--;
            }
        }
        cout << d << endl;
        if(i != no - 1)
            cout << endl;
        tree.clear();
    }
}