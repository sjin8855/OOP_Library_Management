#pragma once
#include <iostream>
#include <string>
using namespace std;

//å �ѱǿ� ���� Ŭ����
class book
{
protected:
	string m_bookname;//å �̸�
	int    m_membernum;

public:
	book() : m_membernum(0) {}; //å�� �����Ұ�� ����� ��ȣ�� ���� �մϴ�. 0�̸� �������� ����å
	book(string _bookname);
 	virtual void SetBook(string name, int number); 
	virtual void rentBook(int _number);
	virtual void ReturnBook();
	virtual void bookModify();
	virtual void bookList();
	virtual string book_getName();
	virtual int getMember();
};