#include <iostream>
using namespace std;

int main() {
    int a, b;
    char e;
    int cmd;

    cout << "********Welcome to CLI Calculator V1.00********" << endl;
    cout << "Enter Number1 : ";
    cin >> a;
    cout << "Enter Number2 : ";
    cin >> b;

    cin >> cmd;
    if (cmd == 1){
        cout << endl;
        cout << "Sum" << a << "+" << b;
        cout << " = " << a + b << endl;
        cout << endl;
    } else if (cmd == 2) {
        cout << "Sum" << a << "-" << b;
        cout << " = " << a - b << endl;
        cout << endl;
    } else if (cmd == 3) {
        cout << "Sum" << a << "*" << b;
        cout << " = " << a * b << endl;
        cout << endl;
    } else if (cmd == 4) {
        cout << "Sum" << a << "/" << b;
        cout << " = " << a / b << endl;
        cout << endl;
    }

        while(e!='q');
        cout << "\n###END Process###\t" << endl;

        return 0;
}
