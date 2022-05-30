/* FileName: T7_25.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Eight queens problem: brute force method
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int place[8] = {0};                                         //��n���ʺ���ռλ�õ��к�
int flag[8] = {1, 1, 1, 1, 1, 1, 1, 1};                     //��־���飬��ʾ��col���Ƿ��ռ��1��ʾ��ͻ
int d1[15] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; //��ʾ�϶Խ����Ƿ��ռ
int d2[15] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; //��ʾ�¶Խ����Ƿ��ռ
int number = 0;                                             //����ͳ�ƽ��������8�ʺ��ܹ���92���⣩

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
    for (col = 0; col < 8; col++) //ÿ���ʺ���8�ֿ��ܵ���
    {
        if (flag[col] && d1[n - col + 7] && d2[n + col]) //�ж�λ���Ƿ��ͻ
        {
            place[n] = col; //��n��col�аڷŻʺ�
            flag[col] = 0;  //����ռ���col��
            d1[n - col + 7] = 0;
            d2[n + col] = 0;
            if (n < 7) //8���ʺ�û�а��꣬�ݹ�ڷ���һ������Ļʺ�
                generate(n + 1);
            else
                print(); //N=7���ʺ󶼷��꣬��ӡ���

            //���ݣ����������Ŀ��ܷ���
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
    //printf("�ʺ�����н���ǣ�")��
    /*for(col=0;col<8;col++)
        printf("%d��%d��"��col,place[col]);
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
