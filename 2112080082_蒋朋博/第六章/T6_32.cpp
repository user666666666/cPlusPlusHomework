/* FileName: T6_32.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function:³É¼¨µÄ¼¨µã 
 */
#include <iostream>
using namespace std;
int qualityPoints(int);
int main()
{
	int score = 0;
	cin >> score;
	cout << "qualityPoint: " << qualityPoints(score) << endl;
	return 0;
}

int qualityPoints(int score)
{
	if(score >= 90)
	    return 4;
	else if(score >= 80)
	    return 3;
	else if(score >= 70)
	    return 2;
	else if(score >= 60)
	    return 1;
	else
	    return 0;
}
