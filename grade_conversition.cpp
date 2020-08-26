#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int UserNumber;
    char Grade;

    cout << "Enter the grade you got on that test: ";
    cin >> UserNumber;
    cout << "\n\n\n";

    if (UserNumber > 89 && UserNumber < 101)
    {
        Grade = 'A';
    }

    else if (UserNumber > 79 && UserNumber < 91)
    {
        Grade = 'B';
    }

    else if (UserNumber > 69 && UserNumber < 81)
    {
        Grade = 'C';
    }

    else if (UserNumber > 59 && UserNumber < 71)
    {
        Grade = 'D';
    }

    else if (UserNumber > -1 && UserNumber < 61)
    {
        Grade = 'F';
    }
    else
    {
        Grade = 'Z';
    }


    switch (Grade)
    {
    case 'A':
        cout << "Perfect! You got a: " << Grade;
        break;
    case 'B':
        cout << "Could've been worse. You got a: " << Grade;
        break;
    case 'C':
        cout << "It's okay I guess, you got a: " << Grade;
        break;
    case 'D':
        cout << "Uggh.. You got a: " << Grade;
        break;
    case 'F':
        cout << "Better luck next time! You got a: " << Grade;
        break;
    case 'Z':
        cout << "Undefined value! Make sure it's a value from 0-100!";
        break;


    }

    return 0;
}
