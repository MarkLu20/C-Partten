#include "iostream"
#include "stdlib.h"
#include "stdio.h"
using namespace std;

//����һ������ӿڣ����Ը���Щ����̬���ְ�� @@@װ��������
class SComponent
{

public:
	virtual void Operation() = 0;


};
//��������ConcreateComponent�̳���SComponent����д��Component����麯�� //װ�������幦��
class ConcreteComponent :public SComponent
{
public:
	virtual void Operation()override
	{
		cout << "I am no decoratored ConcreteComponent" << endl;

	}




};
//ά��һ��ָ��SComponent�����ָ�롣��ָ��ָ����Ҫ��װ�εĶ��󣻲��������Scomponent �ӿ�һ�µĽӿڣ� //�Զ�̬�ķ�ʽʹ��װ����
class Decorator : public SComponent
{
protected:
	SComponent * m_spComponent;
public:
	Decorator()
	{}
	Decorator(SComponent *spComponent) :m_spComponent(spComponent) {}
	// ͨ�� SComponent �̳�
	virtual void Operation() override
	{
		if (m_spComponent != nullptr)
		{
			m_spComponent->Operation();
		}
	}

};
//��������ְ��

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