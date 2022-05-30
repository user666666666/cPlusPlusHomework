/* FileName: T5_25.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:È¥³ýbreakºÍcontinue 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int counter{1};
 	bool exit{false};
 	while(!exit)
 	{
 		cout << counter << " ";
 		++counter;
 		exit = (counter == 5);
 		
	 }
	 cout << "\n" << "Broke out of loop at count = " << counter << endl;
	 return 0;
 }
