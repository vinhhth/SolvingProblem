#include <vector>
#include <algorithm>
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	int no;
	scanf("%d", &no);
	for(int i = 0; i < no; i++)
	{
		vector <int> street;
		vector <int> avenue;
		int s, a, f;
		scanf("%d %d %d", &s, &a, &f);
		for(int j = 0; j < f; j++)
		{
			int s1, a1;
			scanf("%d %d", &s1, &a1);
			street.push_back(s1);
			avenue.push_back(a1);
		}
		sort(street.begin(), street.end());
		sort(avenue.begin(), avenue.end());
		int mid;
		if(f % 2 == 0)
			mid = (f-1)/2;
		else
			mid = f/2;
		cout << "(Street: " << street[mid] << ", Avenue: " << avenue[mid] << ")" << endl;
		street.clear();
		avenue.clear();
	}
}

