#include"test_réarrangement.h"
#include <print>
#include <string>
#include <stdexcept>
#include <expected>

namespace common{

std::expected<double, std::string> parse_decimal(const std::string& input) {
    if (input.length() > 15)
        return std::unexpected("Error: Input is out of range for a floating-point number");

    try {
        size_t pos;
        double value = std::stod(input, &pos);

        // Ensure the entire string was parsed
        if (pos != input.length())
            return std::unexpected("Error: Input contains extra characters after the number");

        return value;
    }
    catch (const std::invalid_argument&) {
        return std::unexpected("Error: Invalid input. Not a valid floating-point number");
    }
    catch (const std::out_of_range&) {
        return std::unexpected("Error: Input is out of range for a floating-point number");
    }
}

}