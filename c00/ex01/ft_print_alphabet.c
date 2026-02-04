
#include <unistd.h>

void ft_print_alphabet(void){
	char c;
	for (int i=97;i<123;i++){
		c = (char) i;
		write(1,&c,1);
	}
}

int main(){
	ft_print_alphabet();
	return 1;
}
