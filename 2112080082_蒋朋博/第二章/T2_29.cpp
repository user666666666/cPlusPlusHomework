/* FileName: T2_29.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the sum of squares and cubes from 0 to 10.
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	cout<<"integer\tsquare\tcube"<<endl;
 	
 	for(int i=0;i<=10;i++)
 	{
 		cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
	}
	return 0;
 }
