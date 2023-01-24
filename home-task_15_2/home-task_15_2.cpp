#include <iostream>
using namespace std;

//Задание 1.
void del_elem(char* str, int n) {
	int size = 0;
	char* newstr = new char[size];
	for (int i = 0, j = 0; i < strlen(str) + 1; i++, j++) {
		if (i != n - 1) {
			size++;
			newstr[j] = str[i];
		}
		else j--;
	}
	puts(newstr);
}
//Задание 2.
void delSymbol(char* str, char n) {
	int size = 0;
	char* newstr = new char[size];
	for (int i = 0, j = 0; i < strlen(str) + 1; i++, j++) {
		if (str[i] != n) {
			size++;
			newstr[j] = str[i];
		}
		else j--;
	}
	puts(newstr);
}
//Задание 3.
void addSymbol(char* str, int p, char n) {
	int size = 0;
	char* newstr = new char[size];
	for (int i = 0, j = 0; i < strlen(str) + 1; i++, j++) {
		if (i != p - 1) {
			size++;
			newstr[j] = str[i];
		}
		else
			newstr[j] = n;
	}
	puts(newstr);
}
//Задание 4.
void chSymbol(char* str) {
	int size = 0;
	char* newstr = new char[size];
	for (int i = 0, j = 0; i < strlen(str); i++, j++) {
		if (str[i] != '.') {
			size++;
			newstr[j] = str[i];
		}
		else
			newstr[j] = '!';
	}
	puts(newstr);
}
//Задание 5.
void countSymbol(char* str) {
	int count = 0;
	char n;
	cout << "Введите искомый символ: ";
	cin >> n;
	for (int i = 0; i < strlen(str) + 1; i++)
		if (str[i] == n) count++;
	cout << "Кол-во (" << n << ") в строке: " << count;
}
//Задание 6.
void countSymbols(char* str) {
	int alpha = 0, digit = 0, other = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isalpha(str[i])) alpha++;
		else if (isdigit(str[i])) digit++;
		else other++;
	}
	cout << "Букв " << alpha << " Цифр " << digit << " Символов " << other;
}
int main()
{
	setlocale(LC_ALL, "");
	char* str = new char[255];
	gets_s(str, 254);
	//Задание 1. Написать функцию, которая удаляет из строки
	//символ с заданным номером.
	/*del_elem(str, 5);*/
	//Задание 2. Написать функцию, которая удаляет из строки
	//все вхождения в нее заданного символа.
	/*delSymbol(str, 's');*/
	//Задание 3. Написать функцию, которая вставляет в строку
	//в указанную позицию заданный символ.
	/*addSymbol(str, 5, 's');*/
	//Задание 4. Написать программу, которая заменяет все
	//символы точки «.» в строке, введенной пользователем,
	//на символы восклицательного знака «!».
	/*chSymbol(str);*/
	//Задание 5. Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается
	//в строке.
	/*countSymbol(str);*/
	//Задание 6. Пользователь вводит строку.Определить количество букв, количество цифр и количество остальных
	//символов, присутствующих в строке.
	/*countSymbols(str);*/
}