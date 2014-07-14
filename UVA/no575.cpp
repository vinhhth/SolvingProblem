#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
	int m;
	int sum = 0;
	string num;
	while(true)
	{
		scanf("%d", &m)
		if(m == 0)
			break;
		num = to_string(m);
		for(int i = 0; i < num.length(); i++)
		{
			if(i.at(i) == '1')
				sum += pow(2, num.length() - 1);
		}
		cout << sum << endl;
		sum = 0;
	}
}