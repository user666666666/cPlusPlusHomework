/* FileName: T2_30.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:身体质量指数计算器 
 */
#include<iostream>

using namespace std;

int main()
{
	double a,b,c;
	cout<<"BMI VALUES"<<endl;
	cout<<"Underweight: less than 18.5"<<endl;
	cout<<"Normall: between 18.5 and 24.9"<<endl;
	cout<<"Overweight: between 25 and 29.9"<<endl;
	cout<<"Obese:30 or greater";
    cout<<"输入体重"<<endl;
	cin>>a;
	cout<<"输入身高"<<endl; 
	cin>>b;
	c=(1.0*b*703)/1.0*(c*1.0*c) ;
	cout<<"你的BMI是"<<c<<endl; 
	return 0; 
}

