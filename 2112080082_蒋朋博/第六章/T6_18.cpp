/* FileName: T6_18.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:«Û√›º∆À„ 
 */ 
#include <iostream>
using namespace std;
int integerPower(int b,int e)
{
	cin >> b >> e;
	int sum = 1;
	for(int i = 1; i <= e; i++)
		sum *= b;
	return (sum);
 } 
 
 int main()
 {
 	int b,e;
 	cout << integerPower(b,e) << endl;
 	return 0;
 }
