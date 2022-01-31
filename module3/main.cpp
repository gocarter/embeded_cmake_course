#include <iostream>
#include "my_math/addition.hpp"
#include "my_math/division.hpp"
#include "my_print/print_result.hpp"

int main(){
	float first_no, second_no, result_add, result_div;

	std::cout << "Enter first number: ";
	std::cin >> first_no;
	std::cout << "Enter second number: ";
	std::cin >> second_no;

	result_add = addition(first_no, second_no);
	result_div = division(first_no, second_no);
	
	print_result("Addition", result_add);
	print_result("Division", result_div);

	return 0;

}
