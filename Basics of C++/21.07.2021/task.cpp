#include <iostream>
#include <ctime>
using namespace std;

void printmessage()
{
    cout << "Input 1-st number,2-nd number:" << endl;

}

//1
int sum(int a, int b)
{
   
    int res = a + b;
    return res;
}
//2
int ris(int f, int g)
{

    int res = f - g;
    return res;
}

//3
int dob(int c, int d)
{

    int res = c * d;
    return res;
}

//4
int fra(int j, int i)
{

    int res = j / i;
    return res;
}


int main()
{
    //1)
    printmessage(); 
    int a, b;  
    cin >> a >> b;
    int result = sum(a, b);
    cout << sum(a, b) << endl; 
    
    //2)
        printmessage();
        int f, g;
        cin >> f >> g;
        int result1 = ris(f, g);
        cout << ris(f, g) << endl; 
  
        //3)
        printmessage();
        int c, d;
        cin >> c >> d;
        int result2 = dob(c, d);
        cout << dob(c, d) << endl; 
  
        //4)
        printmessage();
        int j, i;
        cin >> j >> i;
        int result3 = fra(j, i);
        cout << fra(j, i) << endl;
    
    
    return 0;

}

