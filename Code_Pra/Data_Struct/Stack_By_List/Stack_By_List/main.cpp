//������ʵ��ջ��ʹ��һ��indexָ��ָ��ջ��Ԫ�أ�ѹջ���̲��������ͷ�巨,������ջ��index����ƶ�����
#include <bits/stdc++.h>
using namespace std;


class ListNode
{
public:
	int val;
	ListNode* next;
	ListNode(int a):val(a),next(nullptr){}
};



class Stack
{
public:
	Stack():index(nullptr){}
	void push(int a)
	{
		if(!index)
		{
			index=new ListNode(a);
			return;
		}
		ListNode* node=new ListNode(a);
		node->next=index;
		index=node;
	}
	void pop()
	{
		if(!index)
			throw "stack is empty!";

		ListNode* node=index;
		index=index->next;
		delete node;
	}

	int top()
	{
		if(!index)
			throw "stack is empty!";

		return index->val;
	}
	void clear()
	{
		while(index)
		{
			ListNode* node=index;
			index=index->next;
			delete node;
		}
		return;
	}
	int size()
	{
		int cnt=0;
		ListNode* cur=index;
		while(cur)
		{
			cnt++;
			cur=cur->next;
		}
		return cnt;
	}
private:
	//ListNode* first;
	ListNode* index;
};

int main()
{
	Stack sta;
	try{
		//sta.pop();
		sta.push(1);
		sta.push(2);
		sta.push(3);
		sta.pop();
		sta.pop();
		sta.pop();
		//sta.pop();
		cout<<sta.top()<<endl;
	}
	catch(char* str)
	{
		cout<<str<<endl;
	}
	

	system("pause");
	return 0;

}