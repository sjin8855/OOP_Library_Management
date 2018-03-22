#include "library.h"
#include <fstream>

int library::rCount = 0;
library::library()
{
	m_member = new member[100];
	m_book = new book[100];
	m_memberCount = 0;
	m_bookCount = 0;
}

library::library(int librarynum)
{
	m_member = new member[100];
	m_book = new book[100];
	m_memberCount = 0;
	m_bookCount = 0;
	library_Num = librarynum;
}

library::~library()
{
	//delete[] m_member;
	//delete[] m_book;
}

void library::loadData()
{

	switch(library_Num)
	{
	case 1:
		{
			{
				ifstream ifs1("member1.txt");
				ifstream ifs2("book1.txt");
				string name, phone;
				int  age, number, rent;

				if(ifs1 == NULL) 
					return;
				if(ifs2 == NULL) 
					return;

				while(true)
				{
					ifs1 >> name;
					if(ifs1.eof()) 
						break;
					ifs1 >> age;
					ifs1 >> phone;
					ifs1 >> number;
					(*(m_member+m_memberCount)).Setmember(name,age,phone,number);//파일에서 읽어온 데이타를 입력
					m_memberCount++;//멤버의 수를 증가
				}

				while(true)
				{
					ifs2 >> name;
					if(ifs2.eof()) 
						break;
					ifs2 >> rent;

					(*(m_book+m_bookCount)).SetBook(name, rent);
					m_bookCount++;//책의 갯수를 증가
				}

				ifs1.close();
				ifs2.close();
			}
			break;
		}
	case 2:
		{
			{
				ifstream ifs1("member2.txt");
				ifstream ifs2("book2.txt");
				string name, phone;
				int  age, number, rent;

				if(ifs1 == NULL) 
					return;
				if(ifs2 == NULL) 
					return;

				while(true)
				{
					ifs1 >> name;
					if(ifs1.eof()) 
						break;
					ifs1 >> age;
					ifs1 >> phone;
					ifs1 >> number;
					(*(m_member+m_memberCount)).Setmember(name,age,phone,number);//파일에서 읽어온 데이타를 입력
					m_memberCount++;//멤버의 수를 증가
				}

				while(true)
				{
					ifs2 >> name;
					if(ifs2.eof()) 
						break;
					ifs2 >> rent;

					(*(m_book+m_bookCount)).SetBook(name, rent);
					m_bookCount++;//책의 갯수를 증가
				}

				ifs1.close();
				ifs2.close();
			}
			break;
		}	
	case 3:
		{
			{
				ifstream ifs1("member3.txt");
				ifstream ifs2("book3.txt");
				string name, phone;
				int  age, number, rent;

				if(ifs1 == NULL) 
					return;
				if(ifs2 == NULL) 
					return;

				while(true)
				{
					ifs1 >> name;
					if(ifs1.eof()) 
						break;
					ifs1 >> age;
					ifs1 >> phone;
					ifs1 >> number;
					(*(m_member+m_memberCount)).Setmember(name,age,phone,number);//파일에서 읽어온 데이타를 입력
					m_memberCount++;//멤버의 수를 증가
				}

				while(true)
				{
					ifs2 >> name;
					if(ifs2.eof()) 
						break;
					ifs2 >> rent;

					(*(m_book+m_bookCount)).SetBook(name, rent);
					m_bookCount++;//책의 갯수를 증가
				}

				ifs1.close();
				ifs2.close();
			}
			break;
		}

	}
}

