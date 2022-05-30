/* FileName: T6_31.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:最大公约数 
 */
#include <iostream>
#include <bits/stdc++.h>
int gcd01(int,int);
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	cout << gcd01(a,b) << endl;
	return 0;
 } 
 
int gcd01(int a,int b)
{
	int t = __gcd(a,b);
	return t;
}
