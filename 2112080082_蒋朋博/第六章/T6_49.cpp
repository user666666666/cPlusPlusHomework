/* FileName: T6_49.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:圆面积计算 
 */
#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14159;
inline double circlearea(double r)
{
	return pi * pow(r,2);
	
}

int main()
{
	double r;
	cout << "请输入圆的半径：";
	cin >> r;
	cout << "圆的面积： \t" << circlearea(r);
	return 0;
}
