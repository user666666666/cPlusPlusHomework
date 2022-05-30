/* FileName: T6_29.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function: ËØÊý 
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int isprime(int a)
{
	int b = 0,c = 0;
	
	for(int i = 2; i < a; i++)
	{
		if(a % i == 0)
		c = c + 1;
	}
    if(c>0)
        return 0;
    else 
        return a;
}


int main()
{
	for(int i = 1; i <= 10000; i++)
	{
		if(isprime(i) != 0)
		cout << isprime(i) << endl;
	}
	
	 	return 0; 
}

