#include "Connect.h"
#include "Tools.h"
#include<iostream>
using namespace std;

int main()
{
	vector<int> numbers = {34,25,-3,0,23,4,234,1,1,1,-3,0,-44};
	printVector(numbers);
	cout << "______________________" << endl;
	//b_sort(numbers);
	q_sort(numbers, 0, numbers.size()-1);
	getchar();
	printVector(numbers);
	getchar();
	return 0;
}