/* FileName: T2_18.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Compare two integerss
 */

#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	cout<<a<<" is large";
	else if(a<b)
	cout<<b<<" is large";
	else if(a=b)
	cout<<"These numbers are equal"<<endl;
	return 0;
}
