#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: Program <string>\n";
    }
    for (int i = 0; argv[1][i] != '\0' && argv[1][i] != '%'; ++i) {
        std::cout << argv[1][i] << '\n';
    }
    
    return 0;
}
