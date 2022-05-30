/* FileName: T6_12.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:Í£³µ·Ñ 
 */ 
#include <iostream>
#include <iomanip>
using namespace std;
typedef struct charge_info
{
	int id;
	double hour;
	double charge;
}
charge_info_t;
int main()
{
	double total_hour = 0.0;
	double total_charge = 0.0;
	cout << "Car\tHours\tCharge" << endl;
	for(int c = 0; c < 3; c++)
	{
		
		charge_info_t info;
		cin >> info.id >> info.hour >> info.charge;
		total_hour += info.hour;
		total_charge += info.charge;  
	}
	cout << "TOTAL£º" << "\t" << setprecision(1) << setiosflags(ios::fixed | ios::showpoint) << total_hour << "\t" << total_charge << endl;
	return 0;
}

