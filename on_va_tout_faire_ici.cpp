// on_va_tout_faire_ici.cpp : définit le point d'entrée de l'application.
//

#include "on_va_tout_faire_ici.h"

#include "common/test_réarrangement.h"

int main()
{
	std::cout << "Hello CMake." << std::endl;
	std::cout << "parse_decimal tests:"
		<< common::parse_decimal("123.456").value() << std::endl;
	return 0;
}