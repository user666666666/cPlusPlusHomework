/* FileName: T4_15.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:销售佣金计算器 
 */
 #include <iostream>

using namespace std;

int main()
{
    double a = 0,b = 0,c = 0;
    while(a != -1)
    {
        cout<<"Enter sales in dollars(-1 to end): ";
        cin >> a;
        if(a != -1)
        {
        b = 200 + a * 0.09;
        cout << "Salary is:$  " << b <<endl;
        }
    }
    return 0;
}
