//
// pe06-02.cpp
//#include <iostream>
//
//const int Max = 10;
//int main()
//{
//	using namespace std;
//	double donation[Max];	// ��α��� �����ϴ� double���� �迭
//
//	cout << "��α��� �Է��Ͻʽÿ�.\n"
//		<< "(�������� ���ڸ� �Է�)\n";
//	cout << "��α� #1: ";
//	int i = 0;
//	while (i < Max && cin >> donation[i])
//	{
//		if (++i < Max)
//			cout << "��α� #" << i + 1 << ": ";
//	}
//
//	 ��� ��αݰ� ��� �̻� ��α��� ������ �����Ѵ�
//	double total = 0.0;		// ��α� �Ѿ�
//	double average = 0.0;	// ��� ��α�
//	int num_over_avg = 0;	// ��� �̻� ��α� ��
//
//	for (int j = 0; j < i; j++)
//		total += donation[j];
//	if (i == 0)
//		cout << "��α��� �����ϴ�.\n";
//	else
//	{
//		average = total / i;
//		cout << "��� ��α��� " << average << "�Դϴ�.\n";
//		for (j = 0; j < i; j++)
//		{
//			if (donation[j] > average)
//				num_over_avg++;
//		}
//		cout << "��պ��� ū ��α��� ���� " << num_over_avg << "�Դϴ�.\n";
//	}
//	return 0;
//}


#include <iostream>

const int strsize = 20;
int main()
{
	using namespace std;
	struct bop {
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int preference;
	};

	bop group[3] = { {"gunhyoeng","���","qwer",2},{"iM","ssd","like",3},{"jM","sd","hike",5}};
	char ch;
	while (cin>>ch&&ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 3; i++)
				cout << group[i].fullname;
			break;
		case 'b':

			for (int i = 0; i < 3; i++)
				cout << group[i].title;
			break;
		case 'c':

			for (int i = 0; i < 3; i++)
				cout << group[i].bopname;
			break;

		case 'd':

			for (int i = 0; i < 3; i++)
				cout << group[i].preference;
			break;
		default:
			break;
		}
	}
	return 0;
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