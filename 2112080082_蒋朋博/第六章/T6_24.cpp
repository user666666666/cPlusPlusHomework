/* FileName: T6_24.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:Êý×Ö·ÖÀë 
 */ 
#include <iostream>
using namespace std;
int separateInteger(long n);
int main()
{
	long n;
	cin >> n;
	separateInteger(n);
	return 0;
}

int separateInteger(long n)
{
	long x = 1;
	for(long i = n; i > 10; i /= 10)
	{
		x *= 10; 
	}
	while(x > 0)
	{
		cout << (n / x) % 10 << " ";
		x /= 10;
		
	}
	cout << endl;
}
