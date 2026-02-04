#include <unistd.h>

void ft_is_negative(int n){
	char r;
	if (n < 0){
		r = 'N';
		write(1,&r,sizeof(r));
		return;
	}else{
		r = 'P';
		write(1,&r,sizeof(r));
                return;
	}
}

int main (int argc, char *argv[]){
	if (argc > 2 || argc == 1){
		return -1;
	}
	if (argv[1][0] == '-'){
		ft_is_negative(-1);
	}else{
		ft_is_negative(1);
	}
	return 0;
}
