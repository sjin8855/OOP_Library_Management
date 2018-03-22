#pragma once
#include <queue>
#include "member.h"
#include "book.h"
using namespace std;

class library : public member , public book
{
private:
	member *m_member;
	int  m_memberCount;//맴버의 수를 카운트
	book *m_book;
	int  m_bookCount;//책의 갯수를 카운트
	static int rCount;
	int library_Num;
public:
	library();
	library(int librarynum);
	~library();
	void loadData();
	void saveData();
	void addMember();
	void addBook();
	void searchMember();
	void modifyMember();
	void rentBook();
	void returnBook();
	void listBook();
	void listMember();
	void operator=(const library &Lib);
	friend library operator+(const library &Li1, const library &Li2);
	static void RCount();
	static void printrCount();
	////////////////////////////////////////////////  book
	virtual void SetBook(string name, int number); 
	virtual void rentBook(int _number);
	virtual void ReturnBook();
	virtual void bookModify();
	virtual inline void bookList() ;
	virtual string book_getName();
	virtual int getMember();
	///////////////////////////////////////////////   member
	virtual void Setmember(string _name, int _age, string _phone, int _number);
	virtual void member_list();
	virtual void member_modify();
	virtual string member_getName();
	virtual int getAge();
	virtual string getPhone();
	virtual int getNumber();
};