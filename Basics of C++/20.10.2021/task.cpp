#include <string>
#include <iostream>

using namespace std;

struct Fraction
{
    int Numerator;
    int Denominator;
};

void Common_Denominator(Fraction& a, Fraction& b)
{
    int multiplier = 1;
    int multiplier1;
    int multiplier2;
    int common_denominator = 1;

    if (a.Denominator != b.Denominator)
    {
        common_denominator = a.Denominator * b.Denominator; // общий знаменатель
    }
    else
    {
        common_denominator = a.Denominator;
    }

    multiplier1 = common_denominator / a.Denominator;
    multiplier2 = common_denominator / b.Denominator;

    a.Numerator *= multiplier1;
    b.Numerator *= multiplier2;

    a.Denominator = common_denominator;
    b.Denominator = common_denominator;
}


void Addition(Fraction& a, Fraction& b, Fraction& result) 
{
    result.Denominator = a.Denominator;
    result.Numerator = a.Numerator + b.Numerator;
}

void Deduction(Fraction& a, Fraction& b, Fraction& result) 
{
    result.Denominator = a.Denominator;
    result.Numerator = a.Numerator - b.Numerator;
}

void Multiplication(Fraction& a, Fraction& b, Fraction& result) 
{
    result.Numerator = a.Numerator * b.Numerator;
    result.Denominator = a.Denominator * b.Denominator;
}

void Division(Fraction& a, Fraction& b, Fraction& result) 
{
    result.Numerator = a.Numerator * b.Denominator;
    result.Denominator = a.Denominator * b.Numerator;
}

void reduc(Fraction& a) 
{
    int multiplier = 1;

    for (multiplier = 2; multiplier <= a.Numerator || multiplier <= a.Denominator; multiplier++)
    {
        while ((a.Numerator % multiplier == 0) && (a.Denominator % multiplier == 0))
        {
            a.Numerator /= multiplier;
            a.Denominator /= multiplier;
        }
    }
}

double help (double a, double b)
{
    double res = a / b;
    return res;
}
int main()
{
    Fraction number1;
    Fraction number2;
    Fraction result;

    cout << "Enter first Numerator: ";
    cin >> number1.Numerator;
    cout << "Enter first Denominator: ";
    cin >> number1.Denominator;

    cout << "Enter second Numerator: ";
    cin >> number2.Numerator;
    cout << "Enter second Denominator: ";
    cin >> number2.Denominator;
    cout << endl;

    Common_Denominator(number1, number2);

    cout << number1.Numerator << " / " << number1.Denominator << endl;
    cout << number2.Numerator << " / " << number2.Denominator << endl;
    cout << endl;

    Addition(number1, number2, result);
    reduc(result);

    cout << "Addition = ";
    cout << result.Numerator << " / " << result.Denominator <<"   =   "<<help(result.Numerator,result.Denominator) << endl;

    Deduction(number1, number2, result);
    reduc(result);

    cout << "Deduction = ";
    cout << result.Numerator << " / " << result.Denominator << "   =   " << help(result.Numerator,result.Denominator) << endl;

    Multiplication(number1, number2, result);
    reduc(result);

    cout << "Multiplication = ";
    cout << result.Numerator << " / " << result.Denominator << "   =   " << help(result.Numerator, result.Denominator) << endl;

    Division(number1, number2, result);
    reduc(result);

    cout << "Division = ";
    cout << result.Numerator << " / " << result.Denominator << "   =   " << help(result.Numerator, result.Denominator) << endl;

}