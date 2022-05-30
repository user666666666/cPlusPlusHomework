/* FileName: T6_26.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function: 摄氏温度和华氏温度 
 */
#include <iostream>
#include <iomanip>
using namespace std;
double celsius(double f)
{
	return (f - 32) * 5 / 9;
} 
double farenheit(double c)
{
	return c * 9 / 5 + 32;
} 

int main()
{
	cout << "Celsius\tFarenheit" << fixed << setprecision(1) << endl;
	for(int c = 0; c <= 100; c++)
	{
		cout << static_cast<double>(c) << "\t" << farenheit(static_cast<double>(c)) << endl;
	}
	
	cout << "Farenheit\tCelsius" << fixed << setprecision(1) << endl;
	for(int f = 32; f <= 212; f++)
	{
		cout << static_cast<double>(f) << "\t" << celsius(static_cast<double>(f)) << endl;
	}
	return 0;
}
