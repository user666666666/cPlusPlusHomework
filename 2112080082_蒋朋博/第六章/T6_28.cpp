/* FileName: T6_28.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 9, 2022
 * Function: ÍêÊý 
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int isperfect(int a)
{
	int b = 0;
	
	for(int i = 1; i < a; i++)
	{
		if(a % i == 0)
		b = b + i;
	}
	if(b == a)
		return a;
	else 
	    return 0;
	
} 

int main()
{
	for(int i = 2;i <= 1000; i++)
	{
		if(isperfect(i) != 0)
		{	
		    cout << isperfect(i) << "£º\t";
		    for(int j = 1; j < isperfect(i); j++)
			{
			    if(isperfect(i) % j == 0 && j == 1)
				    cout << j;
			else if(isperfect(i) % j == 0 && j != 1)
				cout << " " << j;
		    }
			cout << endl;
		}
		
	}
	return 0; 
}

