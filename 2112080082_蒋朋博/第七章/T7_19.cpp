/* FileName: T7_19.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: Convert vector object to array object.
 */
 
#include<iostream>

using namespace std;

void outputarr(int arr[],unsigned long long n)
{
	for (int i = 0; i <n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void inputarr(int *arr, int n)
{
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[i] = num;
	}
}

void test(int* arr, int* arr1)
{
	arr = arr1;
}
int main()
{
	int arr1[7] = { 0 };
	int arr2[10] = { 0 };
	cout << "Size of arr1 is " << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "arr after initialization: " << endl;
	outputarr(arr1, sizeof(arr1) / sizeof(arr1[0]));
	cout << "Size of arr2 is " << sizeof(arr2) / sizeof(arr2[0])<<endl;
	cout << "arr after initialization: " << endl;
	outputarr(arr2, sizeof(arr2) / sizeof(arr2[0]));

	cout << "Enter 17 integers:" << endl;
	inputarr(arr1, sizeof(arr1) / sizeof(arr1[0]));
	inputarr(arr2, sizeof(arr2) / sizeof(arr2[0]));

	cout << "After input, the array contain:\n";
	cout << "arr1: " << endl;
	outputarr(arr1, sizeof(arr1) / sizeof(arr1[0]));
	cout << "arr2: " << endl;
	outputarr(arr2, sizeof(arr2) / sizeof(arr2[0]));

	cout << "\nEvaluating:arr1!=arr2" << endl;
	
	if (arr1 != arr2)
		cout << "arr1 and arr2 are not equal" << endl;

	return 0;
}

