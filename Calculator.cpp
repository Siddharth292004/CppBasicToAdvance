#include<iostream>
using namespace std;

class calculator {
    public:
    int a, b;
    float c, d;

    void choice(int n) {
        switch (n) {
            case 1: {
                cin >> a >> b;
                cout << "Sum is: " << a + b << "\n\n";
                break;
            }
            case 2: {
                cin >> a >> b;
                cout << "Difference is: " << a - b << "\n\n";
                break;
            }
            case 3: {
                cin >> a >> b;
                cout << "Product is: " << a * b << "\n\n";
                break;
            }
            case 4: {
                cin >> c >> d;
                cout << "Quotient is: " << c / d << "\n\n";
                break;
            }
            default: {
                cout << "Invalid option\n\n";
                break;
            }
        }
    }
};

int main() {
    calculator key;
    int n;  // Declare 'n' here to allow user input
    do {
        cout << "Select any one\n\n";
        cout << "Addition: 1\n";
        cout << "Subtraction: 2\n";
        cout << "Multiply: 3\n";
        cout << "Divide: 4\n";
        cout << "Exit: 5\n";
        cin >> n;  // Take user input for 'n'
        
        if (n == 5) {
            break;
        } else {
            key.choice(n);
        }
    } while (true);  // Keep the loop running until the user chooses to exit

    return 0;
}
