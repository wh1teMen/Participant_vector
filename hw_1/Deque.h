#pragma once
#include<iostream>
#include<deque>
using namespace std;
struct Participant_deq
{
	string name = "";
	string surname = "";
	int id_number = 0;
	double race_result = 0.0;
	Participant_deq(int id_number, double race_result, string name, string surname) :id_number(id_number), race_result(race_result), name(name), surname(surname) {};
};
int unic_id_number_deq(); 
double race_result_deq(); 
string generator_name_deq(); 
string generator_surname_deq();
void heading_deq();
void show_deque(deque<Participant_deq>& other); 
void completion_deq(deque<Participant_deq>& other);

