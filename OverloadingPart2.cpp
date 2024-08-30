
#include<iostream>
using namespace std;

class Matrix {
public: 
    int rw, cl, a[30][30];

    // Function to input matrix elements
    void in() {
        cout << "ENTER THE NUMBER OF ROWS: ";
        cin >> rw;
        cout << "ENTER THE NUMBER OF COLUMNS: ";
        cin >> cl;
        cout << "ENTER " << rw * cl << " ELEMENTS OF THE MATRIX:\n";
        for (int i = 0; i < rw; i++) {
            for (int j = 0; j < cl; j++) {
                cin >> a[i][j];
            }
        }
    }

    // Friend function to overload '>>' operator for input
    friend istream& operator>>(istream& in, Matrix& m);

    // Friend function to overload '<<' operator for output
    friend ostream& operator<<(ostream& out, const Matrix& m);
};

// Overloading '>>' operator for input
istream& operator>>(istream& in, Matrix& m) {
    cout << "\nENTER THE NUMBER OF ROWS: ";
    in >> m.rw;
    cout << "\nENTER THE NUMBER OF COLUMNS: ";
    in >> m.cl;
    cout << "\nENTER " << m.rw * m.cl << " ELEMENTS OF THE MATRIX:\n";
    for (int i = 0; i < m.rw; ++i) {
        for (int j = 0; j < m.cl; ++j) {
            in >> m.a[i][j];
        }
    }
    return in;
}

// Overloading '<<' operator for output
ostream& operator<<(ostream& out, const Matrix& m) {
    for (int i = 0; i < m.rw; ++i) {
        for (int j = 0; j < m.cl; ++j) {
            out << m.a[i][j] << " ";
        }
        out << endl;  // Newline after each row
    }
    return out;
}

int main() {
    Matrix a, b, c;

    // Input and Output using functions and overloaded operators
    a.in();  // Input matrix using 'in' function
    b.in();  // Input matrix using 'in' function

    cin >> c;  // Input matrix using overloaded '>>' operator
    cout << c; // Output matrix using overloaded '<<' operator

    return 0;
}
