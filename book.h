#pragma once
#include <iostream>
#include <string>
using namespace std;

//책 한권에 대한 클래스
class book
{
protected:
	string m_bookname;//책 이름
	int    m_membernum;

public:
	book() : m_membernum(0) {}; //책을 대출할경우 멤버의 번호를 저장 합니다. 0이면 빌려가지 않은책
	book(string _bookname);
 	virtual void SetBook(string name, int number); 
	virtual void rentBook(int _number);
	virtual void ReturnBook();
	virtual void bookModify();
	virtual void bookList();
	virtual string book_getName();
	virtual int getMember();
};