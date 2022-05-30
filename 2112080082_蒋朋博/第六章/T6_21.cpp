/* FileName: T6_21.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:Å¼Êý 
 */ 
#include <iostream>
using namespace std;
int iseven(int a)
{
	int x;
	if(a % 2 == 0)
	    x = 1;
	else
	    x = 2;
	return (x);
 } 
 
int main()
{
	int a;
	cin >> a;
	cout << (iseven(a) == 1 ? "true" : "false") << endl;
	return 0;
}
