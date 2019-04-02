#include <iostream>
#include <string.h>


using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	const int n = 100;
	char s[n];
	cout << "Введите строку" << endl;
	cin.getline(s, 100);
	int count = 0;
	int p = strlen(s), i = 0;
	while (i < p)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			count++;
		i++;
	}
	cout << endl << "Количество слов: " << count;
	
	system("pause");
	return 0;
}