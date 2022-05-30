/* FileName: T6_14.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:数的特定小数舍入 
 */ 
#include <iostream>
#include <math.h>
using namespace std;
int roundToInteger(double);
int roundToTenths(double);
int roundToHundredths(double);
int roundToThousandths(double);

int main()
{
	double num = 0.0f;
	while(num != -1)
	{
		cout << "Enter number to roud (-1 to exit): ";
		cin >> num;
		cout << "Original: " << num << "\nroundToInteger: " << roundToInteger(num) << "\nroundToTenths: " << roundToTenths(num) << "\nroundToHundredths: " << roundToHundredths(num) << "\nroundToThousandths: " << roundToThousandths(num) << endl;
	}
	return 0;
}
int roundToInteger(double num)
{
	return floor(num + .5);
}
int roundToTenths(double num)
{
	return floor(num * 10 + .5) / 10;
}
int roundToHundredths(double num)
{
	return floor(num * 100 + .5) / 100;
}
int roundToThousandths(double num)
{
	return floor(num * 1000 + .5) / 1000;
}
