#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main (){
 int x=0, i=0, z=0, sorteio[3000][6], duplas[3540][3], y=0, w=0, n;
 
 char nome1;
 
 while(z<3000){
  for(i=0;i<6;i++){
   x= rand()%60;
   sorteio[z][i]=x;
   
  }
  z++;
 }
 
 int a=1, b=1;
 for(y=0;y<3540;y++){
  for (w=0;w<2;w++){
   if (w==0){
    duplas[y][w] = a;
    
   }else{
    if (a!=b){
     duplas[y][w] = b;
     b++;
    }else{
     b++;
     duplas[y][w] = b;
    }
    
   }
   
  }
  if (b==61){
   a++;
   b=1;
  }
  duplas[y][2]=0;
  for (z=0;z<3000;z++){
   int cont =0;
   for (i=0;i<6;i++){
    if (sorteio[z][i]==a){
     cont++;
    }else if(sorteio[z][i]==b){
     cont++;
    }
    if (cont ==2){
     duplas[y][2]++;
    }
   }
  }
 }
 
 for(z=3449;z>=1;z--){
  for (y=0;y<3450;y++){
   int troca[1][3];
   if (duplas[y][2]<duplas[y+1][2]){
    
    troca[0][0] = duplas[y][0];
    troca[0][1] = duplas[y][1];
    troca[0][2] = duplas[y][2];
    
    duplas[y][0] = duplas[y+1][0];
    duplas[y][1] = duplas[y+1][1];
    duplas[y][2] = duplas[y+1][2];
    
    duplas[y+1][0] = troca[0][0];
    duplas[y+1][1] = troca[0][1];
    duplas[y+1][2] = troca[0][2];
   }
  }
 }
 
 for(y=0;y<15;y++){
  for(w=0;w<2;w++){
   
   printf("%d ", duplas[y][w]);
  }
  printf("= %d", duplas[y][2]);
  printf("\n");
 } 
 
 //
 

int t,s,h;
 int jogo1[6], jogo2[6], jogo3[6];
 int sorteiofinal[6];
 char nome,nome2,nome3;


//1.
  printf("\nDigite seu nome: \n");
  scanf("%s",&nome);
 
   for(t=0;t<6;t++){
    printf("Digite o numero: \n");
     scanf("%d",&h);
      while (h < 1 || h > 60){
     printf("Numero invalido , digite o numero novamente: \n");
       scanf("%d",&h);
    }
  
    jogo1[t]=h;  
  } 
    printf("Os numeros:\n");
     for(t=0;t<6;t++){
      printf("%d ", jogo1[t]);
       }
       
 
  
//2.
  
  printf("\nDigite seu nome: \n");
 scanf("%s",&nome2);
  
  
  for(t=0;t<6;t++){
   
    printf("Digite o numero: \n");
     scanf("%d",&h);
      while (h < 1 || h > 60){
     printf("Numero invalido , digite o numero novamente: \n");
     scanf("%d",&h);
    }
  
    jogo2[t]=h;  
  } 
   printf("Os numeros:\n");
     for(t=0;t<6;t++){
      printf("%d ", jogo2[t]);
       }
  
//3.

 printf("\nDigite seu nome: \n");
 scanf("%s",&nome3);
  
  
  for(t=0;t<6;t++){
   
    printf("Digite o numero: \n");
     scanf("%d",&h);
      while (h < 1 || h > 60){
     printf("Numero invalido , digite o numero novamente: \n");
     scanf("%d",&h);
    }
  
    jogo3[t]=h;  
  } 
   printf("Os numeros:\n");
     for(t=0;t<6;t++){
      printf("%d ", jogo3[t]);
       }


  
 system("pause>>null");
}
