#include<iostream>
#include<deque>
#include<string>
#include<fstream>
#include"Deque.h"
int unic_id_number_deq() {
	int num = rand() % (99999 - 10000 + 1) + 10000;
	return num;
}
double race_result_deq() {
	double result_deq = 7.0 + (double)rand() / RAND_MAX * (20.0-7.0);
	return result_deq;
}
string generator_name_deq() {
	deque<string>data_name;
	fstream fs;
	fs.open("name.txt", ios::in);
	if (fs.is_open()) {
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			data_name.emplace_back(str);

		}
	}
	else
		cout << "ERORR";
	int rand_name = rand() % 20;
	fs.close();
	return data_name[rand_name];
}
string generator_surname_deq() {
	deque<string>data_surname;
	ifstream fs2;
	fs2.open("surname.txt", ios::in);
	if (fs2.is_open()) {
		while (!fs2.eof()) {
			string str;
			getline(fs2, str);
			data_surname.emplace_back(str);
		}
	}
	else
		cout << "ERORR";
	fs2.close();
	int rand_surname = rand() % 10;
	return data_surname[rand_surname];

}
void show_deque(deque<Participant_deq>& other) {
	for (auto& el : other) {
		cout << " " << el.id_number << "\t     ";
		cout << el.race_result << "\t";
		cout << el.name << "\t";
		cout << el.surname << "\n";
	}
	cout << endl;
}
void heading_deq() {
	cout<< "*****************DEQUE*******************\n";
	cout<< "  Номер\nучастника:  Результат:  Имя:    Фамилия: \n";
}
void completion_deq(deque<Participant_deq>& other) {
	for (int i = 0; i < 20; i++) {
		other.emplace_back(unic_id_number_deq(), race_result_deq(), generator_name_deq(), generator_surname_deq());
	}
}