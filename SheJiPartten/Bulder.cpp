//#include "stdio.h"
//#include "iostream"
//#include "list"
//#include "vector"
//#include "stdlib.h"
//using namespace std;
//class iteam//组件的父类，子类都将隐士抓转换成该类
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
////建造者类 提供建造add方法 
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
////建造demo
//class MealBuilder
//{
//
//
//public:
//	//建造男人
//	Meal BuildMan()
//	{
//		Meal *meal = new Meal();
//		//Leg *leg = new Leg();
//		//添加组件（同一个组件可多次添加）
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
