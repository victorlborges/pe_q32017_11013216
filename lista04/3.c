#include "stdio.h"

struct dados{
  char nome[100];
  int ra;
  float p1;
  float p2;
  float p3;
  float media;
};  

int main(void) {
  
  struct dados alunos[50];
  
  FILE *fp = fopen("lista_alunos.txt", "r");
  FILE *fp2 = fopen("media_alunos.txt", "w");
  float media[50];
  
  for (int i=0; i<50; ++i) {
    fscanf ( fp, "%s %d %f %f %f" , alunos[i].nome,  &alunos[i].ra, &alunos[i].p1,  &alunos[i].p2,  &alunos[i].p3 );
    media[i] =  ( alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3.0;
  }
  
  for (int i=0; i<50; ++i) {
    alunos[i].media = media[i];
    fprintf ( fp2, "%s %d %.2f %.2f %.2f %.2f\n" , alunos[i].nome,  alunos[i].ra, alunos[i].p1,  alunos[i].p2,  alunos[i].p3, alunos[i].media );
  }
  
  return 0;
  
}
