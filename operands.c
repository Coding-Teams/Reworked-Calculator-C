#include <stdlib.h>
#include <stdlib.h>
#include "operands.h"
#include <math.h>



//DON'T PUT CONDITION VALUES THAT HAS TO BE READ IN THE MAIN HERE! OR ELSE THE VALUE FOR THE OCNDITION WILL FAIL TO BE VERIFIED.


void divis() {

     system("COLOR 7");

     float div;

     float n1, n2;





         printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);

         if (n2 == 0) {

                system("cls");

                system("COLOR 4");

            printf("You can't divide per 0.\n");

            system("pause");

            system("cls");

            return divis();
         }


         div = n1 / n2;


         printf("%.2f \n", div);



}


void sub() {




    float n1, n2, sub;






        printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         sub = n1 - n2;


         printf("%.2f \n", sub);




}

void sum() {


    float sum;

    float n1;
    float n2;





         printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         sum = n1 + n2;


         printf("%.2f \n", sum);




}


void mult() {


    float mult;

    float n1;
    float n2;





        printf("Insert two numbers \n");
         scanf("%f %f", &n1, &n2);



         mult = n1 * n2;


         printf("%.2f \n", mult);





}



void power() {


     int pow1, pow2;

     int elevation, elevation2;









        printf("Insert two numbers \n");
        scanf("%d %d", &pow1, &pow2);



         elevation = pow1 * pow1;

         elevation2 = pow2 * pow2;


         printf("%d %d \n", elevation, elevation2);





}





