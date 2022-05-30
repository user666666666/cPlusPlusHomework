/* FileName: T4_17.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:ÕÒ×î´óÊý 
 */
#include<iostream>

using namespace std;

int main()
{
	int counter = 0;
	int number;int largest;
	while(counter < 10)
	{
		cin >> number;
		if(counter == 0)
			largest = number;
		else if(largest < number)
		    largest = number;
		counter ++;
	}
	cout << "largest=" << largest << endl;
	return 0;
 } 
 
