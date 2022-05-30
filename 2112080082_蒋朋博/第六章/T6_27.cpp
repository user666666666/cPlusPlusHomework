/* FileName: T6_27.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function: ÕÒ×îÐ¡Êý 
 */
#include <iostream>
#include <iomanip>
using namespace std;
double compare(double a, double b, double c)
{
	a = (a < b) ? a : b;
	return (a < c) ? a : c;
} 
int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(1) << "smallest: " << compare(a,b,c) << endl;
	return 0;
	
}
