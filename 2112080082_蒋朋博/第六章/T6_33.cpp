/* FileName: T6_33.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:Å×Ó²±Ò 
 */
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int flip()
{
	unsigned int flip01 = rand() % 2;
	cout << flip01 << endl;
	return flip01;
 } 
 
int main()
{
	srand((unsigned int)time(0));
	unsigned int T = 0;
	unsigned int H = 0;
	for(unsigned int i = 1; i <= 100; i++)
	{
		if(flip() == 1)
		    H ++;
		if(flip() == 0)
		    T ++;
	}
	
	cout << "T:\t" << T << endl;
	cout << "H:\t" << H << endl;
	return 0;
}
