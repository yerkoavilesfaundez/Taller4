#include <stdio.h>
#define MAX 7 // Para probar con palabras mas largas hay que solo cambiar el valor MAX //
int main(){
	char palabra[MAX];//largo de la palabra
	int i,j,cont[MAX],cont2=0;
	printf("ingrese la palabra a verificar letra por letra\n");
	for(i=0;i<MAX;i++){
		scanf("%c",&palabra[i]);// ingreso de la palabra letra por letra//
		fflush(stdin); //funcion para vaciar el buffer de entrada del teclado y no imprimir la tecla enter//
	}
	for(j=0;j<MAX;j++){//llenado de ceros en el contador de letras //
		cont[j]=0;
	}
	for(j=0;j<MAX;j++){
		for(i=0;i<MAX;i++){
			if(j>i){
				if(palabra[j]==palabra[i])break;// si la letra ya ha sido contada antes, se saltara el conteo de dicha letra //
			}
			if(palabra[j]==palabra[i]){// compara letras para asi saber el numero de letras iguales en la palabra //
				cont[j]++;
			}	
		}
	}
	for(j=0;j<MAX;j++){ // verifica el numero de letras en cada una //
		if((cont[j]%2)==1){
 			cont2++;// conteo de la cantidad de letras impares //	
		} 	
	}
	if(cont2<2){
		printf("\n1");// si es palindromo imprime un 1 //
	}
	else{
		printf("\n0");// si no es palindromo imprime un 0 //
	}	
}	