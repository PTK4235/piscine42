#include <unistd.h>

void ft_print_numbers(void){
	char c;
	for (int i=48;i<58;i++){
		c = (char) i;
		write(1,&c,1);
	}
}

int main(){
	ft_print_numbers();
	return 1;
}

