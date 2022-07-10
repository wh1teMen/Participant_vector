#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"Vector.h"
int unic_id_number() {
	int num = rand() % (99999 - 10000 + 1) + 10000;
	return num;
}
double race_result() {
	double result = 7.0 + (double)rand() / RAND_MAX * (20.0 - 7.0);
	return result;
}
string generator_name() {
	vector<string>data_name;
	data_name.reserve(30);
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
	fs.close();
	int rand_name = rand() % 10;
	return data_name[rand_name];

}
string generator_surname() {
	vector<string>data_surname;
	data_surname.reserve(30);
	ifstream fs2;
	fs2.open("surname.txt", ios::in);
	if (fs2.is_open())
		while (!fs2.eof()) {
			string str;
			getline(fs2, str);
			data_surname.emplace_back(str);
		}
	else
		cout << "ERORR";
	fs2.close();
	int rand_surname = rand() % 10;
	return data_surname[rand_surname];

}
void heading_v() {
	cout << "*****************VECTOR*******************\n";
	cout << "  Номер\nучастника:  Результат:  Имя:    Фамилия: \n\n";
}
void show_vector(vector<Participant>& other) {
	for (auto& el : other) {
		cout << " " << el.id_number << "\t     ";
		cout << el.race_result << "\t";
		cout << el.name << "\t";
		cout << el.surname << "\n";
	}

}
void completion_v(vector<Participant>& other) {
	for (int i = 0; i < 20; i++) {
		other.emplace_back(unic_id_number(), race_result(), generator_name(), generator_surname());
	}
}