void library::saveData()
{
	switch(library_Num)
	{
	case 1:
		{
			ofstream ofs1("member1.txt");
			ofstream ofs2("book1.txt");

			for(int i=0;i < m_memberCount;i++)//멤버의 수만큼 파일에 저장
			{
				ofs1 << (*(m_member+i)).member_getName() << endl;  
				ofs1 << (*(m_member+i)).getAge() << endl;
				ofs1 << (*(m_member+i)).getPhone() << endl;
				ofs1 << (*(m_member+i)).getNumber() << endl;  
			}

			for(int i=0;i < m_bookCount;i++)//책의 갯수 만큼 파일에 저장
			{
				ofs2 << (*(m_book+i)).book_getName() << endl;  
				ofs2 << (*(m_book+i)).getMember() << endl;  
			}

			ofs1.close();
			ofs2.close();
			break;
		}

	case 2:
		{
			ofstream ofs1("member2.txt");
			ofstream ofs2("book2.txt");

			for(int i=0;i < m_memberCount;i++)//멤버의 수만큼 파일에 저장
			{
				ofs1 << (*(m_member+i)).member_getName() << endl;  
				ofs1 << (*(m_member+i)).getAge() << endl;
				ofs1 << (*(m_member+i)).getPhone() << endl;
				ofs1 << (*(m_member+i)).getNumber() << endl;  
			}

			for(int i=0;i < m_bookCount;i++)//책의 갯수 만큼 파일에 저장
			{
				ofs2 << (*(m_book+i)).book_getName() << endl;  
				ofs2 << (*(m_book+i)).getMember() << endl;  
			}

			ofs1.close();
			ofs2.close();
			break;
		}

	case 3:
		{
			ofstream ofs1("member3.txt");
			ofstream ofs2("book3.txt");

			for(int i=0;i < m_memberCount;i++)//멤버의 수만큼 파일에 저장
			{
				ofs1 << (*(m_member+i)).member_getName() << endl;  
				ofs1 << (*(m_member+i)).getAge() << endl;
				ofs1 << (*(m_member+i)).getPhone() << endl;
				ofs1 << (*(m_member+i)).getNumber() << endl;  
			}

			for(int i=0;i < m_bookCount;i++)//책의 갯수 만큼 파일에 저장
			{
				ofs2 << (*(m_book+i)).book_getName() << endl;  
				ofs2 << (*(m_book+i)).getMember() << endl;  
			}

			ofs1.close();
			ofs2.close();
			break;
		}

	}
}
void library::addMember()
{
	(*(m_member + m_memberCount)).member_modify();
	m_memberCount++;
}
void library::addBook()
{ 
	(*(m_book + m_bookCount)).bookModify();
	m_bookCount++;
}
void library::searchMember()
{
	string name;

	cout << "find name:";
	cin >> name;

	for(int i=0;i < m_memberCount;i++)
	{
		if((*(m_member+i)).member_getName() == name)
		{
			(*(m_member+i)).member_list();
		}
	}
}
void library::modifyMember()
{
	string name;

	cout << "modify name:";
	cin >> name;

	for(int i=0;i < m_memberCount;i++)
	{
		if((*(m_member+i)).member_getName() == name)
		{
			(*(m_member+i)).member_modify();
		}
	}
}

void library::rentBook()
{
	string name, bookname;
	int i,j,chk = 0;

	cout << "rent member name:";
	cin >> name;
	cout << "book name:";
	cin >> bookname;

	for(i=0;i < m_memberCount;i++)
	{
		if((*(m_member+i)).member_getName() == name)
		{
			chk++;
			break;
		}
	}
	if(chk == 0)
	{
		cout << "member not find" << endl;
		return;
	}

	chk = 0;
	for(j=0;j < m_bookCount;j++)
	{
		if((*(m_book+j)).book_getName() == bookname)
		{
			chk++;
			break;
		}
	}
	if(chk == 0)
	{
		cout << "book not find" << endl;
		return;
	}

	(*(m_book+j)).rentBook((*(m_member+i)).getNumber());
	cout << "rent Book OK" << endl;

}

void library::returnBook()
{
	string bookname;
	int i,chk = 0;

	cout << "return book name:";
	cin >> bookname;

	for(i=0;i < m_bookCount;i++)
	{
		if((*(m_book+i)).book_getName() == bookname)
		{
			chk++;
			break;
		}
	}
	if(chk == 0)
	{
		cout << "book not find" << endl;
		return;
	}

	(*(m_book+i)).ReturnBook();
	cout << "return Book OK" << endl;

}

void library::listBook()//빌려가지 않은 책만 출력
{
	queue<book*> temporaryStorage;
	for(int i=0;i < m_bookCount;i++)
	{
		if((*(m_book+i)).getMember() == 0)
			//(*(m_book+i)).bookList();
			temporaryStorage.push(m_book+i);
	}
	while(!temporaryStorage.empty())
	{
		temporaryStorage.front()->bookList();
		temporaryStorage.pop();
	}
}

