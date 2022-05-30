/* FileName: T5_23.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:星号组成的菱形图案 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	for(int i = 1; i <= 5; i++)
 	{
 		for(int j = 5 - i; j > 0; j--)
 		cout << ' ';
 		for(int j = i * 2 - 1; j > 0; j--)
 		cout << '*';
 		cout << endl;
	 }
	 for (int i = 1; i <= 4; i++)
	 {
	 	for(int j = i; j > 0; j-- )
	 	cout << " ";
	 	for(int j = 9 - 2 * i; j > 0; j--)
	 	cout << "*";
	 	cout << endl;
	 }
	 return 0;
  } 
