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

//cpp �����÷��� 4�� 1.
//{
//char firstname[20];
//char wantGrade;
//int age;
//cout << "���� �۽�Ʈ ����(�̸�):";
//cin.getline(firstname, 20);
//char lastname[20];
//cout << "���� ��Ʈ ����(��):";
//cin.getline(lastname, 20);
//cout << "�л��� ���ϴ� ����:";
//cin >> wantGrade;
//cout << "����:";
//cin >> age;
//cout << "����:" << firstname << "," << lastname << "\n";;
//cout << "����:" << (char)(wantGrade + 1) << endl;
//cout << "����:" << age;
//
//}

//cpp �����÷��� 4�� 2.
//string name;
//string dessert;
////char temp[40];
//cout << "�̸��� �Է��Ͻʽÿ�:\n";
//getline(cin, name);
////cin.get(temp, 20);
////cin.get();
////name = temp; 
//cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:\n";
//getline(cin, dessert);//cin�� �ŰԺ����� �Է��� �޴� ��ҷ� Ȱ����.
////cin.getline(temp, 20);
////dessert = temp;
//cout << "���ִ� " << dessert;
//cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";


//cpp �����÷��� 4�� 3.
// char temp[80];
//char oneline[80];
//
//cout << "�۽�Ʈ ����(�̸�) �� �Է��Ͻÿ�: ";
//cin.getline(temp, 40);
//strcpy_s(oneline, 80, temp);
//strcat_s(oneline, strlen(oneline) + 4, ", ");//�߰��� ũ��� ���� ������ ���� + ������ ���� + \0�� ũ�⸸ŭ�� Ȯ���� �Ǿ����� Ȯ���ϴ� ���̴�.
//cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
//cin >> temp;
//strcat_s(oneline, strlen(oneline) + strlen(temp) + 1, temp);
//cout << "�ϳ��� ���ڿ��� �����:" << oneline;//strcat_s�� ����ϸ� �ڵ����� \0�� ����.
// `
// 
// 
//cpp �����÷��� 4�� 4
// 	string fName;
//string lName;
//string totalName;
//
//cout << "�۽�Ʈ ����(�̸�) �� �Է��Ͻÿ�: ";
//getline(cin, fName);
//
//cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
//getline(cin, lName);
//totalName = lName;
//totalName += ", ";
//totalName += fName;
//
//cout << "�ϳ��� ���ڿ��� �����:" << totalName;//strcat_s�� ����ϸ� �ڵ����� \0�� ����.
// 
//cpp �����÷��� 4�� 5`	.
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
//cpp �����÷��� 4�� 6.
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
//cpp �����÷��� 4�� 7.
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
//cpp �����÷��� 4�� 8.
// 
// struct PizzaResearch
//{
//	char productName[80];
//	float diameter;
//	int weight;
//};
//PizzaResearch* pizza = new PizzaResearch;
//
//cout << "���� ����:";
//cin >> pizza->diameter;
//cin.get();
//cout << "���� ȸ���:";
//cin.getline(pizza->productName, 80);
//cout << "���� �߷�:";
//cin >> pizza->weight;
//
//cout << pizza->productName << ", " << pizza->diameter << ", " << pizza->weight;
//
//
//
//delete pizza;
//cpp �����÷��� 4�� 9.
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
//cpp �����÷��� 4�� 10.
// 
// 
//array<float, 3> results40yardrun;
//
//cin >> results40yardrun[0];
//cin >> results40yardrun[1];
//cin >> results40yardrun[2];
//cout << results40yardrun.size() << " " << (results40yardrun[0] + results40yardrun[1] + results40yardrun[2]) / 3;

//cpp �����÷��� 4�� 10 ��� ���.
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
//		cout << "40-yd dash �ð��� �Է��ϼ���: ";
//		cin >> input;
//		dash[i]->set(input);
//		count++;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		sum += dash[i]->get();
//	}
//	cout << "Ƚ��: " << count << endl
//		<< "���: " << (float)sum / 3 << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		delete dash[i];
//	}
//	return 0;
//}
