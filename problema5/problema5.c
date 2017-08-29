#include<stdio.h>
#include<string.h>

int main()
{
	FILE* file =NULL;
	char a=NULL;
	int caso, contWord=0, i, cp=0, linea=0;
	char* fileNo;
	char c[80], cadena[1000];
	printf("Escoga un opcion para contar el texto\n");
	printf("1-Leer una cadena de texto\n");
	printf("2-Leer desde un archivo\n");
	scanf("%i",&caso);

	if(caso==1)
	{
		printf("Ingrese una cadena de texto: ");
		fflush(stdin);
		scanf(" %[^\n]s",cadena);
		for(i=0; i<strlen(cadena); i++){
			contWord++;
			a=cadena[i];
			if(a==' '||a=='\t'){
				cp++;
			}
		}
		linea=1;
		contWord -= cp;
	}
	else if(caso==2){
		fileNo="prueba.txt";
		file = fopen(fileNo,"r");
		if(file==NULL)return -1;
		fscanf(file,"%[^\t]s",cadena);
		for(i=0; i<strlen(cadena); i++){
		contWord++;
		a=cadena[i];
			if(a==' '||a=='\t'){
				cp++;
			}else if(a=='\n'){
			 	linea++;
			}
		}
		contWord = contWord -cp -linea;
	}
	printf("Cantidad de letras: %d\n", contWord-1);
	printf("Cantidad de palabras: %d\n", cp+linea);
	printf("Cantidad de lineas: %d\n", linea);
	return 0;
}
