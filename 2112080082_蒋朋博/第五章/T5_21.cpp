/* FileName: T5_21.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:н����� 
 */ 
 #include <iostream>
 using namespace std;
 int main()
 {
 	double wage;
 	int num,time,production;
 	float sell;
 	cout << "����Ա�����ʴ��룺 " << endl;
	cin >> num;
	switch(num)
	{
		case 1:wage = 10000;//10000Ϊ����ÿ�̶ܹ�����
		break;
		case 2:cout << "����ʱ��" << endl;
		cin >> time;
		if (time > 40)
		wage = 500 + (time - 40) * 500 / 40 * 1.5;//500ΪСʱ��40Сʱ���ܹ���
		else
		wage = 5000 / 40 * time;
		break;
		case 3:cout << "�������۶ " << endl;
		cin >> sell;
		wage = 250 + sell * 0.057;
		break;
		case 4:cout << "�����Ʒ����: " << endl;
		cin >> production;
		wage = production * 100;//100Ϊ�Ƽ�������ÿ����Ʒ�Ĺ���
		break;
		default:cout << "�������" << endl; 
	 } 
	 cout << "��Ա���Ĺ���Ϊ��" << wage << endl;
	 return 0; 
  } 

 
