#include <vector>
#include <memory>
using namespace std;

class B;
class A
{
public:
	����shared_ptr<B> m_b;
};

class B
{
public:
	����shared_ptr<A> m_a;
};

int main()
{
	while(true)
	{
			������shared_ptr<A> a(new A); //new������A�����ü�����ʱΪ1
				��shared_ptr<B> b(new B); //new������B�����ü�����ʱΪ1
				a->m_b = b; //B�����ü�������Ϊ2
						��������b->m_a = a; //A�����ü�������Ϊ2
	  ����}

	  ����//b�ȳ�������B�����ü�������Ϊ1����Ϊ0�����Զ��ϵ�B�ռ�û�б��ͷţ���B���е�AҲû�л��ᱻ������A�����ü���Ҳ��ȫû����

	  ����//a���������ͬ��A�����ü�������Ϊ1����Ϊ0�����Զ���A�Ŀռ�Ҳû�б��ͷ�

}