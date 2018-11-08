#include <iostream>
class Test
{
public:
	Test()
	{
		std::cout << "Constructor is executed\n";
	}
	~Test()
	{
		std::cout << "Destructor is executed\n";
	}
};

void myfunc()
{
	static Test obj;
} // ��������ʱ��obj���ᱻ���ģ���Ϊ�Ǿ�̬����

int main()
{
	std::cout << "main() starts\n";
	//myfunc();    // ���ﲻ�����������������Ϊ�������з�����Ǿ�̬����
	std::cout << "main() terminates\n";
	return 0;
}
