#include <iostream>

int main(int argc, char *argv[]);
void toUpper(char str[]);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        toUpper(argv[i]);
        std::cout << argv[i] << std::endl;
    }
}

void toUpper(char str[]) {
    for(int i = 0; str[i] != '\0' ; i++)
	{
		if( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 'A' - 'a';
		
		}
	}
}