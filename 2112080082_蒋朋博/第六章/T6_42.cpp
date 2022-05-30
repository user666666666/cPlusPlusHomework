/* FileName: T6_42.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:两点之间的距离 
 */
#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
	return sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2));
}

int main()
{
	double x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1,y1,x2,y2);
	return 0;
}
