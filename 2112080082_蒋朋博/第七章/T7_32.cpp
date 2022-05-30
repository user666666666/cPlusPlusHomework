/* FileName: T7_32.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Find the minimum value in the array object
 */

#include <iostream>

using namespace std;
int arr[100];
int main()
{
    int n,m;
    cout << "请输入数组中元素的个数：" << endl;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(n == 1)
    {
        cout << "The min is " << arr[0] << endl;
        return 0;
    }
    else
        m = (arr[0]>arr[1]) ? arr[1] : arr[0];
    for(int i = 0; i < n-1; i++)
    {
        if(m > arr[i])
            m = arr[i];
    }
    cout << "The minimum is " << m <<endl;
    return 0;
}
