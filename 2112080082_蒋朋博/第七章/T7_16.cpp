/* FileName: T7_16.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 16, 2022
 * Function:Simulate throwing two dice. 
 */
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int arr[13];
int main()
{
	
    	srand(((unsigned)time(NULL)));
    for(int i = 1;i <= 36000; i++)
    {

        unsigned int die1 = rand()% 6 + 1;
        unsigned int die2 = rand()% 6 + 1;
        unsigned int sum = die1 + die2;
        arr[sum]++;
    }

    for(int i = 2; i < 13; i++)
    {
        cout<< i << "µÄ´ÎÊý£º" << arr[i] <<endl;
    }

    return 0;
}
