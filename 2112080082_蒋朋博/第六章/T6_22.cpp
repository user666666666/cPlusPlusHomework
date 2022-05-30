/* FileName: T6_22.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:星号组成的方形图案 
 */ 
#include <iostream>
using namespace std;
int displaySquare(int side);
int main()
{
	int side;
	cin >> side;
	displaySquare(side);
	return 0;
 }
int displaySquare(int side)
 { 
    for(int i = 0; i < side; i++)
	{
		for(int j = 0; j < side; j++)
		cout << "*";
		cout << endl;
	}
}
