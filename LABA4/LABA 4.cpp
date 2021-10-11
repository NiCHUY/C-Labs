#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool HasInVector(const string& array, char search) {
	for (char element : array)
	{
		if (element == search) return true;
	}
	return false;
}

int strcspn(const string& s, const string& forbidden) {
	int result = 0;
	while (result < s.size() && !HasInVector(forbidden, s[result])) ++result;
	return result;
}

void Capitalize(string& s) {
	if (s.size() == 0) return;
	if (s[0] <= 'z' && s[0] >= 'a') s[0] = s[0] - 'a' + 'A';
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i - 1] == ' ' && (s[i] >= 'a' && s[i] <= 'z')) s[i] = s[i] - 'a' + 'A';
 	}
}

int main() {
	{
		string a, b;
		getline(cin, a);
		getline(cin, b);

		cout << strcspn(a, b) << endl;
	}
	{
		string a;
		getline(cin, a);

		Capitalize(a);

		for (char c : a) cout << c;
		cout << endl;
	}
	return 0;
}