#include "Connect.h"
#include "Tools.h"

bool ifPalindrom(string word)
{
	vector<char> forward, back;
	for (int i = 0; i < word.length(); i++)
	{
		forward.push_back(word[i]);
	}
	for (int i = word.length() - 1; i >= 0; i--)
	{
		back.push_back(word[i]);
	}
	for (int i = 0; i < forward.size(); i++)
	{
		if (forward[i] != back[i]) return false;
	}
	return true;
}