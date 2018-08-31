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
    for(int i = 0; str[i] != '\0' ; i++)
	{
		if( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 'A' - 'a';
            /// why are there spaces here?
		}
	}
}