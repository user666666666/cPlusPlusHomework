/* FileName: T6_52.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:º¯ÊýÄ£°åminimum 
 */
#include <iostream>
using namespace std;
double minimum(double a,double b)
{
	return (a > b ? b : a);
}
int main()
{
	int a,b;
	char c,d;
	double e,f;
	cout << "Input int:";
	cin >> a >> b;
	cout << minimum(a,b) << endl;
	cout << "Input char:";
	cin >> c >> d;
	cout << minimum(c,d) << endl;
	cout << "Input double:";
	cin >> e >> f;
	cout << minimum(e,f) << endl;
	return 0; 
}
