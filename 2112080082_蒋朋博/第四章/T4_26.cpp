/* FileName: T4_26.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:回文数的判断 
 */
#include <iostream>

using namespace std;

int main()
{
	char a[5];
	cin >> a;
	if(a[0] == a[4]&&a[1] == a[3])
	cout << "是";
	else
	cout << "不是";
	return 0; 
}
