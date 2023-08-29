#include <iostream>
#include <vector>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        double newReal = (real * other.real) - (imaginary * other.imaginary);
        double newImaginary = (real * other.imaginary) + (imaginary * other.real);
        return ComplexNumber(newReal, newImaginary);
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& complex) {
        os << complex.real;
        if (complex.imaginary >= 0) {
            os << " + " << complex.imaginary << "i";
        } else {
            os << " - " << -complex.imaginary << "i";
        }
        return os;
    }
};

int main() {
    ComplexNumber a(3.0, 4.0);
    ComplexNumber b(1.5, -2.5);

    ComplexNumber sum = a + b;
    ComplexNumber product = a * b;

    std::cout << "Complex Number a: " << a << std::endl;
    std::cout << "Complex Number b: " << b << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
