#pragma once
#include <iostream>
#include <string>
using namespace std;

//회원 한 사람에 대한 클래스
class member
{
protected:
	string m_name;//회원의 이름
	int  m_age;//회원의 나이
	string m_phone;//회원의 전화번호
	int  m_number;//회원의 번호

public:
	member();//디폴트 생성자 함수 
	~member();//소멸자 함수
	virtual void Setmember(string _name, int _age, string _phone, int _number);
	virtual void member_list();
	virtual void member_modify();
	virtual string member_getName();
	virtual int getAge();
	virtual string getPhone();
	virtual int getNumber();
};