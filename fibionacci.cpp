#include <iostream>

// Recursive function for Fibonacci
int fibonacci(int term) {
    if (term <= 1)
        return term;
    return fibonacci(term - 1) + fibonacci(term - 2);
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Please enter a positive integer.\n";
        return 1;
    }

    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i);
        if (i < n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "\n";
    return 0;
}
