/* FileName: T7_21.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function:Sales summary. 
 */
#include <iostream>

using namespace std;
int a[6][5],b[6],c[5];
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            cout << "����������Ա" << j << "��Ʒ" << i << "�����۶�:" << endl;
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= 4; i++)
    {
        b[1] += a[1][i];
        b[2] += a[2][i];
        b[3] += a[3][i];
        b[4] += a[4][i];
        b[5] += a[5][i];
    }
    for(int i = 1; i <= 5; i++)
    {
        c[1] += a[i][1];
        c[2] += a[i][2];
        c[3] += a[i][3];
        c[4] += a[i][4];
    }
    cout<< "\t" << "\t" << "����Ա1\t" << "����Ա2\t" << "����Ա3\t" << "����Ա4\t" << "�����ܶ�" << endl;
    for(int i = 1; i <= 5; i++)
    {
        cout << "��Ʒ" << i << "�����۶�\t";
        for(int j = 1; j <= 4; j++)
            cout << a[i][j] << "\t";
        cout << b[i] <<endl;
    }
    cout<< "�����ܶ�\t" << c[1] << "\t" << c[2] << "\t" << c[3] << "\t" << c[4] << "\t" << c[1]+c[2]+c[3]+c[4] <<endl;
    return 0;
}
