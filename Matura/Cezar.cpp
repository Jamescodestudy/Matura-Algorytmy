#include "Connect.h"
#include "Tools.h"

string cezar(string word, int k)
{
	while (k > 26)
	{
		k = k % 26;
	}
	int temp;
	for (int i = 0; i<word.length();i++)
	{
		temp = word[i] + k;
		if (temp > 90)
		{
			word[i] = word[i] - (26 - k);
		}
		else if (temp < 65)
		{
			word[i] = word[i] + (26 + k);
		}
		else
		{
			word[i] = word[i] + k;
		}
	}
	return word;
}

bool ifCezar(string wordBase, string wordEncrypted, int k)
{
	while (k > 26)
	{
		k = k % 26;
	}
	if (cezar(wordBase, k) == wordEncrypted) return true;
	else return false;
}