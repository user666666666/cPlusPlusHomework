/* FileName: T4_25.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:ÐÇºÅÕý·½ÐÎ 
 */
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main()
 {
 	int a,n,t;
 	cin >> n;
 	for(a = 0;a < n;a ++)
 	{
 		for(t = 0;t < n;t ++)
 		{
 			if(a == 0 || a == (n-1))
 			cout << "*";
 			else if(t == 0 || t == (n-1))
 			cout << "*";
 			else
 			cout << " ";
		 }
		 cout << "\n";
	 }
	 return 0;
  } 
