/* FileName: T2_19.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com  
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Arithmetic operation between three nubmers
 */

#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Input three different integers: "<<endl;
	cin>>a>>b>>c;
	cout<<"Sum is "<<a+b+c<<endl;
	cout<<"Average is "<<(a+b+c)/3<<endl;
	cout<<"Product is "<<a*b*c<<endl;
	if(a>b&&a>c&&b>c)
	{
	cout<<"Smallest is "<<c<<endl;
	cout<<"Largest is "<<a<<endl;
    }
	else if(a>c&&a>b&&c>b)
	{
	cout<<"Smallest is "<<b<<endl;
	cout<<"Largest is "<<a<<endl;
    }
	else if(b>c&&b>a&&a>c)
	{
	cout<<"Smallest is "<<c<<endl;
	cout<<"Largest is "<<b<<endl;
    }
	else if(b>c&&b>a&&c>a)
	{
	cout<<"Smallest is "<<a<<endl;
	cout<<"Largest is "<<b<<endl;
	}
	else if(c>b&&c>a&&b>a)
	{
	cout<<"Smallest is "<<a<<endl;
	cout<<"Largest is "<<c<<endl;
    }
	else if(c>b&&c>a&&a>b)
	{
	cout<<"Smallest is "<<b<<endl;
	cout<<"Largest is "<<c<<endl;
    }
	return 0;
}
