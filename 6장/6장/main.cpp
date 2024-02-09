#include <iostream>

int main()
{
	using namespace std;
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
			//cout << ch + 1; 정수형으로 값이 변경되어서 처리된다.
		std::cin.get(ch);
	}
	
	return 0;
}