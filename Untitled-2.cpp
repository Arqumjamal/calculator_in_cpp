#include <iostream>
#include <limits>
using namespace std;

int main() {
    while (true) {
        system("cls");
        int choice;
        float x, y;
        char c;

        cout << "\n\n\n\t\tControl Panel";
        cout << "\n\n 1. ADD";
        cout << "\n 2. SUBTRACT";
        cout << "\n 3. MULTIPLY";
        cout << "\n 4. DIVIDE";
        cout << "\n 5. MODULUS";
        cout << "\n 6. EXIT";
        cout << "\n\n Your Choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n\n\tInvalid input... Please try again...";
            cin.get(); // Wait for user to press a key
            continue;
        }

        switch (choice) {
            case 1:
                cout << "\n\n\tEnter numbers to add (end with '='): ";
                cin >> x;
                while (cin >> c && c == '+') {
                    cin >> y;
                    x += y;
                }
                cout << "\n\n\tYour Answer is: " << x;
                break;

            case 2:
                cout << "\n\n\tEnter numbers to subtract (format: x-y): ";
                cin >> x >> c >> y;
                if (c == '-') {
                    x -= y;
                    cout << "\n\n\tYour Answer is: " << x;
                } else {
                    cout << "\n\n\tInvalid format.";
                }
                break;

            case 3:
                cout << "\n\n\tEnter numbers to multiply (end with '='): ";
                cin >> x;
                while (cin >> c && c == '*') {
                    cin >> y;
                    x *= y;
                }
                cout << "\n\n\tYour Answer is: " << x;
                break;

            case 4:
                cout << "\n\n\tEnter numbers to divide (format: x/y): ";
                cin >> x >> c >> y;
                if (c == '/') {
                    if (y != 0) {
                        x /= y;
                        cout << "\n\n\tYour Answer is: " << x;
                    } else {
                        cout << "\n\n\tDivision by zero is not allowed.";
                    }
                } else {
                    cout << "\n\n\tInvalid format.";
                }
                break;

            case 5:
                int a, b;
                cout << "\n\n\tEnter numbers to find modulus (format: a%b): ";
                cin >> a >> c >> b;
                if (c == '%') {
                    if (b != 0) {
                        a %= b;
                        cout << "\n\n\tYour Answer is: " << a;
                    } else {
                        cout << "\n\n\tModulus by zero is not allowed.";
                    }
                } else {
                    cout << "\n\n\tInvalid format.";
                }
                break;

            case 6:
                exit(0);

            default:
                cout << "\n\n\tInvalid Choice... Please try again...";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\nPress any key to continue...";
        cin.get();
    }

    return 0;
}
