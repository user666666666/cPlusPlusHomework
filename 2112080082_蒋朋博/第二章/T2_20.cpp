/* FileName: T2_20.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the diameter, circumference and area of a circle.
 */
#include <iostream>

using namespace std;

int main()
{
	int r;
	int pi=3.14159;
	cin>>r;
	cout<<"圆的直径："<<2*r<<endl;
	cout<<"圆的周长："<<2*pi*r<<endl;
	cout<<"圆的面积："<<pi*r*r<<endl;
	return 0;
 } 
