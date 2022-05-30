/* FileName: T6_20.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:倍数 
 */ 
#include <iostream>
using namespace std;
int multiple(int a,int b)
{
	int x = 0;
	cin >> a >> b;
	if(b % a == 0)
	x = 1;
	return(x);
 } 
 
int main()
{
	int n,a,b;
	cout << "请输入两个整数：" << endl;
	cin >> n;
	for(int i = 1; i <= n; i++)
	    cout << (multiple(a,b) == 1 ? "true" : "false") << endl;
	    
	return 0;
}
