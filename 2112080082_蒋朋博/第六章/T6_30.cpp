/* FileName: T6_30.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:Êý×Ö·´×ª 
 */
#include <iostream>
using namespace std;
int main()
{
	int n,t,s = 0;
	cin >> n;
	while(n)
	{
		t = n % 10;
		s = s * 10 + t;
		n /= 10;
	}
	cout << s << endl;
	return 0;
}
 
