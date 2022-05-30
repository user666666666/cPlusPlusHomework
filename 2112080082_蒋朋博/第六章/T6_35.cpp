/* FileName: T6_35.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:猜数字游戏的修改 
 */
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
	srand((unsigned int)time(0));
	flag:
	int num = rand() % 1000 + 1 , counter = 0;
	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Please try your first guess." << endl;
	while(1)
	{
		counter++;
		int play = 0;
		cin >> play;
		if(play > num)
		    cout << "To high.Try again." << endl;
		else if(play < num)
		    cout << "Tow low.try again." << endl;
		else
		{
			cout << "Excellent!You gussed the number!\n" << "Would you like to play again?(1 to yes ,0 to no)\n" << endl;
			break;
		}
	}
	if(counter < 10)
	    cout << "Either you know the secret or you get luck!" << endl;
	else if(counter == 10)
	    cout << "Ahah!You know the secret!" << endl;
	else
	cout << "You should be able to do better!" << endl;
	int t;
	cin >> t;
	if(t == 1)
	    goto flag;
	else
	    return 0;
 } 
