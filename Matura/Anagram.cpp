#include "Connect.h"
#include "Tools.h"

bool ifAnagram(string word1, string word2)
{
	int first[256] = { 0 };
	if (word1.length() != word2.length()) return false;
	for (int i = 0; i < word1.length(); i++)
	{
		char temp = word1[i];
		int num = (int)temp;
		first[num]++;
	}
	for (int i = 0; i < word2.length(); i++)
	{
		char temp = word2[i];
		int num = (int)temp;
		first[num]--;
	}
	for (int i = 0; i < 256; i++)
	{
		if (first[i] != 0) return false;
	}
	return true;
}