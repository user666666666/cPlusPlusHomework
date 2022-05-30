/* FileName: T6_23.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:任意符号组成的方形图案 
 */ 
#include <iostream>
using namespace std;
int displaySquare(int side, char sign);
int main()
{
	int side;
	char sign;
	cin >> side;
	cin >> sign;
	displaySquare(side, sign);
	return 0;
 }
int displaySquare(int side, char sign)
 { 
    for(int i = 0; i < side; i++)
	{
		for(int j = 0; j < side; j++)
		cout << sign;
		cout << endl;
	}
}
