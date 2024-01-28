#include <iostream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

int main()
{

	array<float, 3> results40yardrun;
	
	cin >> results40yardrun[0];
	cin >> results40yardrun[1];
	cin >> results40yardrun[2];
	cout << results40yardrun.size() <<" " << (results40yardrun[0] + results40yardrun[1] + results40yardrun[2]) / 3;

	return 0;
}

//cpp 기초플러스 4장 1.
//{
//char firstname[20];
//char wantGrade;
//int age;
//cout << "영문 퍼스트 네임(이름):";
//cin.getline(firstname, 20);
//char lastname[20];
//cout << "영문 라스트 네임(성):";
//cin.getline(lastname, 20);
//cout << "학생이 원하는 학점:";
//cin >> wantGrade;
//cout << "나이:";
//cin >> age;
//cout << "성명:" << firstname << "," << lastname << "\n";;
//cout << "학점:" << (char)(wantGrade + 1) << endl;
//cout << "나이:" << age;
//
//}

//cpp 기초플러스 4장 2.
//string name;
//string dessert;
////char temp[40];
//cout << "이름을 입력하십시오:\n";
//getline(cin, name);
////cin.get(temp, 20);
////cin.get();
////name = temp; 
//cout << "좋아하는 디저트를 입력하십시오:\n";
//getline(cin, dessert);//cin을 매게변수로 입력을 받는 장소로 활용함.
////cin.getline(temp, 20);
////dessert = temp;
//cout << "맛있는 " << dessert;
//cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";


//cpp 기초플러스 4장 3.
// char temp[80];
//char oneline[80];
//
//cout << "퍼스트 네임(이름) 을 입력하시오: ";
//cin.getline(temp, 40);
//strcpy_s(oneline, 80, temp);
//strcat_s(oneline, strlen(oneline) + 4, ", ");//중간의 크기는 원래 문장의 길이 + 문장의 길이 + \0의 크기만큼을 확보가 되었는지 확인하는 것이다.
//cout << "라스트 네임(성)을 입력하시오: ";
//cin >> temp;
//strcat_s(oneline, strlen(oneline) + strlen(temp) + 1, temp);
//cout << "하나의 문자열로 만들면:" << oneline;//strcat_s를 사용하면 자동으로 \0이 들어간다.
// `
// 
// 
//cpp 기초플러스 4장 4
// 	string fName;
//string lName;
//string totalName;
//
//cout << "퍼스트 네임(이름) 을 입력하시오: ";
//getline(cin, fName);
//
//cout << "라스트 네임(성)을 입력하시오: ";
//getline(cin, lName);
//totalName = lName;
//totalName += ", ";
//totalName += fName;
//
//cout << "하나의 문자열로 만들면:" << totalName;//strcat_s를 사용하면 자동으로 \0이 들어간다.
// 
//cpp 기초플러스 4장 5`	.
// 
// struct CandyBar
//{
//	string productName;
//	float weight;
//	int kcal;
//};
//
//CandyBar snack = { "Mocha Munch",2.3,350 };
//cout << snack.productName << ", " << snack.weight << ", " << snack.kcal;
//
//
//
//
//
//return 0;
//cpp 기초플러스 4장 6.
// struct CandyBar
//{
//	string productName;
//	float weight;
//	int kcal;
//};
//CandyBar snacks[3] = { {"Mocha Munch",2.3f,350},{"Mocha Munch",2.3f,350},{"Mocha Munch",2.3f,350} };
//
//for (int i = 0; i < 3; i++)
//	cout << snacks[i].productName << ", " << snacks[i].weight << ", " << snacks[i].kcal;
// 
//cpp 기초플러스 4장 7.
// 
// struct PizzaResearch
//{
//	char productName[80];
//	float diameter;
//	int weight;
//};
//PizzaResearch pizza;
//cin.getline(pizza.productName, 80);
//cin >> pizza.diameter;
//cin >> pizza.weight;
//
//cout << pizza.productName << ", " << pizza.diameter << ", " << pizza.weight;
//cpp 기초플러스 4장 8.
// 
// struct PizzaResearch
//{
//	char productName[80];
//	float diameter;
//	int weight;
//};
//PizzaResearch* pizza = new PizzaResearch;
//
//cout << "피자 지름:";
//cin >> pizza->diameter;
//cin.get();
//cout << "피자 회사명:";
//cin.getline(pizza->productName, 80);
//cout << "피자 중량:";
//cin >> pizza->weight;
//
//cout << pizza->productName << ", " << pizza->diameter << ", " << pizza->weight;
//
//
//
//delete pizza;
//cpp 기초플러스 4장 9.
// struct CandyBar
//{
//	string productName;
//	float weight;
//	int kcal;
//	};
//CandyBar* snacks = new CandyBar[3];
//
//snacks[0].productName = "Mocha Munch";
//snacks[0].weight = 15.4f;
//snacks[0].kcal = 20;
//
//for (int i = 0; i < 3; i++)
//	cout << snacks[i].productName << ", " << snacks[i].weight << ", " << snacks[i].kcal;
//cpp 기초플러스 4장 10.
// 
// 
//array<float, 3> results40yardrun;
//
//cin >> results40yardrun[0];
//cin >> results40yardrun[1];
//cin >> results40yardrun[2];
//cout << results40yardrun.size() << " " << (results40yardrun[0] + results40yardrun[1] + results40yardrun[2]) / 3;

//cpp 기초플러스 4장 10 모범 답안.
//#include <iostream>
//using namespace std;
//class Dash
//{
//private:
//	float time;
//public:
//	Dash()
//	{
//		time = 0;
//	}
//	void set(float t)
//	{
//		time = t;
//	}
//	float get(void)
//	{
//		return time;
//	}
//};
//int main() {
//	Dash* dash[3];
//	int count = 0;
//	float input = 0;
//	float sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		dash[i] = new Dash();
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "40-yd dash 시간을 입력하세요: ";
//		cin >> input;
//		dash[i]->set(input);
//		count++;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		sum += dash[i]->get();
//	}
//	cout << "횟수: " << count << endl
//		<< "평균: " << (float)sum / 3 << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		delete dash[i];
//	}
//	return 0;
//}
