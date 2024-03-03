#include <iostream>

using namespace std; 

double calculate(double a, double b, double (*pt)(double a, double b))
{
    return pt(a, b);

}
double add(double x, double y)
{
    return x + y;
}
double multiply(double x, double y)
{
    return x * y;
}
int main()
{
    double (*pf[3])(double, double);
    pf[0] = add;
    pf[1] = multiply;
   double p= calculate(1.5, 2.5, pf[0]);
   //cout << p << endl;
   //p = calculate(2, 5, pf[1]);
   for (int i = 0; i < 2; i++)
   {
       p = calculate(1.5, 2.5, pf[i]);
       cout << p << endl;
   }
   //cout << p << endl;
	return 0;
}

//문제 1
//float harmonicmean(int a, int b);
//int main()
//{
//    int a = 0;
//    int b = 0;
//    cout << "조화 평균을 구하고 싶은 두개의 값을 입력하시오";
//    cin >> a;
//    cin >> b;
//    while (a != 0 || b != 0)
//    {
//
//        cout << "조화 평균" << harmonicmean(a, b) << endl;
//        cin >> a;
//        cin >> b;
//    }
//
//    return 0;
//
//}
//
//float harmonicmean(int a, int b)
//{
//    float result = 2.0 * a * b / (a + b);
//    return result;
//}

//문제 2
//int inputscore(int arr[]);
//void printscore(int arr[], int size);
//void calculatemean(int arr[], int size);
//int main()
//{
//    int arr[10] = { 0, };
//    int size = 0;
//    size = inputscore(arr);
//    printscore(arr, size);
//    calculatemean(arr, size);
//    return 0;
//
//}
//
//int inputscore(int arr[])
//{
//    int count = 0;
//    int temp;
//
//    while (count<10 && cin >> temp)
//    {
//        arr[count] = temp;
//        count++;
//    }
//    return count;
//}
//
//void printscore(int arr[], int size)
//{
//    cout << "점수 ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void calculatemean(int arr[], int size)
//{
//    float mean = 0.f;
//    for (int i = 0; i < size; i++)
//    {
//        mean += arr[i];
//    }
//    cout << "평균" << mean / (size + 1);
//}

//문제 3
//struct box
//{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//void printbox(box box)
//{
//	cout << box.maker << box.height << box.width << box.length << box.volume << endl;
//}
//void setVolume(box& box)
//{
//	box.volume = box.height * box.width * box.length;
//}
//int main()
//{
//	box box = { "abc",3.5,2.3,5,33 };
//	printbox(box);
//	setVolume(box);
//	cout << box.volume;
//	return 0;
//}

//문제4
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//
//	for (n = numbers, p = picks; p > 0; n--, p--)
//	{
//		result = result * n / p;
//	}
//	return result;
//}
//int main()
//{
//
//	int firstpick;
//	int secondpick;
//	int firstnumbers;
//	int secondnumbers;
//	long double firstpercent;
//	long double secondpercent;
//	cin >> firstnumbers >> firstpick;
//	firstpercent = probability(firstnumbers, firstpick);
//	cin >> secondnumbers >> secondpick;
//	secondpercent = probability(secondnumbers, secondpick);
//	cout << "확률" << firstpercent * secondpercent;
//	return 0;
//}

//문제 5
//int factorial(int f)
//{
//	int result = 1;
//	while (f != 1)
//	{
//		result *= f;
//		f--;
//	}
//	return result;
//}
//
//int main()
//{
//	int value = 0;
//	cin >> value;
//	cout << factorial(value);
//
//	return 0;
//}

//문제 6
//int Fill_array(double arr[], int size)
//{
//	int count = 0;
//	for (; count < size && cin >> arr[count]; count++);
//
//	return count;
//}
//void Show_array(double arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//}
//
//void Reverse_array(double arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	const int size = 20;
//	int curcount = 0;
//	double arr[size];
//	curcount = Fill_array(arr, size);
//	Show_array(arr, curcount);
//	Reverse_array(arr, curcount);
//	Show_array(arr, curcount);
//
//	return 0;
//}

