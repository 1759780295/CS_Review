#include <iostream>
#include <vector>
using namespace std;

void Bubble_Sort(vector<int>& vec)
{
	int len=vec.size();
	bool flag = true;
	//��һ�ַ�����ÿһ��ѭ�������Ԫ�����³�
	/*for(int i=0;i<len && flag;i++)
	{
		flag = false;
		for (int j=0;j<len-1-i;j++)
		{
			if(vec[j]>vec[j+1])
			{
				swap(vec[j],vec[j+1]);
				flag = true;
			}
		}
	}*/

	//�ڶ��ַ�����ÿһ��ѭ����СԪ�����ϸ�
	for(int i=0;i<len && flag;i++)
	{
		flag = false;
		for (int j=len-2;j>=i;j--)
		{
			if(vec[j] > vec[j+1])
			{

				swap(vec[j],vec[j+1]);
				flag = true;
			}
		}
	}
	
}

int main()
{
	vector<int> vec_in;
	int n,a;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a;
		vec_in.push_back(a);
	}
	Bubble_Sort(vec_in);
	for(int j=0;j<vec_in.size();j++)
	{
		cout << vec_in[j] <<endl;
	}
	system("pause");
	return 0;
}