#include <stdio.h>

int main ()
{
    char palavra [20];
    int i=tam;
    
    printf ("\nEntre com a palavra :");
    scanf ("%s";palavra);
    
    //imprimir na ordem inversa 
    
    tam =strlen (palavra);
    
    for (i=tam-1; i >=0 ; i --)
    {
        printf ("%c",palavra [i]);
        
    }
    
    printf ("\n"); //pular uma linha em branco 
    
    return = 0
}
