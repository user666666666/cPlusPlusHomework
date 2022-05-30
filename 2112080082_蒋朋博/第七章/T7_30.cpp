/* FileName: T7_30.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Print array object
 */

#include<iostream>
using namespace std;

void printArray(int arr[], int b, int e)
{
	cout << arr[b] << "\t";
	if (b == e)return;
	return printArray(arr, b + 1, e);
}

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	printArray(arr, 0, 4);
	return 0;
}
