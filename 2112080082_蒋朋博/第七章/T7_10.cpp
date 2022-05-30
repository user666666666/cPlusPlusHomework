/* FileName: T7_10.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 16, 2022
 * Function:Salesperson salary ranges 
 */
#include <iostream>

using namespace std;

const size_t salaryrange = 9;

int main()
{
	int arr[salaryrange] = {};
	int choice = 0;
	while(choice != -1)
	{
		cout << "Enter salary(-1 to quit): ";
		cin >> choice;
		if(choice == -1)
		{
			break;
		}
		else if(choice > 999)
		{
			++arr[8];
		}
		else if(choice > 899)
		{
			++arr[7];
		}
		else if(choice > 799)
		{
			++arr[6];
		}
		else if(choice > 699)
		{
			++arr[5];
		}
		else if(choice > 599)
		{
			++arr[4];
		}
		else if(choice > 499)
		{
			++arr[3];
		}
		else if(choice > 399)
		{
			++arr[2];
		}
		else if(choice > 299)
		{
			++arr[1];
		}
		else if(choice >= 200)
		{
			++arr[0];
		}
	}
	
	for(unsigned int i = 0; i < salaryrange; ++i)
	{
		if(i != salaryrange - 1)
		{
			cout << "$" << i + 2 << "00-" << i + 2 << "99: " << arr[i] << endl;
		}
		else
		{
			cout << "$1000+: " << arr[i] << endl; 
		}
	}
	return 0;
	
}
 
