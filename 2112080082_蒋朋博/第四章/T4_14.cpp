/* FileName: T4_14.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:信用额度问题 
 */
 #include<iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
	double a=1,b,c,d,e,f;
	while(a!=-1)
	{
	cout<<"Enter account number (or -1 to quit): "<<endl;
	cin>>a;
	cout<<"Enter beginning balance: "<<endl;
	cin>>b;
	cout<<"Enter total charges: "<<endl;
	cin>>c;
	cout<<"Enter total credites: "<<endl;
	cin>>d;
	cout<<"Enter total limit: "<<endl;
	cin>>e;
	cout<<"Account: "<<a<<endl;
	cout<<"Credit Limit: "<<e<<endl;
	f=b+c-d;
	cout<<"Balance: "<<f<<endl;
	if(f>e)
	{
		cout<<"Credit Limit Exceeded."<<endl;
		
	}
	cin>>a;
	}
	return 0; 
}


