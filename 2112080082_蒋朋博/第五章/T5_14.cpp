/* FileName: T5_14.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:计算总销量 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int amount ,number;
 	float price;
 	cout << "产品编号为(1,2,3,4,5)" << endl;
 	cout << "请输入产品编号：";
 	cin >> number;
 	cout << "请输入销售量：";
	cin >> amount ;
	switch (number)
	{
		case 1:
			price = 2.98 * amount;
			cout << "产品1销售额：" << price <<endl;
			break; 
		case 2:
			price = 4.50 * amount;
			cout << "产品2销售额：" << price <<endl;
			break;
		case 3:
			price = 9.98 * amount;
			cout << "产品3销售额：" << price <<endl;
			break;
		case 4:
			price = 4.49 * amount;
			cout << "产品4销售额：" << price <<endl;
			break;
		case 5:
			price = 6.87 * amount;
			cout << "产品5销售额：" << price <<endl;
			break;
		default:
			cout << "产品编号输入错误" << endl;
	 } 
	 return 0; 
  } 
