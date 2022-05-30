/* FileName: T7_25.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Eight queens problem: brute force method
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int place[8] = {0};                                         //第n个皇后所占位置的列号
int flag[8] = {1, 1, 1, 1, 1, 1, 1, 1};                     //标志数组，表示第col列是否可占，1表示冲突
int d1[15] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; //表示上对角线是否可占
int d2[15] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; //表示下对角线是否可占
int number = 0;                                             //用于统计解的数量（8皇后总共有92个解）

void print();
void generate(int n);

int main()
{
    generate(0);
    system("pause");
    return 0;
}

void generate(int n)
{
    int col;
    for (col = 0; col < 8; col++) //每个皇后都有8种可能的列
    {
        if (flag[col] && d1[n - col + 7] && d2[n + col]) //判断位置是否冲突
        {
            place[n] = col; //在n行col列摆放皇后
            flag[col] = 0;  //宣布占领第col列
            d1[n - col + 7] = 0;
            d2[n + col] = 0;
            if (n < 7) //8个皇后没有摆完，递归摆放下一行里面的皇后
                generate(n + 1);
            else
                print(); //N=7，皇后都放完，打印结果

            //回溯：考虑其它的可能方案
            flag[col] = 1;
            d1[n - col + 7] = 1;
            d2[n + col] = 1;
        }
    }
}

void print()
{
    int col, i, j;
    number++;
    printf("No.%d\n", number);
    //printf("皇后的排列结果是：")；
    /*for(col=0;col<8;col++)
        printf("%d行%d列"，col,place[col]);
    printf("\n");*/
    int table[8][8] = {0};
    for (col = 0; col < 8; col++)
        table[col][place[col]] = 1;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%d", table[j][i]);
        }
        printf("\n");
    }
}