//문제 7
//double* fill_array(double* start, double* end)
//{
//	double* point = start;
//	double temp;
//	while (point != end)
//	{
//		cin >> temp;
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "입력 불량; 입력을 종료합니다." << endl;
//			break;
//		}
//		*point = temp;
//		point += 1;
//	}
//	return point;
//
//}
//void show_array(const double* start, const double* end)
//{
//	cout << "배열 값" << endl;
//	while (start != end)
//	{
//
//		cout << *start << endl;;
//		start += 1;
//	}
//}
//
//void revalue(double r, double* start, double* end)
//{
//	while (start != end)
//	{
//		*start *= r;
//		start += 1;
//	}
//}
//
//int main()
//{
//	const int Max = 20;
//	double properties[Max];
//	double* start = properties;
//	double* end = properties + Max;
//	end = fill_array(start, end);
//	show_array(start, end);
//	revalue(5, start, end);
//	show_array(start, end);
//
//	return 0;
//}

//문제 8 a번
//const int Seasons = 4;
//const char* Sname[Seasons] = { "Sprint","Summer","Fall","Winter" };
//void fill(double* expense)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Sname[i] << "에 소요 비용:";
//		cin >> expense[i];
//	}
//}
//void show(const double* expense)
//{
//	double total = 0.0;
//	cout << "\n계절별 비용\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Sname[i] << " : $" << expense[i] << endl;
//		total += expense[i];
//	}
//	cout << "총 비용" << total << endl;
//}
//int main()
//{
//	double expenses[4];
//	fill(expenses);
//	show(expenses);
//	return 0;
//}

//문제 8 b
//const int Seasons = 4;
//struct expense
//{
//	double expenses[Seasons];
//};
//const char* Sname[Seasons] = { "Sprint","Summer","Fall","Winter" };
//void fill(expense* ex)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Sname[i] << "에 소요 비용:";
//		cin >> ex->expenses[i];
//	}
//}
//void show(const expense& ex)
//{
//	double total = 0.0;
//	cout << "\n계절별 비용\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Sname[i] << " : $" << ex.expenses[i] << endl;
//		total += ex.expenses[i];
//	}
//	cout << "총 비용" << total << endl;
//}
//
//int main()
//{
//	expense ex;
//	fill(&ex);
//	show(ex);
//	return 0;
//}


//9번
//const int SLEN = 30;
//struct student
//{
//    char fullname[SLEN];
//    char hobby[SLEN];
//    int ooplevel;
//};
//int getinfo(student pa[], int n);
//void display1(student st);
//void display2(const student* ps);
//void display3(const student pa[], int n);
//int main()
//{
//    cout << "학급의 학생 수를 입력하십시오: ";
//    int class_size;
//    cin >> class_size;
//    while (cin.get() != '\n')
//        continue;
//
//    student* ptr_stu = new student[class_size];
//    int entered = getinfo(ptr_stu, class_size);
//    for (int i = 0; i < entered; i++)
//    {
//        display1(ptr_stu[i]);
//        display2(&ptr_stu[i]);
//        cout << endl;
//    }
//    display3(ptr_stu, entered);
//    cout << "프로그램을 종료합니다.\n";
//    return 0;
//}
//int getinfo(student pa[], int n)
//{
//    int i = 0;
//    for (; i < n; i++)
//    {
        //cin.get((pa + i)->fullname, SLEN);
        //cin.get();
        //if ((pa + i)->fullname[0] == '\0')
        //    break;
        //cin.get((pa + i)->hobby, SLEN);
        //cin.get();
        //cin >> (pa + i)->ooplevel;
        //if (!cin)
        //{
        //    cin.clear();
        //    while (cin.get() != '\n')
        //        continue;
        //    cout << "ooplevel 오류" << endl;
        //}
        //cin.get();
//    }
//    return i;
//}
//
//void display1(student st)
//{
//    cout << st.fullname << endl;
//    cout << st.hobby << endl;
//    cout << st.ooplevel << endl;
//}
//
//void display2(const student* ps)
//{
//    cout << ps->fullname << endl;
//    cout << ps->hobby << endl;
//    cout << ps->ooplevel << endl;
//}
//
//void display3(const student pa[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << (pa + i)->fullname << endl;
//        cout << (pa + i)->hobby << endl;
//        cout << (pa + i)->ooplevel << endl;
//    }
//}