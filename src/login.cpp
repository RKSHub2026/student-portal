#include <iostream>
#include <string>

void displayLoginForm() {
    std::string username;
    std::string password;

    std::cout << "=== Student Portal Login ===" << std::endl;

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    std::cout << "Login details received for user: "
              << username << std::endl;
}
