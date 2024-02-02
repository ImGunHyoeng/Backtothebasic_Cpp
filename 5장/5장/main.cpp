#include <iostream>
#include <array>
#include <string>
using namespace std;
int main()
{
	
}
////1번
//int a;
//int b;
//int sum = 0;
//std::cin >> a;
//std::cin >> b;
//for (; a <= b; a++)
//{
//	sum += a;
//}
//std::cout << sum;
//return 0;
//
//2번
//const int arsize = 16;
//array<long double, arsize> factorials;
//factorials[0] = factorials[1] = 1L;
//for (int i = 2; i < arsize; i++)
//	factorials[i] += factorials[i - 1] * i;
//for (int i = 0; i < arsize; i++)
//	cout << i << "!=" << factorials[i] << endl;
//3번
//int input = 0;
//int sum = 0;
//cin >> input;
//while (input != 0)
//{
//
//	sum += input;
//	cout << sum << endl;
//	cin >> input;
//}
//4번
//int year = 0;
//int startMoney = 100000;
//int consumer_a = startMoney;
//int consumer_b = startMoney;
//
//
//do
//{
//	consumer_a += 0.1 * startMoney;
//	consumer_b += 0.05 * consumer_b;
//	year++;
//} while (consumer_a > consumer_b);
//cout << year;
//
//5번
//const char* month[12] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };
//int sells[12]{ 0, };
//int yearsell = 0;
//for (int i = 0; i < 12; i++)
//{
//	cout << month[i] << "판매량을 입력" << endl;
//	cin >> sells[i];
//	yearsell += sells[i];
//}
//cout << yearsell;

//6번
//const char* month[12] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };
//int sells[3][12]{ 0, };
//int year = 0;
//int yearsell = 0;
//int secondandthirdsellingprice = 0;
//for (; year < 4; year++)
//{
//	yearsell = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		cout << year + 1 << "년차" << month[i] << "판매량을 입력" << endl;
//		cin >> sells[year][i];
//		yearsell += sells[year][i];
//	}
//	cout << year + 1 << "년차 판매액" << yearsell << endl;
//	if (year == 2 || year == 3)
//		secondandthirdsellingprice += yearsell;
//}
//cout << "2,3년차 합침" << secondandthirdsellingprice;
//return 0;
//7번
//struct Car
//{
//	char madeEnterprise[20];
//	int madeyear;
//};
//
//int repeat;
//cin >> repeat;
//Car* cargroup = new Car[repeat];
///*Car temp[5];
//Car** carmen = &temp;*/
//for (int i = 0; i < repeat; i++)
//{
//	cout << "자동차 #" << i + 1 << endl;
//	cout << "제작업체:" << endl;
//	cin >> cargroup[i].madeEnterprise;
//	cout << "제작연도:" << endl;
//	cin >> cargroup[i].madeyear;
//}
//for (int i = 0; i < repeat; i++)
//{
//	cout << cargroup[i].madeyear << cargroup[i].madeEnterprise << endl;
//}
//delete cargroup[];
//return 0;

//8번
//char temp[20];
//string results;
//int count = 0;
//cin >> temp;
//while (strcmp(temp, "done"))
//{
//	results += temp;
//	results += " ";
//	count++;
//	cin >> temp;
//}
//cout << results << "단어개수" << count;
//
//return 0;

//9번
//string temp;
//string results;
//int count = 0;
//cin >> temp;
//while (temp != "done")
//{
//	results += temp;
//	results += " ";
//	count++;
//	cin >> temp;
//}
//cout << results << "단어개수" << count;
//
//return 0;

//10번
//int count = 0;
//
//cin >> count;
//int j = 0;
//int k = 0;
//for (int i = 0; i < count; i++)
//{
//	for (j = 0; j < count - i - 1; j++)
//		cout << ".";
//	for (k = 0; k < i + 1; k++)
//		cout << "*";
//	cout << endl;
//}
//
//return 0;