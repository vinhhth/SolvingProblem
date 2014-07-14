#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <math>
using namespace std;

int main() 
{
	int n, m;
	while(!EOF())
	{
		scanf("%d", &m)
		vector <int> lol;
		for(int i = 0; i < m; i++)
		{	
			scanf("%d", &n);
			lol.push_back(n);
		}
		if(jolly(lol))
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
		lol.clear();
	}
	return 0;
}

bool jolly(vector <int> lol)
{
	for(int i = 1; i < lol.size(); i++)
	{
		if(abs(lol[i] - lol[i-1]) != lol.size() - i)
			return false;
	}
	return true;
}