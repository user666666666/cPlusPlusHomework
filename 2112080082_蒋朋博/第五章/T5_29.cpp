/* FileName: T5_29.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:�˵���Ŧ�������� 
 */
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
 	double money = 24;
 	for(int i = 5; i <= 10; i++)
 	{
 		for(int j = 1; j <= 387; j++)
 		money *= (1 + i * 0.01);
 		cout << fixed << setprecision(2) << money << endl;
	 }
	 return 0;
  } 
