/* FileName: T2_28.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Output each digit of the integer.
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int n,a,b,c,d,e;
 	cin>>n;
 	a=n/10000;
 	b=n%10000/1000;
 	c=n%1000/100;
 	d=n%100/10;
 	e=n%10;
 	cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e<<endl;
 	return 0;
 }
