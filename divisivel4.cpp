#include <stdio.h>
int divisao(int a){
	if(a % 4 == 0){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
	int a;
	printf("digite 1 numero de 3 digitos.\n");
	scanf("%d", &a);
	if((a > 99) && (a < 1000)){
	divisao(a) ? printf(" e divisivel") : printf(" nao e divisivel");
}else{
	printf("o numero tem que ser de 3 digitos");
}
	return 0;
}



