#include<iostream>
#include <string>
#include <cctype>  
using namespace std;


void func1(string p) {
	for (int i = 0; i < p.length(); i++) {
		char character = p[i];
		cout << (char)toupper(character);
	}
	cout << endl;
}

void func2(string p) {
	for (int i = 0; i < p.length(); i++) {
		char character = p[i];
		cout << (char)tolower(character);
	}
	cout << endl;
}



void func3(string p) {
	for (int i = 0; i < p.length(); i++) {
		char character = p[i];
		if (i == 0 || p[i - 1] == ' ') {
			cout << (char)toupper(character);
		}
		else {
			cout << (char)tolower(character);
		}
	}
	cout << endl;
}



void func4(string p) {
	for (int i = 0; i < p.length(); i++) {
		char character = p[i];
		if (i == 0 || p[i - 1] == ' ') {
			cout << (char)tolower(character);
		}
		else {
			cout << (char)toupper(character);
		}
	}
	cout << endl;
}



void func5(string p) {
	for (int i = 0; i < p.length(); i++) {
		char character = p[i];
		if (i == 0 || p[i - 2] == '.' || p[i - 2] == '!' || p[i - 2] == '?') {
			cout << (char)toupper(character);
		}
		else {
			cout << (char)tolower(character);
		}
	}
	cout << endl;
}

void menu(string str) {
	while (true) {
		char command;
		cout << "Для преобразования строки в верхний регистр нажмите 1" << endl;
		cout << "Для преобразования строки в нижний регистр  нажмите 2" << endl;
		cout << "Для преобразования строки с Заглавной Буквы нажмите 3" << endl;
		cout << "Для преобразования строки пЕРВЫЙ сИМВОЛ в нИЖНЕМ рЕГИСТРЕ нажмите 4" << endl;
		cout << "Для преобразования строки как в предложении нажмите 5" << endl;
		cout << "Для выхода нажмите f" << endl;
		cout << "Выберите действие: ";
		cin >> command;
		if (command == 'f') {
			break;
		}
		else if (command == '1') {
			func1(str);
		}
		else if (command == '2') {
			func2(str);
		}
		else if (command == '3') {
			func3(str);
		}
		else if (command == '4') {
			func4(str);
		}
		else if (command == '5') {
			func5(str);
		}
		else {
			cout << "Неверный ввод" << endl;
		}
	}
}


int main() {
	setlocale(0, "");
	string str;
	cout << "Введите строку: ";
	getline(cin, str);
	menu(str);

	return 0;
}


