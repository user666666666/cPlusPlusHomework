/* FileName: T6_25.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:√Î ˝º∆À„ 
 */
#include <iostream>
using namespace std;
int sec(int h, int m, int s);
int main()
{
	int h,m,s;
	cin >> h >> m >> s;
	cout << sec(h,m,s);
	return 0;
}  

int sec(int h, int m, int s)
{
	if(h > 12)
	h -= 12;
	return h * 3600 + m * 60 + s;
	
}
