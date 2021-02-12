#include<stdio.h>

int main(){

    int numbr,k,remark,first,last,sum=0;

    printf("Give the First Number for the Range : ");
    scanf("%d",&first);
    printf("\n Give the Last Number for the Range : ");
    scanf("%d",&last);

    for(numbr= first; numbr<= last; ++numbr)

   {

    remark=0;

    for(k=2; k<=numbr/2; k++)

   {

        if((numbr % k) == 0){

        remark++;

        break;

        }

    }

   if(remark==0)

   sum += numbr;

   }

   printf("\n   Sum of prime numbers is:  %d ",sum);

   return 0;

}