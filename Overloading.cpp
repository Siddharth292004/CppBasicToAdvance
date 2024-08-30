#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    // Default Constructor
    Distance() {
        feet = 0;
        inches = 0;
    }

    // Parameterized Constructor
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Overloading '<<' operator for output
    friend ostream &operator<<(ostream &output, const Distance &D) {
        output << "Feet: " << D.feet << " Inches: " << D.inches;
        return output;
    }

    // Overloading '>>' operator for input
    friend istream &operator>>(istream &input, Distance &D) {
        input >> D.feet >> D.inches;
        return input;
    }
};

int main() {
    Distance D1(11,10),D2(5,11),D3;

    cout << "Enter the value of the third object  " << endl;
    cin >> D3;

    cout << "First Distance: " << D1 << endl;
    cout << "Second Distance: " << D2 << endl;
    cout << "Third Distance: " << D3 << endl;

    return 0;
}