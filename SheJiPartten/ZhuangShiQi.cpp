#include "iostream"
#include "stdlib.h"
#include "stdio.h"
using namespace std;

//定义一个对象接口，可以给这些对象动态添加职责 @@@装饰器抽象
class SComponent
{

public:
	virtual void Operation() = 0;


};
//定义具体的ConcreateComponent继承自SComponent，重写了Component类的虚函数 //装饰器具体功能
class ConcreteComponent :public SComponent
{
public:
	virtual void Operation()override
	{
		cout << "I am no decoratored ConcreteComponent" << endl;

	}




};
//维持一个指向SComponent对象的指针。该指针指向需要被装饰的对象；并定义个与Scomponent 接口一致的接口； //以多态的方式使用装饰器
class Decorator : public SComponent
{
protected:
	SComponent * m_spComponent;
public:
	Decorator()
	{}
	Decorator(SComponent *spComponent) :m_spComponent(spComponent) {}
	// 通过 SComponent 继承
	virtual void Operation() override
	{
		if (m_spComponent != nullptr)
		{
			m_spComponent->Operation();
		}
	}

};
//向组件添加职责

class ConcreteDecoratorA :public Decorator
{
protected:

public:
	ConcreteDecoratorA(SComponent *pDecorator) : Decorator(pDecorator) {}


	virtual void Operation() override
	{
		AddedBehavior();
		Decorator::Operation();


	}
	void  AddedBehavior()
	{
		cout << "This is added behavior A." << endl;
	}

};
class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(SComponent *pDecorator) :Decorator(pDecorator) {}

	virtual void Operation() override
	{
		AddedBehavior();
		Decorator::Operation();

	}
	void  AddedBehavior()
	{
		cout << "This is added behavior B." << endl;
	}


};

int main()
{
	SComponent *pComponentObj = new ConcreteComponent();
	Decorator *pDecoratorAOjb = new ConcreteDecoratorA(pComponentObj);
	pDecoratorAOjb->Operation();
	cout << "=============================================" << endl;
	Decorator *pDecoratorBOjb = new ConcreteDecoratorB(pComponentObj);
	pDecoratorBOjb->Operation();
	cout << "=============================================" << endl;
	Decorator *pDecoratorBAOjb = new ConcreteDecoratorB(pDecoratorAOjb);
	pDecoratorBAOjb->Operation();
	cout << "=============================================" << endl;
	delete pDecoratorBAOjb;
	pDecoratorBAOjb = NULL;
	delete pDecoratorBOjb;
	pDecoratorBOjb = NULL;
	delete pDecoratorAOjb;
	pDecoratorAOjb = NULL;
	delete pComponentObj;
	pComponentObj = NULL;
	getchar();

}
////
////
////
//#include <iostream>
//using namespace std;
//class Component
//{
//public:
//	virtual void Operation() = 0;
//};
//class ConcreteComponent : public Component
//{
//public:
//	void Operation()
//	{
//		cout << "I am no decoratored ConcreteComponent" << endl;
//	}
//};
//class Decorator : public Component
//{
//public:
//	Decorator(Component *pComponent) : m_pComponentObj(pComponent) {}
//	void Operation()
//	{
//		if (m_pComponentObj != NULL)
//		{
//			m_pComponentObj->Operation();
//		}
//	}
//protected:
//	Component * m_pComponentObj;
//};
//class ConcreteDecoratorA : public Decorator
//{
//public:
//	ConcreteDecoratorA(Component *pDecorator) : Decorator(pDecorator) {}
//	void Operation()
//	{
//		AddedBehavior();
//		Decorator::Operation();
//	}
//	void  AddedBehavior()
//	{
//		cout << "This is added behavior A." << endl;
//	}
//};
//class ConcreteDecoratorB : public Decorator
//{
//public:
//	ConcreteDecoratorB(Component *pDecorator) : Decorator(pDecorator) {}
//	void Operation()
//	{
//		AddedBehavior();
//		Decorator::Operation();
//	}
//	void  AddedBehavior()
//	{
//		cout << "This is added behavior B." << endl;
//	}
//};
//int main()
//{
//	Component *pComponentObj = new ConcreteComponent();
//	Decorator *pDecoratorAOjb = new ConcreteDecoratorA(pComponentObj);
//	pDecoratorAOjb->Operation();
//	cout << "=============================================" << endl;
//	Decorator *pDecoratorBOjb = new ConcreteDecoratorB(pComponentObj);
//	pDecoratorBOjb->Operation();
//	cout << "=============================================" << endl;
//	Decorator *pDecoratorBAOjb = new ConcreteDecoratorB(pDecoratorAOjb);
//	pDecoratorBAOjb->Operation();
//	cout << "=============================================" << endl;
//	delete pDecoratorBAOjb;
//	pDecoratorBAOjb = NULL;
//	delete pDecoratorBOjb;
//	pDecoratorBOjb = NULL;
//	delete pDecoratorAOjb;
//	pDecoratorAOjb = NULL;
//	delete pComponentObj;
//	pComponentObj = NULL;
//	getchar();
//}