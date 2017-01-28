#include <iostream>
#include <regex>
#include <fstream>

using namespace std;

int main()
{
	string in;
	regex e("[aeiou]", regex_constants::icase);
	ofstream file;

	file.open("VowelReplaced.txt");

	cout << "Input text here > ";
	getline(cin,in);

	string result = regex_replace(in, e, "oodle");

	file << result;

	file.close();

	return 0;
}
