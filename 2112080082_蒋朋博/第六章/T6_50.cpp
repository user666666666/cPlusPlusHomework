/* FileName: T6_50.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:按值传递与按引用传递 
 */
#include <iostream>
using namespace std;
double triplebyvalue(double a)
{
	return 3 * a;
 } 
double triplebyference(double &a)
{
	a *= 3;
}

int main()
{
	double count;
	cin >> count;
	cout << triplebyvalue(count) << endl;
	triplebyference(count);
	cout << count;
	return 0;
}
