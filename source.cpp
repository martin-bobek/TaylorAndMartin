
int main(int argc, char *argv[]);
void upper(char str[]);

int main(int argc, char *argv[]) {
    
}

void upper(char str[]) {
    for(int i = 0; str[i] != '\0' ; i++)
	{
		if( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 'A' - 'a';
		
		}
	}
}