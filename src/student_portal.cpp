#include <iostream>
#include <string>

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

void displayApplicationName() {
    std::cout << "Application: Student Portal" << std::endl;
}




int addNumbers(int a, int b) {
    return a + b;
}

void displayResult(int num1, int num2, int result) {
    std::cout << "Calculation Result:" << std::endl;
    std::cout << num1 << " + " << num2 << " = " << result << std::endl;
}


int main() {
    printWelcomeMessage();
    greetUser();
    displayApplicationName();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    displayResult(num1, num2, result);
    std::cout << "Program finished successfully." << std::endl;

    return 0;
