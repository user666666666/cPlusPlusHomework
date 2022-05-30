/* FileName: T6_34.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:²ÂÊı×ÖÓÎÏ· 
 */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(0));
flag:
	int num = rand() % 1000 + 1;
	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can yo guess my number?" << endl;
	cout << "Please try your first guess." << endl;
	while (1)
	{
		int play = 0;
		cin >> play;
		if (play > num)
			cout << "Too high.Try again" << endl;
		else if (play < num)
			cout << "Too low.Try again" << endl;
		else
		{
			cout << "Excellent!You guessed the number!\n" << "Would you like to play again?(1 to yes ,0 to no)\n" << endl;
			break;
		}
	}
	int t;
	cin >> t;
	if (t == 1)
		goto flag;
	else
		return 0;
}
