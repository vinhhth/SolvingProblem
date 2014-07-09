#include <iostream>

using namespace std;

bool palindrome(int num)
{
    int reverse = 0;  
    int digit = 0; 
    int num1 = num;
    while(num !=0) 
    {    
        digit = num % 10; //modulo 
        reverse = reverse*10+digit; 
        num = num/10; 
    } 
    if(reverse == num1)
        return true;
    return false;
}

int main()
{
    int max = 0;
    for(int i = 999; i >= 100; i--)
    {
        for(int j = i; j >= 100; j--)
        {
            int lol = i * j;
            if(palindrome(lol))
            {
                if(max < lol)
                    max = lol;
                break;
            }
        }
    }
    cout << max << endl;
    return 0;
}