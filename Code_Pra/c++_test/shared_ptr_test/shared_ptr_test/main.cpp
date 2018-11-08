#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

class ClassB;

class ClassA
{
public:
	ClassA() { cout << "ClassA Constructor..." << endl; }
	~ClassA() { cout << "ClassA Destructor..." << endl; }
	shared_ptr<ClassB> pb;  // ��A������B
	//weak_ptr<ClassB> pb;
};

class ClassB
{
public:
	ClassB() { cout << "ClassB Constructor..." << endl; }
	~ClassB() { cout << "ClassB Destructor..." << endl; }
	shared_ptr<ClassA> pa;  // ��B������A
	//weak_ptr<ClassA> pa;
};

int main() 
{
	/*shared_ptr<int> sp(new int(10));
	shared_ptr<int> sp1(sp);
	shared_ptr<int> sp2(new int(20));
	weak_ptr<int> wp = sp;

	shared_ptr<string> pstr(new string("xcg"));

	cout << pstr->size() << endl;
	cout << pstr->back() << endl;
	cout << sp.use_count() << endl;
	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;
	cout << wp.use_count() << endl;

	sp2 = sp;

	cout << sp.use_count() << endl;
	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;
	cout << wp.use_count() << endl;
	
	shared_ptr<int> sp3 = wp.lock();
	wp.reset();

	cout << sp.use_count() << endl;
	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;
	cout << wp.use_count() << endl;

	if(!sp.unique())
		sp.reset(new int(100));

	if(!wp.expired())
		cout << "cnt is not 0" << endl;

	cout << sp.use_count() << endl;
	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;
	cout << wp.use_count() << endl;*/
	//ѭ������
	while (1)
	{
		shared_ptr<ClassA> spa = make_shared<ClassA>();
		shared_ptr<ClassB> spb = make_shared<ClassB>();
		spa->pb = spb;
		spb->pa = spa;

		std::cout << "spa use_cout:" << spa.use_count() << " spb use_cout:" << spb.use_count() << std::endl;//spa: 2 spb:2
	}
	

	
	
	// ����������˼��һ�£�spa��spb���ͷ���Դô�� ����������ʱ���ü�����һ����ʱΪ2����һ��Ϊ0�������ڴ治�ͷ�
	//system("pause");
	return 0;
}