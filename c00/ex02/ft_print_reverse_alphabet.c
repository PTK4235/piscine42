#include <unistd.h>

void ft_print_reverse_alphabet(void){
	char c;
	for (int i=122;i>96;i--){
		c = (char) i;
		write(1,&c,1);
	}
}

int main(){
	ft_print_reverse_alphabet();
	return 1;
}

