#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long stuff = 2;
	for(int i = 3; i < 2000000; i++)
	{
		if(num < 2)
			continue;
		else if(num == 2)
		{
			stuff += i;
			continue;
		}
		else if(num % 2 == 0)
			continue;
		for(int i = 3; i < sqrt((double)num); i += 2)
		{
			if(num % i == 0)
				continue;
		}
		stuff += i;
	}	
	cout.precision(15);
	cout << fixed << stuff << endl;	
	
}

bool isPrime(int num)
{
	if(num < 2)
		return false;
	else if(num == 2)
		return true;
	else if(num % 2 == 0)
		return false;
	for(int i = 3; i < sqrt((double)num); i += 2)
	{
		if(num % i == 0)
			return false;
	}
}
