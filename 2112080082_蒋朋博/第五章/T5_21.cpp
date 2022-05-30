/* FileName: T5_21.cpp
 * Author:   Jiang Pengbo
 * E-mail:   3021836828@qq.com 
 * Date:     Mar 26, 2022
 * Function:薪金计算 
 */ 
 #include <iostream>
 using namespace std;
 int main()
 {
 	double wage;
 	int num,time,production;
 	float sell;
 	cout << "输入员工工资代码： " << endl;
	cin >> num;
	switch(num)
	{
		case 1:wage = 10000;//10000为经理每周固定工资
		break;
		case 2:cout << "工作时间" << endl;
		cin >> time;
		if (time > 40)
		wage = 500 + (time - 40) * 500 / 40 * 1.5;//500为小时工40小时的总工资
		else
		wage = 5000 / 40 * time;
		break;
		case 3:cout << "输入销售额： " << endl;
		cin >> sell;
		wage = 250 + sell * 0.057;
		break;
		case 4:cout << "输入产品数量: " << endl;
		cin >> production;
		wage = production * 100;//100为计件工生产每件产品的工资
		break;
		default:cout << "输入错误！" << endl; 
	 } 
	 cout << "该员工的工资为：" << wage << endl;
	 return 0; 
  } 

 
