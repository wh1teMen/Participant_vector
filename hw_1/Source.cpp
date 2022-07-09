#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
//структура участника
struct Participant
{
	string name ="";
	string surname ="";
	int id_number =0;
	double race_result =0.0;
	Participant(int id_number, double race_result,string name,string surname) :id_number(id_number), race_result(race_result),name(name),surname(surname) {};
};
//номера участников забега
int unic_id_number() {
	int num = rand() % (99999 - 10000+1) + 10000;
	return num;
}
//рандомные результаты забега 
double race_result() {
	double result = 7+(double)rand() / RAND_MAX*(20-7);
	return result;
}
//показ номера участника и результат
void show_vector(vector<Participant>&other) {
	for (auto& el : other) {
		cout <<" "<< el.id_number << "\t     ";
		cout << el.race_result << "\t";
		cout << el.name << "\t";
		cout << el.surname << "\n";
	}

}
//генератор имени
string generator_name() {
	vector<string>data_name;
	data_name.reserve(30);
	fstream fs;
	fs.open("name.txt", ios::in);
	if (fs.is_open())
		while (!fs.eof()) {
			string str;
			getline(fs, data_name.emplace_back());
		}
	else
		cout << "ERORR";
	fs.close();
	int rand_name = rand() % 10;
	return data_name[rand_name];
	
}
//генератор фамилии
string generator_surname() {
	vector<string>data_surname;
	data_surname.reserve(30);
	ifstream fs2;
	fs2.open("surname.txt", ios::in);
	if (fs2.is_open())
		while (!fs2.eof()) {
			getline(fs2, data_surname.emplace_back());
		}
	else
		cout << "ERORR";
	fs2.close();
	int rand_surname = rand() % 10;
	return data_surname[rand_surname];

}
void test() {
	fstream fs;
	fs.open("test.txt", ios::in);
	if (fs.is_open())
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			cout << str << endl;
		}
	else
		cout << "ERORR";

	fs.close();

}
int main() {
	srand(time(NULL));
	system("chcp 1251>nul");
	
	vector<Participant>data_patricipant;
	data_patricipant.reserve(30);
	for (int i = 0; i < 30; i++) {
		data_patricipant.emplace_back(unic_id_number(), race_result(), generator_name(),generator_surname());
	}
	cout << "  Номер\nучастника:  Результат:  Имя:    Фамилия: \n\n";
	show_vector(data_patricipant);
	
	







	
	system("pause>nul");
	return 0;
}