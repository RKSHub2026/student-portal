#include <iostream>
#include <string>

bool validateLogin(const std::string& username,
                  const std::string& password) {
    return !username.empty() && !password.empty();
}

void displayLoginForm() {
    std::string username;
    std::string password;

    std::cout << "=== Student Portal Login ===" << std::endl;

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (validateLogin(username, password)) {
        std::cout << "Login successful." << std::endl;
        std::cout << "Welcome, " << username << "!" << std::endl;
    } else {
        std::cout << "Invalid login details." << std::endl;
    }
}
