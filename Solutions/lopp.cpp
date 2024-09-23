#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    double n1, n2, r;
    while (true)
    {

        cout << "simle calculator menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << endl;
        cout << "Enter your choice: ";

        cin >> c;

        if (cin.fail())
        {
            cout << "Please enter a valid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        {
            cout << "Please enter a valid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Enter number 1: ";
        cin >> n1;
        cout << "Enter number 1: ";
        cin >> n2;

        switch (c)
        {
        case 1:
            cout << "sum of two numbers is: " << n1 + n2 << endl;
            break;
        case 2:
            cout << "subtraction of two numbers is: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "multiplication of two numbers is: " << n1 * n2 << endl;
            break;
        case 4:
            cout << "division of two numbers is: " << n1 / n2 << endl;
            break;

        default:
            break;
        }
    }
}