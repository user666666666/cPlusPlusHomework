/* FileName: T7_13.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 16, 2022
 * Function: Use array object to duplicate.
 */
#include<iostream>

using namespace std;

int main()
{
int a[20] = {0}, num, count = 0;
for (int i = 0; i != 20; ++i)
{
    cin >> num;
    if (num < 10 || num > 100)
    {
        cout << "该数字无效\n";
        continue;
    }
    int j = 0;
    for (j = 0; j != count; ++j)
    {
       if (a[j] == num)
       {
           break;
       }
    }
    if (j == count)
    {
        a[count++] = num;
    }
}
for (int i = 0; i != count; ++i)
{
    cout << a[i] << " ";
}
   return 0;
}

