/* FileName: T6_41.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:递归的最大公约数 
 */
#include <iostream>
using namespace std;
int gac(int x,int y)
{
	if(y == 0)
	    return x;
	else
	    return gac(y,x % y);
 } 
 
int main()
{
	int a,b;
	cin >> a >> b;
	while(a < b)
	    cin >> a >> b;
	cout << gac(a,b);
}
