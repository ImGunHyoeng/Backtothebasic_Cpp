//
// pe06-02.cpp
//#include <iostream>
//
//const int Max = 10;
//int main()
//{
//	using namespace std;
//	double donation[Max];	// 기부금을 저장하는 double형의 배열
//
//	cout << "기부금을 입력하십시오.\n"
//		<< "(끝내려면 문자를 입력)\n";
//	cout << "기부금 #1: ";
//	int i = 0;
//	while (i < Max && cin >> donation[i])
//	{
//		if (++i < Max)
//			cout << "기부금 #" << i + 1 << ": ";
//	}
//
//	 평균 기부금과 평균 이상 기부금의 개수를 보고한다
//	double total = 0.0;		// 기부금 총액
//	double average = 0.0;	// 평균 기부금
//	int num_over_avg = 0;	// 평균 이상 기부금 수
//
//	for (int j = 0; j < i; j++)
//		total += donation[j];
//	if (i == 0)
//		cout << "기부금이 없습니다.\n";
//	else
//	{
//		average = total / i;
//		cout << "평균 기부금은 " << average << "입니다.\n";
//		for (j = 0; j < i; j++)
//		{
//			if (donation[j] > average)
//				num_over_avg++;
//		}
//		cout << "평균보다 큰 기부금의 수는 " << num_over_avg << "입니다.\n";
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

	bop group[3] = { {"gunhyoeng","사원","qwer",2},{"iM","ssd","like",3},{"jM","sd","hike",5}};
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
////1번
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

//2번
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
//std::cout << "평균" << totalmoney / count << "평균보다 큰 사람" << higgerthanaverage;
//
//return 0;

//3번
//using namespace std;
//char ch;
//cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)" << endl;
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
//	cout << "c,p,t,g 중에서 하나를 선택하세요" << endl;
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
//bop group[3] = { {"gunhyoeng","사원","qwer",2},{"iM","ssd","like",3},{"jM","sd","hike",5} };
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