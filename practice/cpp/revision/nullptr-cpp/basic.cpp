#include <iostream>

// function with integer argument
void fun(int N) {
    std::cout << "fun(int)";
}

// Overloaded function with char pointer argument
void fun(char* s) {
    std::cout << "fun(char *)";
}

int main(int argc, char* argv[]) {
    // Ideally, it should have called fun(char *)
    // but it causes compiler error.
    // fun(NULL);
    // replacing NULL with nullptr removes ambiguity because nullptr is a distinct pointer type
    fun(nullptr);
    
    return 0;
}
