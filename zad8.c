// Zadatak je odredit jeli broj palindrom, tj. cita li se isto s obje strane.

#include <stdio.h>
int main()
{
   int br, obrnut_br=0, ostatak,flag;
   printf("Unesi broj: ");
   scanf("%d", &br);

   /* Ovdje strvaramo obrnut_br 
   tako da obnemo znamenke originalnog broja.
    */
   flag=br;
   while(flag!=0)
   {
      ostatak=flag%10;
      obrnut_br=obrnut_br*10+ostatak;
      flag/=10;
   } 

   /* Ako je originalan broj jednak obrnutom
   onda je broj palindrom.
    */ 
   if(obrnut_br==br) 
      printf("%d je palindrom",br);
   else
      printf("%d nije palindrom",br);
   return 0;
}
