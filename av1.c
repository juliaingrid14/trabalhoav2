#include <stdio.h>
int main ()
{
    int i;
    float av1 [10];
    float soma = 0 , media =0 ;
    //ler ocorrencias do vetor 
    for (i=0; i <=9;i++)

       {
         
        printf ("\nEntre com a av1 do aluno %d:",i+1);
        scanf ("%f",&av1[i]);
        soma = soma + av1 [i];
        
       }
       
       media = soma / i; 
       
       printf ("\nMedia = %.2f\n",media);
       
       return 0;
}
      
        