//#include "stdio.h"
//#include "iostream"
//#include "list"
//#include "vector"
//#include "stdlib.h"
//using namespace std;
//class iteam//����ĸ��࣬���඼����ʿץת���ɸ���
//{
//
//public:
//	iteam() {};
//
//};
//class Jiji :public iteam
//{
//public:
//	Jiji()
//	{
//		printf_s("Jiji");
//
//	}
//
//
//};
//class Hand : public iteam
//{
//
//public:
//	Hand()
//	{
//		printf_s("Hand");
//
//	}
//
//
//};
//class Foot :public iteam
//{
//
//public:
//	Foot()
//	{
//
//		printf_s("Foot");
//	}
//
//};
//class Head :public iteam
//
//{
//public:
//	Head()
//	{
//		printf_s("Head");
//	}
//
//};
//
////�������� �ṩ����add���� 
//class Meal
//{
//public:
//	list<iteam> iteams;
//
//	Meal()
//	{
//
//		printf_s("Meal");
//
//	}
//	void addIteam(iteam *item, int count)
//	{
//		for (int i = 0; i < count; i++)
//		{
//			iteams.push_back(*item);
//			printf_s("additeamSuccess");
//		}
//
//
//	}
//
//};
////����demo
//class MealBuilder
//{
//
//
//public:
//	//��������
//	Meal BuildMan()
//	{
//		Meal *meal = new Meal();
//		//Leg *leg = new Leg();
//		//��������ͬһ������ɶ����ӣ�
//		meal->addIteam(new Jiji, 2);
//
//		return *meal;
//	}
//	Meal buildWoman()
//	{
//	
//	
//	}
//
//};
//int main()
//{
//
//	MealBuilder *mealbuiler = new MealBuilder();
//	 Meal meal= mealbuiler->BuildMan();
//	 
//	getchar();
//	
//
//
//}
