/* FileName: T4_33.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:ֱ�������εı� 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int a,b,c;
 	cin >> a >> b >> c;
 	if(a * a + b * b == c * c || a * a + c * c == b * b||b * b + c * c == a * a)
        cout<<"��"<<endl; 
    else
	cout << "����" ;
	return 0; 
  } 
