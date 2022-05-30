/* FileName: T6_53.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:º¯ÊýÄ£°åmiaximum 
 */
#include <iostream>
using namespace std;
double maximum(double a,double b)
{
	return (a < b ? b : a);
}
int main()
{
	int a,b;
	char c,d;
	double e,f;
	cout << "Input int:";
	cin >> a >> b;
	cout << maximum(a,b) << endl;
	cout << "Input char:";
	cin >> c >> d;
	cout << maximum(c,d) << endl;
	cout << "Input double:";
	cin >> e >> f;
	cout << maximum(e,f) << endl;
	return 0; 
}
