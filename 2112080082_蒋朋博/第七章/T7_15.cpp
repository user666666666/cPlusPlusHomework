/* FileName: T7_15.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 16, 2022
 * Function: Two-dimensional array object initialization。 
 */
#include <iostream>

using namespace std;
int a[3][5],b[3][5];
int main()
{
    int counter = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            a[i][j] = 0;
            b[i][j] = ++counter;
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << "a[" << i << "][" << j << "]被初始化的顺序： " << b[i][j] <<endl;
        }
    }
    return 0;
}
