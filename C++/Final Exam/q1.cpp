#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overloading the "+" operator as a member function
    Complex operator+(const Complex& other) const {
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return Complex(sumReal, sumImaginary);
    }

    // Overloading the "<<" operator as a friend function
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real;
        if (c.imaginary >= 0)
            os << " + ";
        else
            os << " - ";
        os << std::abs(c.imaginary) << "i";
        return os;
    }
};

int main() {
    Complex c1(3.8, 5.8);
    Complex c2(2.2, -3.9);

    Complex sum = c1 + c2;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

// In the previous example, the complex numbers (3.8, 5.8i) and (2.2, -3.9i) are each represented by a separate Complex object, denoted by the letters c1 and c2. The overloaded + operator is then used to combine the values of c1 and c2, returning a fresh Complex object total. We then use the overloaded operator to print the sum in the format "a + bi" to display the total.