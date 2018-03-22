#include "book.h"
void book::SetBook(string name, int number)
{ 
	m_bookname = name;
	m_membernum = number;
}

void book::rentBook(int _number)
{
	m_membernum = _number;
}

void book::ReturnBook()
{
	m_membernum = 0;
}

void book::bookModify()
{
	cout << "book name:";
	cin >> m_bookname;
	m_membernum = 0;
}


string book::book_getName()
{
	return m_bookname;
}

int book::getMember()
{
	return m_membernum;
}

void book::bookList()
{
	cout << m_bookname << endl;
}