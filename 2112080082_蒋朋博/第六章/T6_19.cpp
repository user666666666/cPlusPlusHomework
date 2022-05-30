/* FileName: T6_19.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:直角三角形斜边的计算 
 */ 
#include <iostream>
#include <cmath>
using namespace std;
double h(double a,double b)
{
	double s;
	s = sqrt(a * a + b * b);
	return(s);
 } 
 
 int main()
 {
 	double a[3] = {3.0,5.0,8.0};
 	double b[3] = {4.0,12.0,15.0};
 	for(int i = 0; i<= 2; i++)
 	    cout << h(a[i],b[i]) << endl;
 	return 0;
 	
 }
