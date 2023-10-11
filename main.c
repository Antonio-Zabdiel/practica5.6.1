#include<stdio.h>

int main(){
    int n;
    long int factorial = 1;

    printf("ingrese un numero entero: ");
    scanf("%d", &n);

    if(n >= 1){
        while (n > 1)
        {
            factorial *= n;
            n--;
        }
        printf("el factorial es: %ld \n", factorial);
    } else {
        printf("numero no valido");
    }
    
    
    
    return 0;
}