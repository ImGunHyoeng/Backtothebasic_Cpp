#include <iostream>
#include <array>
#include <string>
using namespace std;
int main()
{
	
}
////1��
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
//2��
//const int arsize = 16;
//array<long double, arsize> factorials;
//factorials[0] = factorials[1] = 1L;
//for (int i = 2; i < arsize; i++)
//	factorials[i] += factorials[i - 1] * i;
//for (int i = 0; i < arsize; i++)
//	cout << i << "!=" << factorials[i] << endl;
//3��
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
//4��
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
//5��
//const char* month[12] = { "1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��", "11��", "12��" };
//int sells[12]{ 0, };
//int yearsell = 0;
//for (int i = 0; i < 12; i++)
//{
//	cout << month[i] << "�Ǹŷ��� �Է�" << endl;
//	cin >> sells[i];
//	yearsell += sells[i];
//}
//cout << yearsell;

//6��
//const char* month[12] = { "1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��", "11��", "12��" };
//int sells[3][12]{ 0, };
//int year = 0;
//int yearsell = 0;
//int secondandthirdsellingprice = 0;
//for (; year < 4; year++)
//{
//	yearsell = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		cout << year + 1 << "����" << month[i] << "�Ǹŷ��� �Է�" << endl;
//		cin >> sells[year][i];
//		yearsell += sells[year][i];
//	}
//	cout << year + 1 << "���� �Ǹž�" << yearsell << endl;
//	if (year == 2 || year == 3)
//		secondandthirdsellingprice += yearsell;
//}
//cout << "2,3���� ��ħ" << secondandthirdsellingprice;
//return 0;
//7��
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
//	cout << "�ڵ��� #" << i + 1 << endl;
//	cout << "���۾�ü:" << endl;
//	cin >> cargroup[i].madeEnterprise;
//	cout << "���ۿ���:" << endl;
//	cin >> cargroup[i].madeyear;
//}
//for (int i = 0; i < repeat; i++)
//{
//	cout << cargroup[i].madeyear << cargroup[i].madeEnterprise << endl;
//}
//delete cargroup[];
//return 0;

//8��
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
//cout << results << "�ܾ��" << count;
//
//return 0;

//9��
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
//cout << results << "�ܾ��" << count;
//
//return 0;

//10��
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