#include<stdio.h>
#include<math.h>
///////////////////////////////////////////////////////////////// MAIN-MENU //////////////////////////////////////////////////////////////////////// 
int show_main_menu(){      


int menu_num=0;
printf("                           Welcome to Unit Converter Utility\n");
printf("\n************************************ MAIN MENU *****************************************\n\n");
printf("\n1-LENGTH     (1)\n");
printf("\n2-WEIGHT     (2)\n");
printf("\n3-TEMPRATURE (3)\n");
printf("\n\n\n\n\n Enter your choice ?(numeric value only) ");

scanf("%d",&menu_num);
while(menu_num>6 || menu_num<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&menu_num);
}

return menu_num;

}              
////////////////////////////////////////////////////////////////// END OF MAIN-MENU //////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////// SHOW LENGTH MENU 1 ////////////////////////////////////////////////////////////////////
int show_length_menu1(){        
int user_input;

printf("\n************************************************ LENGTH  *******************************************\n\n");
printf("\n***************************************** METRIC UNITS CONVERT FROM ********************************\n\n");
printf("\n 1-KILOMETER TO METER               2-KILOMETER TO CENTIMETER             3-KILOMETER TO MILLIMETER\n");
printf("\n 4-METER TO KILOMETER               5-METER TO CENTIMETER                 6-METER TO MILLIMETER\n");
printf("\n 7-CENTIMETER TO KILOMETER          8-CENTIMETER TO METER                 9-CENTIMETER TO MILLIMETER\n");
printf("\n10-MILLIMETER TO KILOMETER         11-MILLIMETER TO METER                12-MILLIMETER TO CENTIMETER\n");
printf("\n \n                                      press 0 for MORE OPTIONS                                        \n");
printf("\n\n\n Enter your choice ?(numeric value only)");

scanf("%d",&user_input);
while(user_input>12 || user_input<0){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&user_input);
}
return user_input;
 
}

//////////////////////////////////////////////////////////////// END LENGTH MENU 1 ////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////// SHOW LENGTH MENU 2 /////////////////////////////////////////////////////////////////////
int show_length_menu2(){

int user_input1;

printf("\n****************************** IMPERIAL UNITS CONVERT FROM ********************************\n\n");
printf("\n1-INCH to FEET                       2-FOOT to INCH                           3-YARD t0 CENT\n");
printf("\n4-CENT to YARD        \n");
printf("\n\n\n Enter your choice ?(numeric value only)");
scanf("%d",&user_input1);

while(user_input1>4 || user_input1<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&user_input1);
}
return user_input1;
}



/////////////////////////////////////////////////////////////// END LENGTH MENU 2 /////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////// SHOW WEIGHT MENU ///////////////////////////////////////////////////////////////////////

int show_weight_menu(){


int user_input1;

printf("\n************************************************ WEIGHT *************************************************\n\n");
printf("\n1-KILOGRAM TO GRAM                       2-GRAM TO KILOGRAM                           3-KILOGRAM TO POUND\n");
printf("\n4-POUND TO KILOGRAM        \n");
printf("\n\n\n Enter your choice ?(numeric value only)");
scanf("%d",&user_input1);

while(user_input1>4 || user_input1<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&user_input1);
}
return user_input1;
}


////////////////////////////////////////////////////////////// END WEIGHT MENU ///////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////// TEMPRATURE MENU ///////////////////////////////////////////////////////////////////////

int show_temprature_menu(){

int user_input1;

printf("\n************************************************ TEMPRATURE *************************************************\n\n");
printf("\n 1-CELCIUS TO FAHRENHEIT\n 2-FAHRENHEIT TO CELCIUS\n");

printf("\n\n\n Enter your choice ?(numeric value only)");
scanf("%d",&user_input1);

while(user_input1>4 || user_input1<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&user_input1);
}
return user_input1;

}



///////////////////////////////////////////////////////////// END TEMPRATURE MENU ///////////////////////////////////////////////////////////////////



