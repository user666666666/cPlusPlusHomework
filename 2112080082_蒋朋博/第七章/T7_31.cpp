/* FileName: T7_31.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Print string in reverse order
 */

#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

void f(int n)
{
	char c;
	if(n == 1)
	{
	cin>>c;
		cout << c;
	}else{
		cin>>c;
		f(n-1);
		cout << c;
	}
 } 
 
int main()
{
	int m; cin >> m;	
	f(m);
	
	return 0;
}
