/* FileName: T5_14.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:���������� 
 */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int amount ,number;
 	float price;
 	cout << "��Ʒ���Ϊ(1,2,3,4,5)" << endl;
 	cout << "�������Ʒ��ţ�";
 	cin >> number;
 	cout << "��������������";
	cin >> amount ;
	switch (number)
	{
		case 1:
			price = 2.98 * amount;
			cout << "��Ʒ1���۶" << price <<endl;
			break; 
		case 2:
			price = 4.50 * amount;
			cout << "��Ʒ2���۶" << price <<endl;
			break;
		case 3:
			price = 9.98 * amount;
			cout << "��Ʒ3���۶" << price <<endl;
			break;
		case 4:
			price = 4.49 * amount;
			cout << "��Ʒ4���۶" << price <<endl;
			break;
		case 5:
			price = 6.87 * amount;
			cout << "��Ʒ5���۶" << price <<endl;
			break;
		default:
			cout << "��Ʒ����������" << endl;
	 } 
	 return 0; 
  } 
