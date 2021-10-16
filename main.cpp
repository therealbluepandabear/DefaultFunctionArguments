#include <iostream>
void CreateWindow(std::string *str, int x, int y, int width, int height);

void CreateWindow(std::string *str, int x = -1, int y = -1, int width = -1, int height = -1) {
    std::cout << "Title : " << *str << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << x << std::endl;
    std::cout << "Width: " << x << std::endl;
    std::cout << "Height: " << x << std::endl;
}

int main() {
    std::string str = "Notepad";
    CreateWindow(&str);
    return 0;
}
