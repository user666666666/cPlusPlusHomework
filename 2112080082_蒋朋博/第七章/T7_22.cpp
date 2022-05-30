/* FileName: T7_22.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Knight parade.
 */
 
 #include<iostream>

int boa[8][8] = {0};
int i = 0;
using namespace std;
bool isOut(int x, int y)//�ж��Ƿ񳬹�����
{
    if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
        return false;
    else
        return true;
}

bool isVisited(int x, int y)//�ж��Ƿ񱻷��ʹ�
{
    if (boa[x][y] != 0)
        return true;
    else
        return false;
}

void move(int x, int y)
{
    if (64 == i)
        return;
    if (!(isOut(x, y)) && !(isVisited(x, y)))
    {
        i++;
        boa[x][y] = i;
        move(x + 2, y + 1);
        move(x + 1, y + 2);
        move(x - 1, y + 2);
        move(x - 2, y + 1);
        move(x - 2, y - 1);
        move(x - 1, y - 2);
        move(x + 1, y - 2);
        move(x + 2, y - 1);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    int x, y;
    cout << "��������ʼλ�ã����д�0��ʼ���м�ո������: " << endl;
    cin >> x >> y;
    move(x, y);
    for (int j = 0; j < 8; ++j)
    {
        for (int k = 0; k < 8; ++k)
        {
            cout << boa[j][k] << "\t";
        }
        cout << endl;
    }
    return 0;
}

