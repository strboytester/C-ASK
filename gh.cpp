#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> prime_factorization(int n) {
    std::vector<int> factors;
    int divisor = 2;
    while (n >= 2) {
        if (n % divisor == 0) {
            factors.push_back(divisor);
            n /= divisor;
        } else {
            divisor++;
        }
    }
    return factors;
}

std::vector<double> solve_quadratic_equation(double a, double b, double c) {
    std::vector<double> solutions;
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        solutions.push_back((-b + std::sqrt(discriminant)) / (2 * a));
        solutions.push_back((-b - std::sqrt(discriminant)) / (2 * a));
    }
    return solutions;
}

int fibonacci_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

std::vector<std::vector<int>> matrix_power(const std::vector<std::vector<int>>& matrix, int power) {
    std::vector<std::vector<int>> result = matrix;
    for (int i = 1; i < power; i++) {
        result = matrix_multiply(result, matrix);
    }
    return result;
}

int main() {
    int num_to_factorize = 9876543210;
    std::vector<int> factors = prime_factorization(num_to_factorize);
    std::cout << "Prime factors of " << num_to_factorize << ": ";
    for (int factor : factors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    double a = 2.0;
    double b = -5.0;
    double c = 3.0;
    std::vector<double> quadratic_solutions = solve_quadratic_equation(a, b, c);
    std::cout << "Solutions to the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0: ";
    for (double solution : quadratic_solutions) {
        std::cout << solution << " ";
    }
    std::cout << std::endl;

    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < 20; i++) {
        std::cout << fibonacci_recursive(i) << " ";
    }
    std::cout << std::endl;

    std::vector<std::vector<int>> random_matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int power = 3;
    std::vector<std::vector<int>> matrix_raised = matrix_power(random_matrix, power);

    std::cout << "Random Matrix:" << std::endl;
    print_matrix(random_matrix);
    std::cout << "Matrix raised to power " << power << ":" << std::endl;
    print_matrix(matrix_raised);

    return 0;
}
