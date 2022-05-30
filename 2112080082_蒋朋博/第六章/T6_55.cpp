/* FileName: T6_55.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:C++11的随机数：掷双筛子游戏的改进 
 */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

unsigned int rollDice();
int main()
{
	enum Status{CONTINUE,WON,LOST};
	unsigned int mypoint = 0;
	Status gameStatus = CONTINUE;
	unsigned int sum0fDice = rollDice();
	switch(sum0fDice)
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3:
		case 12:
	gameStatus:
		    LOST;
		    break;
		default:
			gameStatus = CONTINUE;
			mypoint = sum0fDice;
			cout << "Point is: " << mypoint << endl;
			break;
	}
	while(CONTINUE == gameStatus)
	{
		sum0fDice = rollDice();
		if(sum0fDice == mypoint)
		    gameStatus = WON;
		else if(sum0fDice == 7)
		    gameStatus = LOST;
	}
	if(WON == gameStatus)
	    cout << "Player wins" <<endl;
	else
	    cout << "Player losts" << endl;
	    
}

unsigned int rollDice()
{
	default_random_engine engine(static_cast <unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(1,6);
	unsigned int die1 = radomInt(engine);
	unsigned int die2 = radomInt(engine);
	unsigned int sum = die1 +  die 2;
	cout << "Player rolled " << die1 << "+" << die2 << "=" << sum << endl;
	return sum;
}
