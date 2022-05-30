/* FileName: T6_13.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:数的整数舍入 
 */ 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double num = 0.0f;
	cout << "Program to round number to the nearest integer" << endl;
	while(num != -1)
	{
		cout << "Enter a number to round (-1 to exit): ";
		cin >> num;
		if(num == -1)
		{
			break;
		}
		cout << "num: " << num << "\nrounded: " << floor(num + .5) << endl;
		
	}
	return 0;
}

