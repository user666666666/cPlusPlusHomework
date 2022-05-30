/* FileName: T4_27.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:二进制数转十进制 
 */
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main()
 {
 	int a,b = 0,m,k=0;
 	cin >> a;
 	while (a!=0)
 	{
 		m = a%10;
 		a /= 10;
 		b += m * pow(2,k++);
	 }
	 cout << b << endl;
	 return 0;
  } 
