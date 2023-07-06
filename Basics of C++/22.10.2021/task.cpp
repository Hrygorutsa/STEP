#include <iostream>
#include <fstream>
#include <string>
using namespace std;


string convertText(string text, int key)
{
	string tmp = text;
	for (size_t i = 0; i < text.size(); i++)
	{
		if (isalpha(tmp[i]))
		{
			if (isupper(tmp[i]))
			{
				if ((tmp[i] + key) > 'Z')
				{
					tmp[i] = (tmp[i] + key) - 'Z' + 'A' - 1;
				}
				else { tmp[i] = tmp[i] + key; } 
				continue;
			}
			if (islower(tmp[i]))
			{
				if ((tmp[i] + key) > 'z')
				{
					tmp[i] = (tmp[i] + key) - 'z' + 'a' - 1;
				}
				else { tmp[i] = tmp[i] + key; }
			}
		}
	}

	return tmp;
}


int main() 
{
	int x;
	cout << "Input your key :: \t" << endl;
	cin >> x;
	ifstream start;
	string text;
	start.open("start.txt");
	
	if (!start.is_open()) {
		cout << "Error" << endl;
	}
	else {
		getline(start, text);
		start.close();
	}
	string res = convertText(text, x);
	cout << "=============== Before ========================\n";
	cout << text << endl;
	cout << "================= After =======================\n";
	cout << res << endl;



}