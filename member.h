#pragma once
#include <iostream>
#include <string>
using namespace std;

//ȸ�� �� ����� ���� Ŭ����
class member
{
protected:
	string m_name;//ȸ���� �̸�
	int  m_age;//ȸ���� ����
	string m_phone;//ȸ���� ��ȭ��ȣ
	int  m_number;//ȸ���� ��ȣ

public:
	member();//����Ʈ ������ �Լ� 
	~member();//�Ҹ��� �Լ�
	virtual void Setmember(string _name, int _age, string _phone, int _number);
	virtual void member_list();
	virtual void member_modify();
	virtual string member_getName();
	virtual int getAge();
	virtual string getPhone();
	virtual int getNumber();
};