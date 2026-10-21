#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize the object's values
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading unary (-) operator
    void operator-() {
        feet--;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }
};

// Driver Code
int main() {
    Distance d1(8, 9);

    // Use unary (-) operator
    -d1;

    return 0;
}