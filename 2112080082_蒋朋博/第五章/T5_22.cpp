/* FileName: T5_22.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:德摩根定律 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	int x = 4;
 	int y = 8;
 	int a = 10;
 	int b = 5;
 	int g = 2;
 	int i = 4;
 	int j = 9;
 	if((!(x < 5)&&!(y >= 7)) == !((x < 5)||(y > 7))) 
 	{
 		cout << "!(x < 5) && !(y >= 7) is comparable to !((x < 5) || (y >= 7))" << endl;
	 }
	if ((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4))) 
	{
        cout << "!((x <= 8) && (y > 4)) is comparable to !(x <= 8) || !(y > 4)" << endl;
    }
    if (!((i > 4) || (j <= 6)) == (!(i > 4) && !(j <= 6))) 
	{
        cout << "!((i > 4) || (j <= 6)) is comparable to !(i > 4) && !(j <= 6)" << endl;
    }

    return 0;


  } 
  
