#include<std_lib_facilities.h>

using namespace std;

int main() {
	system("chcp 1251");
	vector<string> lNames =       { "Затирка", "Тихомиров", "Киреев", "Лебедев", "Кузнецов"};
	vector<string> fNames =       { "Сергей", "Денис", "Роман", "Алексей", "Дмитрий"};
	vector<string> phoneNumbers = { "9203504621", "9304587123", "9068721154", "9104221382", "9303539098" };
	vector<string> emails =       { "zatirka@mail.ru", "tikhomirov@gmail.com", "kireev@yandex.ru", "lebedev@rambler.ru" ,"kuznetsov@mail.ru"};
	int day = 22;
	int month = 6;
	int year = 1986;
	int age = 30;
	cout << day << "." << month << "." << year << '\t' << age << endl;
	cout << oct << day << "." << month << "." << year << '\t' << age << endl;
	cout << hex << day << "." << month << "." << year << '\t' << age << endl;
	cout << showbase << dec;
	cout << day << "." << month << "." << year << '\t' << age << endl;
	cout << oct << day << "." << month << "." << year << '\t' << age << endl;
	cout << hex << day << "." << month << "." << year << '\t' << age << endl;
	cout << dec << endl;
	cout << 1234 << '\t' << 0x4d2 << '\t' << 02322 << endl;
	cout << 1234.56789 << endl << fixed << 1234.56789 << endl << scientific << 1234.56789 << endl;
	cout << "--------------------------------------------" << endl;
	cout << defaultfloat << 1234567.89 << endl << fixed << 12.3456789 << endl << scientific << 1234567.89 << endl;
	cout << "--------------------------------------------" << endl;
	cout << defaultfloat << 1234.56789 << '\t' << fixed << 1234.56789 << '\t' << scientific << 1234.56789 << endl;
	cout << defaultfloat << setprecision(5) << 1234.56789 << '\t' << fixed << 1234.56789 << '\t' << scientific << 1234.56789 << endl;
	cout << defaultfloat << setprecision(8) << 1234.56789 << '\t' << fixed << 1234.56789 << '\t' << scientific << 1234.56789 << endl;
	cout << "--------------------------------------------" << endl;
	cout << 123456 << "|" << setw(4) << 123456 << "|" << setw(8) << 123456 << "|" << 123456 << "|" << endl;
	cout << endl << endl;
	cout << "=============================================================" << endl;
	cout << "|  Фамилия  |   Имя   |   Телефон  |          Email         |" << endl;
	cout << "-------------------------------------------------------------" << endl;
	for (int i = 0; i < lNames.size(); i++) {
		cout << "|" << setw(11) << lNames[i] << "|" << setw(9) << fNames[i] << "|" << setw(12) << phoneNumbers[i] << "|" << setw(24) << emails[i] << "|" << endl;
		cout << "-------------------------------------------------------------" << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}