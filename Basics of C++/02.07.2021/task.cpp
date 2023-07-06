//1)

#include<iostream>
#include<ctime>

using namespace std;
void bros(int kubik);
int rez();

int main()
{

    srand(time(0));


    cout << "Game Started...\n\n" << endl;

    char brosok;
    int total_player = 0;
    int total_bot = 0;

    do
    {
        cout << "Press x to throw! " << endl;
        cin >> brosok;
    } while (brosok != 'x');

    int rez_player, rez_bot;
    do
    {
        rez_player = rez();
        cout << "Player result: " << rez_player << endl;

        cout << "\nBot turn." << endl;

        rez_bot = rez();
        cout << "\nBot result: " << rez_bot << endl;
    } while (rez_player == rez_bot);

    if (rez_player > rez_bot)
    {
        cout << "\nPlayer start first " << endl;
        for (int i = 1; i <= 3; i++)
        {
            do
            {
                cout << "throw! (press x)" << endl;
                cin >> brosok;
            } while (brosok != 'x');
            total_player += rez();

            total_bot += rez();

        }
        cout << "Player result (summa for 3 throw): " << total_player << endl;
        cout << "\nBot result (summa for 3 throw): " << total_bot << endl;
    }
    else
    {
        cout << "Bot first" << endl;
        for (int i = 1; i <= 3; i++)
        {
            total_bot += rez();

            do
            {
                cout << "throw! (press x)" << endl;
                cin >> brosok;
            } while (brosok != 'x');
            total_player += rez();

        }
        cout << "Player total: " << total_player << endl;
        cout << "Bot total: " << total_bot << endl;
    }

    if (total_player == total_bot)
    {
        cout << "\n\nDraw!!!\n\n" << endl;
    }
    else
    {
        if (total_player > total_bot)
        {
            cout << "\n\nPlayer WIN!!!\n\n" << endl;
        }

        if (total_player < total_bot)
        {
            cout << "\n\nBot WIN!!!\n\n" << endl;
        }
    }

    cout << "Result\n\n";

    cout << "Player  " << total_player / 3.0 << endl;
    cout << "Bot  " << total_bot / 3.0 << endl;

}

void bros(int kubik)
{
    switch (kubik)
    {
    case 1:
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*         *" << endl;
        cout << "*    *    *" << endl;
        cout << "*         *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
        break;
    case 2:
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*    *    *" << endl;
        cout << "*         *" << endl;
        cout << "*    *    *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
        break;
    case 3:
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*  *      *" << endl;
        cout << "*    *    *" << endl;
        cout << "*      *  *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
        break;
    case 4:
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*         *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
        break;
    case 5:
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*    *    *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
        break;
    case 6:
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*  *   *  *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
        break;
    }
}
int rez()
{
    int kubik_1 = rand() % 5 + 1;
    bros(kubik_1);

    int kubik_2 = rand() % 5 + 1;
    bros(kubik_2);

    int rezult;
    rezult = kubik_1 + kubik_2;
    cout << "Result: " << rezult << "\n\n";

    return rezult;
}

//2)
//#include <iostream>
//using namespace std;
//int main() {
//    int a, b;
//    char s;
//
//    cout << "Define A:" << endl;
//    cin >> a;
//    cout << "Define B: " << endl;
//    cin >> b;
//    cout << "Choose a symbol to draw a rectangle with" << endl;
//    cin >> s;
//
//
//
//    for (int i = 0; i < a; ++i) cout << s;
//    cout << endl;
//    for (int i = 0; i < b - 2; ++i) {
//        cout << s;
//        for (int j = 0; j < a - 2; ++j) cout << ' ';
//        cout << s << endl;
//    }
//    if (b > 1) {
//        for (int i = 0; i < a; ++i) cout << s;
//        cout << endl;
//    }
//
//    return 0;
//}
