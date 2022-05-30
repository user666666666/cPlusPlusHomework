/* FileName: T2_25.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Determine whether there is a multiple relationship between two numbers.
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int a,b;
 	cin>>a>>b;
 	if(a%b==0)
 	cout<<"The first number is a multiple of the second number."<<endl;
 	else
 	cout<<"The first number is not a multiple of the second number."<<endl;
 	return 0;
 }
