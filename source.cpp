#include <iostream>

int main(int argc, char *argv[]);
void upper(char str[]);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        upper(argv[i]);
        std::cout << argv[i] << std::endl;
    }
}

void upper(char str[]) {
    
}