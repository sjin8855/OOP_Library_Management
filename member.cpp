#include "member.h"

member::member()
{

}

member::~member()
{

}

void member::Setmember(string name, int age, string phone, int number)
{
	m_name= name;
	m_age= age;
	m_phone= phone;
	m_number = number;
}

void member::member_list()
{
	cout.setf(ios_base::left, ios_base::adjustfield); // ��������
	cout << m_name << " "; //�̸� ���
	cout << m_age << " "; //���� ���
	cout << m_phone << " "; //��ȭ��ȣ ���
	cout << m_number << endl;
}

void member::member_modify()
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
string member::member_getName()
{
	return m_name;
}
int member::getAge()
{
	return m_age;
}
string member::getPhone()
{
	return m_phone;
}
int member::getNumber()
{
	return m_number;
}
