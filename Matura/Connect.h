#pragma once
#include "Tools.h"

LL NWD(LL a, LL b);
LL NWD_req(LL a, LL b);
LL NWD2(LL a, LL b);
LL NWD2_req(LL a, LL b);
LL NWW(LL a, LL b);
void Factorial(LL number, VLL& data);
bool ifPrime(LL number);
void FibVector(vector<LL>& fib, int howMany);
void PirintVectorFib(vector<LL>& fib);
LL givenFib(int whichOne);
LL Min(vector<LL>& data);
LL Max(vector<LL>& data);
bool ifPalindrom(string word);
bool ifAnagram(string word1, string word2);
void printVector(vector<int>& data);
void b_sort(vector<int>& data);
void q_sort(vector<int>& data, int left, int right);
float horner(int stopien, vector<float> wsp, float x);