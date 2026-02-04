#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(int argc, char *argv[]){
	if (argc == 2){
		ft_putchar(*argv[1]);
		return 0;
	}
	return 0;
}
