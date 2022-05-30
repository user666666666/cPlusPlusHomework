/* FileName: T5_27.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:È¥³ýcontinueÓï¾ä 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	for(int counter = 1; counter <= 10; ++counter)
 	{
 		if(counter != 5)
 			cout << counter << " ";
	 }
	 cout << "\n" << "Skipped printing 5 without continue" << endl;
	 return 0;
 }
