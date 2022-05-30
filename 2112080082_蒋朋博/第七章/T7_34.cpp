/* FileName: T7_34.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Generating random maze
 */
 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char arr[12][12];

void mazeGenerator()
{
	int a;
	srand(time(NULL));
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			a = rand() % 2;
			if (a)
			{
				arr[i][j] = '1';
			}
			else { arr[i][j] = '0'; }
		}
	}
	arr[2][0] = '1', arr[4][11] = '1';
}

int a = 0;
void print()
{

	if (' ' == arr[4][11])
	    a++;
	if (a > 1)
	    return;
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void test(int x,int y)
{
	if (x < 0 || x > 11 || y < 0 || y > 11)
	    return;
	if ('0' == arr[x][y])
	    return;
	if (11 == y&&4==x)
	{
		arr[x][y] = ' ';
		print( );
		return;
	}
	if ('1' == arr[x][y])
	{
		arr[x][y] = ' ';
		print( );
		test(x+1,y );
		test(x,y + 1 );
		test( x,y - 1 );
		test(x - 1, y );
	}
}

int main()
{
	mazeGenerator();
	print( );
	int x=2, y=0;
	test(x, y);
	if ('1' == arr[4][11])
	    cout << "ÃÔ¹¬ÎÞ½â£¡" << endl; 
	return 0;
}
