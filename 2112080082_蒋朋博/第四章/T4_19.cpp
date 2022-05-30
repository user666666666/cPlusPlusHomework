/* FileName: T4_19.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:找最大的两个数 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int counter = 0,number[10],larges = 0,larges1 = 0;
 	while(counter <= 9)
 	{
 		cin >> number[counter];
 		if(number[counter] > larges)
 		    larges = number[counter];
 		counter ++;
	}
	counter = 0;
	while (counter <= 9)
	{
		if(number[counter] != larges)
		{
			if(number[counter] > larges1)
			larges1 = number[counter];
		}
		counter ++;
	}
	cout << larges <<" "<< larges1 << endl;
	return 0;
  } 
