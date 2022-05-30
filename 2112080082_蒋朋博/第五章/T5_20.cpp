/* FileName: T5_20.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:毕达哥拉斯的三元组 
 */
 #include <iostream>
 using namespace std;
 int main()
 {
 	for(int hypotenuse = 2;hypotenuse <= 500; hypotenuse++)
 	{
 		for(int side1 = 1;side1 < hypotenuse; side1++)
 		{
 			for(int side2 = side1;side2 < hypotenuse; side2++)
 			{
 				if(side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
 				cout << hypotenuse << " " << side2 << " " << side1 << endl;
			 }
		 }
	 }
	 return 0;
  } 
