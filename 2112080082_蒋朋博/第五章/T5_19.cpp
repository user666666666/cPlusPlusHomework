/* FileName: T5_19.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Çó¦ÐµÄÖµ 
 */
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
 	int toggle = 0;
 	int limit = 1000;
 	double pi = 4.0f;
 	double divisor = 3.0f;
 	cout << "Term" << setw(4) << "\tPI Approx" << endl;
 	for (int i = 1;i <= limit;i++)
 	{
 		if(toggle == 0)
 		pi -= (4.0f / divisor);
 		else
 		pi += (4.0f / divisor);
 		toggle = (1 - toggle);
 		divisor += 2;
 		cout << i << setw(4) << "\t" << pi << endl;
	 }
	 return 0;
  } 
