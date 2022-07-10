#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<string>
#include<fstream>
#include<set>
#include"Vector.h"
#include"Deque.h"
using namespace std;
int main() {
	srand(time(NULL));
	system("chcp 1251>nul");
	
	vector<Participant>data_patricipant;
	heading_v();
	data_patricipant.reserve(20);
	completion_v(data_patricipant);
	show_vector(data_patricipant);
	cout << endl << endl;
	
	
	deque<Participant_deq>data_patricipant_deq;
	heading_deq();
	completion_deq(data_patricipant_deq);
	show_deque(data_patricipant_deq);
		
	system("pause>nul");
	return 0;
}