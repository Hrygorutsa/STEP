#include <iostream>
#include <iomanip>

using namespace std;

/* 1. Реализовать структуру «Стиральная машинка» (фирма, цвет, ширина, длина, высота, мощность, скорость отжима, температура нагрева).
Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/
/*struct WashingMachine {
    char firm[20];
    char color[20];
    int length;
    int width;
    int height;
    int voltage;
    int speed;
    int temperature;
};

WashingMachine createWashingMachine()
{
    WashingMachine washingMachine;
    cout << "Enter firm :: ";
    cin.getline(washingMachine.firm, 20);
    cout << "Enter color :: ";
    cin.getline(washingMachine.color, 20);
    cout << "Enter length :: ";
    cin >> washingMachine.length;
    cout << "Enter width :: ";
    cin >> washingMachine.width;
    cout << "Enter height :: ";
    cin >> washingMachine.height;
    cout << "Enter voltage :: ";
    cin >> washingMachine.voltage;
    cout << "Enter speed :: ";
    cin >> washingMachine.speed;
    cout << "Enter temperature :: ";
    (cin >> washingMachine.temperature).get();
    return washingMachine;
}

void printWashingMachine(WashingMachine washingMachine) {
    const int Size = 15;
    cout << setw(Size) << "Firm :: " << washingMachine.firm << endl;
    cout << setw(Size) << "Color :: " << washingMachine.color << endl;
    cout << setw(Size) << "Length :: " << washingMachine.length << endl;
    cout << setw(Size) << "Width :: " << washingMachine.width << endl;
    cout << setw(Size) << "Height :: " << washingMachine.height << endl;
    cout << setw(Size) << "Voltage :: " << washingMachine.voltage << endl;
    cout << setw(Size) << "Speed :: " << washingMachine.speed << endl;
    cout << setw(Size) << "Temperature :: " << washingMachine.temperature << endl;
}

void task1() {
    WashingMachine example1;
    example1 = createWashingMachine();
    cout << endl;
    WashingMachine example2;
    example2 = createWashingMachine();
    system("cls");
    cout << "1 Washing machine :: " << endl;
    printWashingMachine(example1);
    cout << endl;
    cout << "2 Washing machine :: " << endl;
    printWashingMachine(example2);
}*/
/* Задание 2. Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура, максимальная температура, подача пара да/нет, мощность).
Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/
//struct Iron {
//    char firm[50];
//    char color[50];
//    int voltage;
//    int mintemp;
//    int maxtemp;
//    char fume[5];
//};
//
//Iron createIron()
//{
//    Iron iron;
//    cout << "Enter firm :: ";
//    cin.getline(iron.firm, 50);
//    cout << "Enter color :: ";
//    cin.getline(iron.color, 50);
//    cout << "Enter voltage :: ";
//    cin >> iron.voltage;
//    cout << "Enter temperature(min) :: ";
//    (cin >> iron.mintemp).get();
//    cout << "Enter temperature(max) :: ";
//    (cin >> iron.maxtemp).get();
//    cout << "Enter fume :: ";
//    cin.getline(iron.fume, 5);
//    return iron;
//}
//
//void printIron(Iron  iron) {
//    const int Size = 15;
//    cout << setw(Size) << "Firm :: " << iron.firm << endl;
//    cout << setw(Size) << "Color :: " << iron.color << endl;
//    cout << setw(Size) << "Voltage :: " << iron.voltage << endl;
//    cout << setw(Size) << "Temperature(min) :: " << iron.maxtemp << endl;
//    cout << setw(Size) << "Temperature(max) :: " << iron.maxtemp << endl;
//    cout << setw(Size) << "Fume :: " << iron.fume << endl;
//}
//
//void task2() {
//    Iron example1;
//    example1 = createIron();
//    cout << endl;
//    Iron example2;
//    example2 = createIron();
//    system("cls");
//    cout << "1 Iron :: " << endl;
//    printIron(example1);
//    cout << endl;
//    cout << "2 Iron :: " << endl;
//    printIron(example2);
//}
//
//
//int main() {
//    task2();
//    system("pause");
//    return 0;
//}



/* 3. Реализовать структуру «Бойлер»(фирма, цвет, мощность, объем, температура нагрева).
Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/
/*
struct Boiler {
    char firm[50];
    char color[50];
    int voltage;
    int volume;
    int temperature;
};

Boiler createBoiler()
{
    Boiler boiler;
    cout << "Enter firm :: ";
    cin.getline(boiler.firm, 50);
    cout << "Enter color :: ";
    cin.getline(boiler.color, 50);
    cout << "Enter voltage :: ";
    cin >> boiler.voltage;
    cout << "Enter volume :: ";
    cin >> boiler.volume;
    cout << "Enter temperature :: ";
    (cin >> boiler.temperature).get();
    return boiler;
}

void printBoiler(Boiler boiler) {
    const int Size = 15;
    cout << setw(Size) << "Firm :: " << boiler.firm << endl;
    cout << setw(Size) << "Color :: " << boiler.color << endl;
    cout << setw(Size) << "Voltage :: " << boiler.voltage << endl;
    cout << setw(Size) << "Volume :: " << boiler.volume << endl;
    cout << setw(Size) << "Temperature :: " << boiler.temperature << endl;
}

void task3() {
    Boiler example1;
    example1 = createBoiler();
    cout << endl;
    Boiler example2;
    example2 = createBoiler();
    system("cls");
    cout << "1 Boiler :: " << endl;
    printBoiler(example1);
    cout << endl;
    cout << "2 Boiler :: " << endl;
    printBoiler(example2);
}


int main() {
    task3();
    system("pause");
    return 0;
}*/