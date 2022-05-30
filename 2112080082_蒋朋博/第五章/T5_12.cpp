/* FileName: T5_12.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:使用嵌套的for循环绘制图案 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	// (a)
 	int i,j,k,n;
 	cin >> j;
 	for(i=0;i<j;i++)
 	{
 		
 		for(k=0;k<i;k++)
 		{
 			cout << "*";
		 }
		 cout << endl;
	 }
	 cout <<"\n";
	 
	 //(b)
	 for(i=0;i<j;i++)
	 {
	 	for(k=j;k>i;k--)
	 	{
	 		cout << "*";
		 }
		 cout << endl;
	 }
	 cout <<"\n";
	 
	 
	 //(c)
	 for(i=0;i<j;i++)
	 {
	 	for(n=0;n<i;n++)
	 	{
	 		cout << " ";
	 	}
	 	for(k=j;k>i;k--)
	 	{
	 	    cout << "*";
		}
		  cout << endl;
	 }
	 cout << "\n";
	 
	 
	 //(d)
	 for(i=0;i<j;i++)
	 {
	 	for(n=j;n>i;n--)
	 	{
	 		cout << " ";
	 	}
	 	for(k=0;k<i;k++)
	 	{
	 	    cout << "*";
		}
		  cout << endl;
	 }
	 return 0;
  } 
