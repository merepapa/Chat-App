#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    float result;

    while (true) {
        cout<<"Satyam Mehta 21115087 \n";
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        cout << "\n1. Sum" << endl;
        cout << "2. Sub" << endl;
        cout << "3. Mul" << endl;
        cout << "4. Div" << endl;
        cout << "5. exit" << endl;
        cout << "choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = a + b;
                cout << "a + b = " << result << endl;
                break;
            case 2:
                result = a - b;
                cout << "a - b = " << result << endl;
                break;
            case 3:
                result = a * b;
                cout << "a * b = " << result << endl;
                break;
            case 4:
                if (b != 0) {
                    result = (float)a / b;
                    cout << "a / b = " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5:
                return 0; // Exit the program
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\n--" << endl; // To visually separate each loop iteration
    }

    return 0;
}