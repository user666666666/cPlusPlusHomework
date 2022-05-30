/* FileName: T5_18.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:½øÖÆ±í 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int i,t,m,k;
 	cout << "dec\tbin\t\toct\thex" << endl;
 	for(i=1; i<=256; i++)
 	{
 		cout << dec << i << "\t";
 		t=i;m=0;
 		for(k=256; k>=1; k/=2)
 		{
 			if(t>=k)
 			{
 				cout <<1;
 				m=1; t=t-k;
			 }
			 else
			 if(m)
			 cout << 0;
		 }
		 if(i<128)
		 cout << "\t";
		 cout << "\t" << oct << i << "\t" << hex << i << "\t" <<endl;
	 }
	 return 0;
  } 
