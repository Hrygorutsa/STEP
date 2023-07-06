#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
//1
//void Abr(char*& str)
//{
//	char s[] = " ,.!?/;:\()@%$^&*=-_+|";
//	size_t counter = 0;
//	for (size_t i = 0; i <= strlen(str); i++)
//	{
//		for (size_t j = 0; j < strlen(str); j++)
//		{
//			if ((str[i] == s[j] || str[i] == '\0') && isalpha(str[i - 1])) { counter++; break; }
//		}
//	}
//
//	char* tmp = new char[counter + 1];
//	counter = 0;
//	int j = 0;
//	for (size_t i = 0; i <= strlen(str); i++)
//	{
//		if (isalpha(str[i]))
//		{
//			counter++;
//		}
//		else
//			
//		{
//			tmp[j++] = toupper(str[i - counter]);
//			counter = 0;
//		}
//	}
//	tmp[j] = '\0';
//	delete[] str;
//	str = tmp;
//}
//int main()
//{
//	char* str = new char[] {"Cascading style sheet" };
//	cout << "Start :: " << str << endl;
//		Abr(str);
//	cout << "Result :: " << str << endl;
//
//}

//2
int func(string& s, char c) {
    int res{ 0 };

    cout << "[ ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (c == *it) {
           cout << distance(s.begin(), it) << " ";
            ++res;
        }
    }
   cout << "] ";

    return res;
}

int main() {
    string s{ "Good day!" };
    cout << "Your string :: " << s << endl;
    char c;
    cout << "Input your word :: ";
    cin >> c;
    cout << func(s, c);
    return 0;
}