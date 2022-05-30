/* FileName: T4_13.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Æû¶ÖÀïÊý 
 */
#include <iostream>

using namespace std;

int main()
{
  double mile = 0,gallon = 0,MPG = 0,t = 0,sum1 =0 ,sum2 = 0;
  while(mile != -1)
  {
      cin>>mile;
      if(mile!=-1)
      {
      cin>>gallon;
      sum1+=mile;
      sum2+=gallon;
      MPG=mile/gallon;
      t=sum1/sum2;
      cout<<MPG<<endl;
      cout<<t<<endl;
      }
      cout<<endl;

  }
    return 0;
}
