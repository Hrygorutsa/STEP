//Задание 2. Подсчитать количество целых чисел в диапа-
//зоне от 100 до 999 у которых все цифры разные.
//
//Задание 6. Пользователь вводит целое число. Необходи-
//мо вывести все целые числа, на которое заданное число
//
//делиться без остатка.
//
//Задание 7. Пользователь вводит два целых числа. Необхо-
//димо вывести все целые числа, на которые оба введенных
//
//числа делятся без остатка.

#include <iostream>
using namespace std;

//1)
// 
//int main()
//{
//    int n1 = 0, n2 = 0, n3 = 0;
//    int count = 0;
//    for (int i = 100; i <= 999; i++)
//    {
//        n1 = i / 100;
//        n2 = (i / 10) % 10;
//        n3 = i % 10;
//
//        if (n1 != n2 && n2 != n3 && n1 != n3)
//        {
//            count++;
//        }
//    }
//    cout <<"Your answer: "<< count << endl;
//    return 0;
//}
// 
//2)
// 
//{
//    int num;
//    cout << "Input number number\n";
//    cin >> num;
//
//    for (int i = 1; i <= num; i++) {
//        if (num % i == 0)
//            cout << i << "\n";
//    }
//}
// 
//3)
// 
// 
//	{
//	int num,num1;
//	cout << "Input number number 1\n";
//	cin >> num;
//	cout << "Input number number \n";
//	cin >> num1;
//
//	for (int i = 1; i <= num; i++) {
//  	  if (num % i == 0)
//      	  cout <<"Number 1 % to\n" <<i << "\n";
//	}
//	for (int i = 1; i <= num1; i++) {
//  	  if (num1 % i == 0)
//      	  cout <<"Number 2 % to\n"<< i << "\n";
//	}
//}