/* FileName: T6_17.cpp
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
	cout << (rand() % 5 + 1) * 2 << endl;
	cout << (rand() % 5 + 1) * 2 + 1 << endl;
	cout << (rand() % 5 + 1) * 4 + 2 << endl;
	return 0;
}
