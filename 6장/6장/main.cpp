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
			//cout << ch + 1; ���������� ���� ����Ǿ ó���ȴ�.
		std::cin.get(ch);
	}
	
	return 0;
}