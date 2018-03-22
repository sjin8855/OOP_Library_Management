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
	int library_Num;	//도서관 번호
	library data1(1), data2(2), data3(3);

	cout<<"어느 도서관을 여시겠습니까?(1, 2) \n(0 to quit) (3 to 1+2 -> 새로운 txt파일에 저장 후 종료): ";
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
			cout<<"프로그램을 종료합니다."<<endl;
			exit(100);
		}
	}//try

	catch(int &error)
	{
		cout<<"잘못된 번호를 입력하셨습니다. 프로그램을 종료합니다.\n";
		return 100;
	}//catch
	return 0;
}

void Menu()						//메뉴함수
{
	menuData num= {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	cout << "\n아래의 메뉴에서 원하는 기능을 선택하세요 \n \n";
	cout << num.Data[0] <<". 회원 추가\n";
	cout << num.Data[1] << ". 회원 검색\n";
	cout << num.Data[2] << ". 회원 정보수정\n"; 
	cout << num.Data[3] << ". 회원 목록 보기\n";
	cout << num.Data[4] << ". 책 대출 하기\n";
	cout << num.Data[5] << ". 책 반납 하기\n";
	cout << num.Data[6] << ". 책 추가 하기\n";
	cout << num.Data[7] << ". 남은 책 목록 보기\n";
	cout << num.Data[8] << ". 대출/반납 횟수 확인\n";
	cout << num.Data[9] << ". 종료 \n \n";
	cout << " >> ";
}

int Operate(library data)
{
	int val;
	data.loadData();
	cout << "\n 도서관리 프로그램 \n";
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
			cout<<"이번 프로그램 실행 후, 대출, 반납의 총 횟수의 합 : ";
			data.printrCount();
			break;

		case QUIT:
			data.saveData();
			cout << "\n프로그램을 종료합니다. \n";           
			exit(100);

		default:
			cout << "잘못된 입력입니다 . " <<  val << endl;
			break;
		}
	}
}