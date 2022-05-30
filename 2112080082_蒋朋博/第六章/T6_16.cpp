/* FileName: T6_16.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:Ëæ»úÊý 
 */ 
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	cout << rand() % 2 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 10 <<endl;
	cout << rand() % 113 + 1000 << endl;
	cout << rand() % 3 - 1 << endl;
	cout << rand() % 15 - 3 << endl;
	return 0;
 } 
