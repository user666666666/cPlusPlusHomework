/* FileName: T5_16.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:¸´Àû¼ÆËã 
 */
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 using namespace std;
 int main()
 {
 	
 	double rate = .05f;
 	int principal = 1000;
 	cout << "Year" << setw(21) << "Amount on deposit" << endl;
 	cout << fixed << setprecision(2);
 	for(int year = 0;year <= 10; ++year)
 	{
 		int amount = principal * pow(1.0f + rate,year);
 		int dollar = amount / 100;
 		int cent = amount % 100;
 		cout << setw(4) << year << setw(12) << dollar << '.' << cent << endl;
	 }
	 return 0;
  } 
