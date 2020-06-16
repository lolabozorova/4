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
		cout << "��� �������������� ������ � ������� ������� ������� 1" << endl;
		cout << "��� �������������� ������ � ������ �������  ������� 2" << endl;
		cout << "��� �������������� ������ � ��������� ����� ������� 3" << endl;
		cout << "��� �������������� ������ ������ ������ � ������ �������� ������� 4" << endl;
		cout << "��� �������������� ������ ��� � ����������� ������� 5" << endl;
		cout << "��� ������ ������� f" << endl;
		cout << "�������� ��������: ";
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
			cout << "�������� ����" << endl;
		}
	}
}


int main() {
	setlocale(0, "");
	string str;
	cout << "������� ������: ";
	getline(cin, str);
	menu(str);

	return 0;
}


