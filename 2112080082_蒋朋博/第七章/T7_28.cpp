/* FileName: T7_28.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     April 30, 2022
 * Function: (Hu¨ªw¨¦n) Hui language
 */
 
#include<iostream>

using namespace std;

int main()
{
	int j = 0;
	char str[100];
	cout << "Enter a String:\n";
	gets(str);

	for(int i = 0; str[i] != '\0' ; i++)
	{
        if(str[i] != ' ')
            str[j++] = str[i];
	}
	str[j] = '\0';

	for(int i = 0; i < j; i++)
    {
        if(str[i] != str[j-i-1])
        {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
	return 0;
}
 
