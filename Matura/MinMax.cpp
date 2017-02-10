#include "Connect.h"
#include "Tools.h"
using namespace std;

LL Min(vector<LL>& data)
{
	LL min = data[0];
	for (int i = 1; i < data.size(); i++)
	{
		if (data[i] < min) min = data[i];
	}
	return min;
}

LL Max(vector<LL>& data)
{
	LL max = data[0];
	for (int i = 1; i < data.size(); i++)
	{
		if (data[i] > max) max = data[i];
	}
	return max;
}