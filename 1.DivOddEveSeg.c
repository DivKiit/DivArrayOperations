#include<stdio.h>
/*Divyaranjan Sahoo
Even Odd Segregation*/
int main(){
  int i,n,j,Alpha=0;
  printf("Input the number of values ~ ");
  scanf("%i",&n);
  int Array[n], DivArray[n];
  for (i=0;i<n;i++){
    printf("Enter the %i value - ",i+1);
    scanf("%i",&Array[i]);}
  for (i=0;i<n;i++){
      if(Array[i]%2==1){
      DivArray[Alpha]=Array[i];
      Alpha+=1;}}
  for (j=0;j<n;j++){
      if(Array[j]%2==0){
      DivArray[Alpha]=Array[j];
      Alpha+=1;}}
  printf("\nArray [] - {");
  for (i=0;i<n;i++){
    printf("%i ",DivArray[i]);}
  printf("\b}\n");
  return 0;}
