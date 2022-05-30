/* FileName: T7_27.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Aituoxun's tearing and screening method
 */
 
#include<iostream>

using namespace std;

int a[1000];
int main()
{
    for(int i = 0; i < 1000; i++)
        a[i] = 1;
    for(int i = 2; i < 1000; i++)
    {
        if(a[i] != 0)
        {
            for(int j = 2; i * j < 1000; j++)
                a[i*j] = 0;
        }
    }
    for(int i = 2; i < 1000; i++)
    {
        if(a[i] != 0)
            cout << i << endl;
    }
    return 0;
}
