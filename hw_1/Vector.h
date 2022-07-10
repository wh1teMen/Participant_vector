#pragma once
#include<iostream>
using namespace std;
struct Participant
{
	string name = "";
	string surname = "";
	int id_number = 0;
	double race_result = 0.0;
	Participant(int id_number, double race_result, string name, string surname) :id_number(id_number), race_result(race_result), name(name), surname(surname) {};
};
int unic_id_number(); 
double race_result(); 
string generator_name();
string generator_surname(); 
void heading_v();
void show_vector(vector<Participant>& other);
void completion_v(vector<Participant>& other);