void library::listMember()//멤버 전체를 출력
{
	for(int i=0;i < m_memberCount;i++)
	{
		(*(m_member+i)).member_list();
	}
}

void library::operator=(const library &Li)
{
	m_bookCount = Li.m_bookCount;
	m_memberCount = Li.m_memberCount;

	ofstream ofs1;
	ofstream ofs2;
	ifstream ifs1("member3.txt");
	ifstream ifs2("book3.txt");

	if(library_Num == 1)
	{
		ofs1.open("member1.txt");
		ofs2.open("book1.txt");
	}
	else if(library_Num == 2)
	{
		ofs1.open("member2.txt");
		ofs2.open("book2.txt");
	}

	char ch;

	while(ifs1.get(ch))
		ofs1 << ch;

	while(ifs2.get(ch))
		ofs2 << ch;

	ofs1.close();
	ofs2.close();
	ifs1.close();
	ifs2.close();

	//return library(Li);
}

library operator+(const library& Li1,const library& Li2)
{
	ifstream ifs1;
	ifstream ifs2;
	ifstream ifs3;
	ifstream ifs4;
	ofstream ofs1;
	ofstream ofs2;
	library data;

	if(Li1.library_Num == Li2.library_Num)
	{
		cout << "Same! Error" << endl;
		exit(0);
	}

	if(Li1.library_Num == 1)
	{
		ifs1.open("member1.txt");
		ifs2.open("book1.txt");
	}	
	else if(Li1.library_Num == 2)
	{
		ifs1.open("member2.txt");
		ifs2.open("book2.txt");
	}
	
	if(Li2.library_Num == 1)
	{
		ifs3.open("member1.txt");
		ifs4.open("book1.txt");
	}	
	else if(Li2.library_Num == 2)
	{
		ifs3.open("member2.txt");
		ifs4.open("book2.txt");
	}

	ofs1.open("member3.txt");
	ofs2.open("book3.txt");

	char ch;
	while(ifs1.get(ch))
		ofs1 << ch;

	while(ifs2.get(ch))
		ofs2 << ch;

	while(ifs3.get(ch))
		ofs1 << ch;

	while(ifs4.get(ch))
		ofs2 << ch;

	data.m_memberCount = Li1.m_memberCount + Li2.m_memberCount;
	data.m_bookCount = Li1.m_bookCount + Li2.m_bookCount;
	
	ifs1.close();
	ifs2.close();
	ifs3.close();
	ifs4.close();
	ofs1.close();
	ofs2.close();
	return data;
	//return Li1+Li2;
}



void library::RCount()
{
	rCount++;
}

void library::printrCount()
{
	cout<<rCount<<endl;
}

///////////////////////////////////////////   book

void library::SetBook(string name, int number)
{ 
	m_bookname = name;
	m_membernum = number;
}

void library::rentBook(int _number)
{
	m_membernum = _number;
}

void library::ReturnBook()
{
	m_membernum = 0;
}

void library::bookModify()
{
	cout << "book name:";
	cin >> m_bookname;
	m_membernum = 0;
}


string library::book_getName()
{
	return m_bookname;
}

int library::getMember()
{
	return m_membernum;
}

void library::bookList()
{
	cout << m_bookname << endl;
}
///////////////////////////// member
void library::Setmember(string name, int age, string phone, int number)
{
	m_name= name;
	m_age= age;
	m_phone= phone;
	m_number = number;
}

void library::member_list()
{
	cout.setf(ios_base::left, ios_base::adjustfield); // 왼쪽정렬
	cout << m_name << " "; //이름 출력
	cout << m_age << " "; //나이 출력
	cout << m_phone << " "; //전화번호 출력
	cout << m_number << endl;
}

void library::member_modify()
{
	cout << "name:";
	cin >> m_name;
	cout << "age:";
	cin >> m_age;
	cout << "phone:";
	cin >> m_phone;
	cout << "number:";
	cin >> m_number;
}
string library::member_getName()
{
	return m_name;
}
int library::getAge()
{
	return m_age;
}
string library::getPhone()
{
	return m_phone;
}
int library::getNumber()
{
	return m_number;
}

