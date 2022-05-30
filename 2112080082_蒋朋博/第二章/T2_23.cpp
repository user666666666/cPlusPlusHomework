/* FileName: T2_23.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Output the maximum and minimum values of 5 integers.
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int a[5];
 	int min,max;
 	for(int i=0;i<5;i++)
 	    cin>>a[i];
 	max=a[0];min=a[0];
 	for(int i=0;i<5;i++)
	 {
 		int temp;
 		if(max<a[i])
 		   max=a[i];
 		if(min>a[i])
 		   min=a[i];
	 }
	 cout<<min<<" "<<max<<endl;
	 return 0;
 }
