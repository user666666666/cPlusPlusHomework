/* FileName: T2_31.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:共乘汽车节省计算器 
 */
#include<iostream>

using namespace std;

int main()
{
	double a,b,c,d,e,f,g;
	cout<<"输入每天开的总英里数"<<endl;
	cin>>a;
	cout<<"输入每加仑汽油的价格"<<endl;
	cin>>b;
	cout<<"输入每加仑汽油可以开的平均英里数"<<endl;
	cin>>c;
	cout<<"输入每日的停车费"<<endl;
	cin>>d; 
	cout<<"	输入每日的通行费" <<endl;
	cin>>e;
	f=(a/c)*b;
	g=f+d+e;
	cout<<"每天的开车费用是"<<g;
	

 


	return 0; 
}

