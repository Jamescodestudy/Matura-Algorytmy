#include "Tools.h"
#include "Connect.h"
using namespace std;

void printVector(vector<int>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}
}
void swapSort(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}



void b_sort(vector<int>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		for (int ii = 0; ii < data.size() - 1; ii++)
		{
			if (data[i] < data[ii]) swapSort(data[i], data[ii]);
		}
	}
}

void q_sort(vector<int>& data, int left, int right)
{

	int i = left, j = right, pivot = data[(left+right) / 2];
	do
	{
		while (data[i] < pivot) i++;
		while (data[j] > pivot) j--;
		if (i <= j)
		{
			swap(data[i], data[j]);
			i++;
			j--;
		}
	} while (i<=j);

	if (left < j) q_sort(data, left, j);
	if (right > i) q_sort(data, i, right);
}