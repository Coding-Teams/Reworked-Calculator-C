#include <stdio.h>
#include <stdlib.h>
#include "operands.h"
#include <math.h>



 //Copyright by Fabio-Git-Dev - Software Engineer student UniBa


     unsigned int choice; //Used to choose unit at the beginning

     unsigned int decision;  //Used to chose option at the end of operation.





   /*

    NOTE, all the inputs that require a scanf that are depending from a do-while or a if-else ecc, MUST be declared in the same place
    where the cicles are declared, or else the condition won't be read and it won't work

   */


int main(void) //Main function

{

         system("COLOR 7"); //sets color for each string.

         printf(" Calculator by Fabio-Git-Dev \n");







   do{


    printf("Wich operation you want to do? 1(+) 2(-) 3(x) 4(/) 5 (Power) 6 (Exit) \n");

    scanf("%d", &choice);


    /*Conditions in case the number doesn't correspond to the number given in the selection
      for each number a condition is needed, that's why need to use else if to express a condition.*/

        if (choice == 7) {

        system("cls");

        system("COLOR 4");

        printf("Wrong selection, retry\n");

        system("Pause");

        system("cls");

        return main();

        }


         else if (choice == 8) {

        system("cls");

        system("COLOR 4");

        printf("Wrong selection, retry\n");

        system("Pause");

        system("cls");

        return main();


       }  else if (choice == 9) {

        system("cls");

        system("COLOR 4");

        printf("Wrong selection, retry\n");

        system("Pause");

        system("cls");

        return main();

       }




switch (choice) { //switch case for operand choice.



case 1:

     do {

         sum();


          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

           if (decision != 1) { //condition to return to the main menu if a person press 2 for No.

            return main();


          }


   } while (decision == 1);
     break;





 case 2:

     do {

         sub();



          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

           if (decision != 1) {

            return main();


          }


    } while (decision == 1);
      break;







 case 3:

    do {
            mult();


          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

           system("cls");

           if (decision != 1) {

            return main();


          }


    } while (decision == 1);
      break;




 case 4:
     do {

          divis();


           printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
           scanf("%d", &decision);

           system("cls");

           if (decision != 1) {

            return main();


          }





         } while (decision == 1);
           break;


 case 5:
    do {

          power();

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

          system("cls");

          if (decision != 1) {

            return main();


          }



    } while (decision == 1);
      break;




default:

            system("cls");

            system("COLOR D");
            printf("Exiting program... \n");
            system("pause"); //Value used to exit program.

            return 0;





}


} while (choice == 1);



}





 //end of function


































