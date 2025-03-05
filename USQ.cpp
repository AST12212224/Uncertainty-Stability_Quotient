#include <iostream>
#include <iomanip>   // For setting precision
#include <gmpxx.h>   // GMP for high-precision calculations

int main() {
    // Set high precision for floating-point calculations
    mpf_set_default_prec(2048);

    // Declare variables using GMP's high-precision class
    mpf_class x, y, a, b;
    int n;

    // Take user input
    std::cout << "Enter values for x, y, a, b, and n: ";
    std::cin >> x >> y >> a >> b >> n;

    // Compute power terms
    mpf_class x_n_a, y_n_a, x_n_b, y_n_b;
    mpf_pow_ui(x_n_a.get_mpf_t(), x.get_mpf_t(), n + a.get_si());
    mpf_pow_ui(y_n_a.get_mpf_t(), y.get_mpf_t(), n + a.get_si());
    mpf_pow_ui(x_n_b.get_mpf_t(), x.get_mpf_t(), n + b.get_si());
    mpf_pow_ui(y_n_b.get_mpf_t(), y.get_mpf_t(), n + b.get_si());

    // Compute the function
    mpf_class numerator = x_n_a - y_n_a;
    mpf_class denominator = x_n_b - y_n_b;

    // Check for division by zero
    if (denominator == 0) {
        std::cerr << "Error: Denominator is zero. Undefined result." << std::endl;
        return 1;
    }

    // Compute final result
    mpf_class result = numerator / denominator;

    // Print result
    std::cout << "Phi(" << n << "," << a << "," << b << ") = "
              << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}
