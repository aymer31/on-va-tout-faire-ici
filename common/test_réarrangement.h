#pragma once
#include <print>
#include <string>
#include <stdexcept>
#include <expected>


namespace common {
	std::expected<double, std::string> parse_decimal(const std::string& input);

}