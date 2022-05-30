/* FileName: T5_24.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:修改星号组成的菱形图案 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int h;
 	cin >> h;
 	for(int i = 1; i <= h / 2 + 1; i++)
 	{
 		for(int j = h / 2 + 1 - i; j > 0; j--)
 	 	cout << " ";
 		for(int j = i * 2 - 1; j > 0; j--)
 		cout << "*";
 		cout << endl;
	 }
	 for(int i = 1; i <= h / 2; i++)
	 {
	 	for(int j = i; j > 0; j--)
	 	cout << " ";
	 	for(int j = h - 2 * i; j > 0; j--)
		cout << "*";
		cout << endl; 
	 }
	 return 0;
  } 
