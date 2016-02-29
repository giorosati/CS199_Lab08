#include <iostream>
#include <cstdlib>

#include "myStack.hpp"


void displayMenu();
int getInput();

int main() {
	myStack stack;
	bool done = false;
	int choice = 0;

	while (done != true) {
		displayMenu();
		choice = getInput();
		switch (choice) {
		case 1:
			int intIn;
			std::cout << "Enter an integer: ";
			std::cin.ignore();
			std::cin >> intIn;
			stack.push(intIn);
			break;
		case 2:
			stack.pop();
			break;
		case 3:
			stack.top();
			break;
		case 4:
			stack.list();
			break;
		case 5:
			done = true;
			break;
		default:
			std::cout << "Not a valid choice" << std::endl;
			break;
		}
	}
}


void displayMenu() {
	std::cout << std::endl;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "*************************" << std::endl;
	std::cout << "     1) Push" << std::endl;
	std::cout << "     2) Pop" << std::endl;
	std::cout << "     3) Top" << std::endl;
	std::cout << "     4) Display the stack" << std::endl;
	std::cout << "     5) Quit" << std::endl;
	std::cout << std::endl;
}

int getInput() {
	int choice;
	std::cout << "Choice: ";
	std::cin >> choice;
	return choice;
}