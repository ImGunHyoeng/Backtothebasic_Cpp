#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;


struct Donator
{
	char name[20];
	double money;
};
int main()
{
	int count;
	ifstream inFile;
	inFile.open("DonationList.txt");
	if (!inFile.is_open())
	{
		cout << "������ �����ϴ�.";
	}
	inFile >> count;
	inFile.get();

	Donator* donation = new Donator[count];

	for (int i = 0; i < count; i++)
	{
		inFile.getline(donation[i].name, 20);
		inFile >> donation[i].money;
		inFile.get();
		//getline(inFile, donation[i].money);
		//donation[i].money
	}
	for (int i = 0; i < count; i++)
	{
		if (donation[i].money >= 10000)
		{
			cout << "��ױ����\n" << donation[i].name <<"\n" << donation[i].money << endl;
		}
		else
		{
			cout << "�Ҿױ����\n" << donation[i].name << "\n" << donation[i].money << endl;
		}
	}
	cout << "����ڰ� �����ϴ�";
	inFile.close();
	delete []donation;
}


////
////1��
////char ch;
////std::cin >> ch;
////while (ch != '@')
////{
////	if (islower(ch))
////		ch = toupper(ch);
////	else
////		ch = tolower(ch);
////	if (!isdigit(ch))
////		std::cout << ch;
////	std::cin >> ch;
////}

//2��
//double givemoney[Max];
//double temp;
//int count = 0;
//double totalmoney = 0;
//double average = 0;
//int higgerthanaverage = 0;
//for (; count < Max && std::cin >> givemoney[count]; count++)
//{
//
//}
//
//for (int i = 0; i < count; i++)
//	totalmoney += givemoney[i];
//average = totalmoney / count;
//for (int i = 0; i < count; i++)
//{
//	if (givemoney[i] > average)
//		higgerthanaverage++;
//}
//
//std::cout << "���" << totalmoney / count << "��պ��� ū ���" << higgerthanaverage;
//
//return 0;

//3��
//using namespace std;
//char ch;
//cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)" << endl;
//cout << "c) camera \t\tp) pianist" << endl;
//cout << "t) tree \t\tg) game" << endl;
//while (cin >> ch && ch != 'q')
//switch (ch)
//{
//case 'c':
//	break;
//case 'p':
//	break;
//case 't':
//	break;
//case 'g':
//	break;
//default:
//	cout << "c,p,t,g �߿��� �ϳ��� �����ϼ���" << endl;
//	break;
//}
//using namespace std;
//struct bop {
//	char fullname[strsize];
//	char title[strsize];
//	char bopname[strsize];
//	int preference;
//};
//
//bop group[3] = { {"gunhyoeng","���","qwer",2},{"iM","ssd","like",3},{"jM","sd","hike",5} };
//char ch;
//while (cin >> ch && ch != 'q')
//{
//	switch (ch)
//	{
//	case 'a':
//		for (int i = 0; i < 3; i++)
//			cout << group[i].fullname;
//		break;
//	case 'b':
//
//		for (int i = 0; i < 3; i++)
//			cout << group[i].title;
//		break;
//	case 'c':
//
//		for (int i = 0; i < 3; i++)
//			cout << group[i].bopname;
//		break;
//
//	case 'd':
//
//		for (int i = 0; i < 3; i++)
//			cout << group[i].preference;
//		break;
//	default:
//		break;
//	}
//}
//return 0;

//5��
//int tebapincome;
///*5000�� ���� ����ġ��� 20000 ,30000*/
//while (std::cin >> tebapincome && tebapincome >= 0)
//{
//	int tebaptax = 0;
//	if (tebapincome >= 10000)
//	{
//		tebaptax += 10000 * 0.1f;
//	}
//	else
//	{
//		tebaptax += (tebapincome - 5000) * 0.1f;
//	}
//
//	if (tebapincome >= 20000)
//	{
//		tebaptax += 20000 * 0.15f;
//	}
//	else
//	{
//		tebaptax += (tebapincome - 15000) * 0.15f;
//	}
//
//	if (tebapincome >= 35000)
//	{
//		tebaptax += (tebapincome - 35000) * 0.2f;
//	}
//	std::cout << tebaptax;
//}
//return 0;

//6��
//struct Donator
//{
//	string name;
//	double money;
//};
//int main()
//{
//	int count;
//	cout << "����Ϸ��� ��� �ο�:";
//	cin >> count;
//
//	Donator* donation = new Donator[count];
//
//	for (int i = 0; i < count; i++)
//	{
//		char name[80];
//		double _money;
//		cout << "����� �̸�:";
//		cin >> name;
//		cout << "��� �ݾ�:";
//		cin >> _money;
//		donation[i].name = name;
//		donation[i].money = _money;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		if (donation[i].money >= 10000)
//		{
//			cout << "��ױ����\n" << donation[i].name << donation[i].money << endl;
//		}
//		else
//		{
//			cout << "�Ҿױ����\n" << donation[i].name << donation[i].money << endl;
//		}
//	}
//	cout << "����ڰ� �����ϴ�";
//	delete donation[];
//}

//7��
//string words;
//char ch;
//int vowel_ct = 0;
//int consonant_ct = 0;
//int etc_ct = 0;
//bool word = true;
//cout << "�ܾ���� �Է��Ͻÿ� (�������� q)" << endl;
////	getline(cin, words);�� ����
//cin >> words;//�ܾ� ����
//while (words != "q")
//{
//	ch = words[0];//ù���ڸ� �б� ����
//
//
//	if (isalpha(ch))
//	{
//		switch (ch)
//		{
//		case 'a':
//		case'A':
//
//		case 'e':
//		case'E':
//
//		case 'o':
//		case'O':
//
//		case 'u':
//		case'U':
//
//		case 'i':
//		case'I':
//			vowel_ct++;
//			break;
//		default:
//			consonant_ct++;
//			break;
//		}
//	}
//	else
//		etc_ct++;
//	//if (ch == ' ')
//	//{
//	//	word = true;
//	//}
//
//
//	cin >> words;
//	//getline(cin, words);
//}
//cout << "�������� �����ϴ� ��" << vowel_ct << endl;
//cout << "�������� �����ϴ� ��" << consonant_ct << endl;
//cout << "��Ÿ" << etc_ct << endl;
//
//return 0;

//8��
//ifstream inFile;
//inFile.open("Test.txt");
//char ch;
//int count = 0;
//if (!inFile.is_open())
//{
//	return 1;
//}
//
//inFile >> ch;
//while (inFile.good())
//{
//	count++;
//	inFile >> ch;
//}
//cout << count;
//return 0;