/* FileName: T4_32.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:�����εı� 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	double a,b,c;
 	cin >> a >> b >> c ;
 	if( a+b > c && a+c > b && b+c > a)
	 cout << "��" ;
	 else
	 cout << "����" ;
	 return 0; 
  } 
