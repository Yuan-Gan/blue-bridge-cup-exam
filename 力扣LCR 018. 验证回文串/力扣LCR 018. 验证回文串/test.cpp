#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
bool isPalindrome(string s) 
{
	string::iterator it1 = s.begin();
	string::iterator it2 = s.end() - 1;
	while (it1 < it2)
	{
		while (it1 < it2 && isalnum(*it1))
			it1++;
		while (it1 < it2 && isalnum(*it2))
			it2--;
		if (tolower(*it1) != tolower(*it2))
			return false;
		it1++;
		it2--;
	}
	return true;
}
int main()
{
	string s1 = "race a car";
	isPalindrome(s1) == 0 ? cout << "是回文" << endl : cout << "不是回文" << endl;

	return 0;
}
