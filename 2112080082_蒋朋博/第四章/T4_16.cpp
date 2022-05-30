/* FileName: T4_16.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Ð½½ð¼ÆËãÆ÷ 
 */
 #include<iostream>
 #include <iomanip>

 using namespace std;
 
 int main()
 {
    int a = 5,b,c;
    while(a != -1)
	{
        cout << "Enter hours worked(-1 to end): " << endl;
        cin >> a;
		if( a != -1)
		{
            cout << "Enter hourly rate of the employee($00.00): " << endl;
            cin >> b;

        if( a > 40)
		{
            c = 40 * b + ( a - 40 ) * 1.5 * b;
            cout << " Salary is $ " << c << endl;
		}
        else
		{
		    c = a * b;
            cout << "Salary is $ " << c << endl; 
		}
		}
	}
	 	return 0; 
 }

