#include <iostream>
#include <cstring>
using namespace std;

//1
size_t countSymbols(const char* str)
{
    size_t counter = 0;
    char symbols[] = " ,.!?\"-:;@%&*+/()=";
    for (size_t i = 1; i < strlen(str); i++)
    {
        for (size_t j = 0; j < strlen(symbols); j++)
        {
            if ((str[i] == symbols[j] || str[i] == '\0') && isalpha(str[i - 1])) {
                counter++;
                break;
            }
        }
    }
    return counter;
}

size_t countWords(const char* str)
{
    size_t counter = 0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1]))) {
            counter++;
        }
    }
    return counter;
}

size_t countNumbers(const char* str)
{
    size_t counter = 0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i])) {
            counter++;
        }
    }
    return counter;
}

//2
bool checkPalindrome(const char* str)
{
    int len = strlen(str);
    for (size_t i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[] = "Good job! 1234";
    cout << "String: " << str << endl;
    cout << "\n\n======================================\n\n";
    cout << "Count symbols: " << countSymbols(str) << endl;
    cout << "\n\n======================================\n\n";
    cout << "Count words: " << countWords(str) << endl;
    cout << "\n\n======================================\n\n";
    cout << "Count numbers: " << countNumbers(str) << endl;
    cout << "\n\n======================================\n\n";
    if (checkPalindrome(str))
    {
        cout << "String is a palindrome.";
    }
    else {
        cout << "String is NOT a palindrome.";
    }
    cout << "\n\n======================================\n\n";
    return 0;
}
