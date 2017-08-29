#include<stdio.h>
#include<string.h>

int main(){

	FILE* file =NULL; 
	char tex=NULL, var=NULL;
	int op, contador=0, i, sp=0;
	char* nomF;
	char a[80], cadena[1000];
	printf("Escoga una opcion desde donde se contara el texto\n");
	printf("1-Leer una cadena de texto\n");
	printf("2-Leer desde un archivo\n");
	scanf("%i",&op);

	if(op==1)
	{
		printf("Ingrese una cadena de texto: ");
		fflush(stdin);
		scanf(" %[^\n]s",cadena);
		for(i=0; i<strlen(cadena); i++){
			contador++;
			var=cadena[i];
			if(var ==' '||var=='\t'){
				sp++;
			}
		}
		contador -= sp;
	}
	else if(op==2){
		nomF="prueba.txt";
		file = fopen(nomF,"r");
		if(file==NULL)return -1;
		fscanf(file,"%[^\t]s",cadena);
		for(i=0; i<strlen(cadena); i++){
		contador++;
		var=cadena[i];
			if(var==' '||var=='\n'||var=='\t'){
				sp++;
			}
		}
		contador -= sp;
	}
	printf("Cantidad de caracteres: %d\n", contador);
	return 0;
}
