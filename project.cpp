#include "library.h"
#include "member.h"
#include "book.h"
using namespace std;

//int library::rCount = 0;
enum{QUIT=0, ADDMEMBER=1, SEARCHMEMBER, MODIFYMEMBER, LISTMEMBER, RENTBOOK, RETURNBOOK, ADDBOOK, LISTBOOK, PRINTRCOUNT};

union menuData
{
	int Data[10];
};

void Menu ();
int Operate(library data);

int main()
{
	int library_Num;	//������ ��ȣ
	library data1(1), data2(2), data3(3);

	cout<<"��� �������� ���ðڽ��ϱ�?(1, 2) \n(0 to quit) (3 to 1+2 -> ���ο� txt���Ͽ� ���� �� ����): ";
	cin >> library_Num;

	try
	{
		if(library_Num>3 || library_Num<0)
			throw library_Num;

		switch(library_Num)
		{
		case 1:
			Operate(data1);
			break;

		case 2:
			Operate(data2);
			break;

		case 3:
			data3=data1+data2;

		case 0:
			cout<<"���α׷��� �����մϴ�."<<endl;
			exit(100);
		}
	}//try

	catch(int &error)
	{
		cout<<"�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n";
		return 100;
	}//catch
	return 0;
}

void Menu()						//�޴��Լ�
{
	menuData num= {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	cout << "\n�Ʒ��� �޴����� ���ϴ� ����� �����ϼ��� \n \n";
	cout << num.Data[0] <<". ȸ�� �߰�\n";
	cout << num.Data[1] << ". ȸ�� �˻�\n";
	cout << num.Data[2] << ". ȸ�� ��������\n"; 
	cout << num.Data[3] << ". ȸ�� ��� ����\n";
	cout << num.Data[4] << ". å ���� �ϱ�\n";
	cout << num.Data[5] << ". å �ݳ� �ϱ�\n";
	cout << num.Data[6] << ". å �߰� �ϱ�\n";
	cout << num.Data[7] << ". ���� å ��� ����\n";
	cout << num.Data[8] << ". ����/�ݳ� Ƚ�� Ȯ��\n";
	cout << num.Data[9] << ". ���� \n \n";
	cout << " >> ";
}

int Operate(library data)
{
	int val;
	data.loadData();
	cout << "\n �������� ���α׷� \n";
	while(true)
	{
		Menu();
		cin >> val;

		switch(val)
		{
		case ADDMEMBER:
			data.addMember();
			break;

		case SEARCHMEMBER:
			data.searchMember();
			break;

		case MODIFYMEMBER:
			data.modifyMember();
			break;

		case LISTMEMBER:     
			data.listMember();
			break;

		case RENTBOOK:  
			data.rentBook();
			data.RCount();
			break;

		case RETURNBOOK:     
			data.returnBook();
			data.RCount();
			break;

		case ADDBOOK:     
			data.addBook();
			break;

		case LISTBOOK:     
			data.listBook();
			break;

		case PRINTRCOUNT:
			cout<<"�̹� ���α׷� ���� ��, ����, �ݳ��� �� Ƚ���� �� : ";
			data.printrCount();
			break;

		case QUIT:
			data.saveData();
			cout << "\n���α׷��� �����մϴ�. \n";           
			exit(100);

		default:
			cout << "�߸��� �Է��Դϴ� . " <<  val << endl;
			break;
		}
	}
}