/*******************************************************************
 * Copyright (C) Jerry Jiang
 *               
 * File Name   : iter_swap02.cpp
 * Author      : Jerry Jiang
 * Create Time : 2012-3-26 23:58:29
 * Mail        : jbiaojerry@gmail.com
 * Blog        : http://blog.csdn.net/jerryjbiao 
 *               
 * Description : �򵥵ĳ���ڹ��C++ STL�㷨ϵ��֮ʮ��                   
 *               �����㷨 : ����������iter_swap
 *
 ******************************************************************/
 
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <ostream>
#include <iterator>
 
using namespace std;
 
int main( )
{
   deque<int> deq1;
   deque<int>::iterator d1_Iter;
   ostream_iterator<int> otpt(cout," ");
 
   deq1.push_back ( 2 );
   deq1.push_back ( 4 );
   deq1.push_back ( 9 );
 
   //ͨ��copy������г�ʼ����
   cout << "The deque is:\n";
   copy(deq1.begin(), deq1.end(), otpt);
 
   //ͨ��iter_swap�㷨���������е�һ�������һ��Ԫ��
   iter_swap(deq1.begin() , --deq1.end());
 
   //���ͨ��iter_swap������Ķ���
   cout << "\n\nThe deque of CInts with first & last elements swapped is:\n ";
   copy(deq1.begin(), deq1.end(), otpt);
 
   //ͨ��swap�����㷨��ԭ�����е�Ԫ��
   swap (*deq1.begin(), *(deq1.end()-1));
 
   cout << "\n\nThe deque of CInts with first & last elements swapped back is:\n ";
   copy(deq1.begin(), deq1.end(), otpt);
   cout << endl;
   
   cout << "*********************************" << endl;
 
 
   // ͨ��iter_swap����vector��deque������ͬ�����е�Ԫ��
   vector <int> v1;
   deque <int> deq2;
 
   //��ʼ������v1
   for ( size_t i = 0 ; i <= 3 ; ++i )
   {
      v1.push_back( i );
   }
 
   //��ʼ������deq2
   for ( size_t ii = 4 ; ii <= 5 ; ++ii )
   {
      deq2.push_back( ii );
   }
 
   cout << "\nVector v1 is : " ;
   copy(v1.begin(), v1.end(), otpt);
   
   cout << "\nDeque deq2 is : " ;
   copy(deq2.begin(), deq2.end(), otpt);
   cout << endl;
   
   //��������v1�Ͷ���deq2�ĵ�һ��Ԫ��
   //iter_swap( v1.begin(), deq2.begin() );
   swap(v1.front(),deq2.front());
   cout << "\n\nAfter exchanging first elements,\n vector v1 is:  " ;
   copy(v1.begin(), v1.end(), otpt);
 
   cout << " \n deque deq2 is: ";
   copy(deq2.begin(), deq2.end(), otpt);
 
   cout << endl;
 
   system("pause");
   return 0;
}
