#include <stdio.h>

int main(){
int i,n,temp,min,j;
//tamaño de arreglo
printf("primero dime cuantos numeros guardaras en el vector: ");
scanf("%d", &n);

int list[n];
//guardar valores
    for(i=0; i<n; i++){
        printf("ahora dime que numeros guardaras en cada posicion:%d---", i);
        scanf("%d", &list[i]);
    }
//recorrer arreglo
    for(i=0; i<n-1; i++){
        min=i;
        for (j= i+1; j<n; j++){
            if(list[j] < list[min]){
                min = j;
            }
        }
        //intercambiar valores
        if(min != i){
            temp        = list[min];
            list[min]     = list[i];
            list[i]   = temp;
        }
    }

	for(i=0; i<n; i++){
		printf("%d\t",list[i]);
	}

}