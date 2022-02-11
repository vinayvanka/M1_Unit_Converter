#include<stdio.h>
#include<math.h>
#include"display.h"


double length_menu1(int menu){

double value;
printf("\nENTER THE VALUE THAT YOU WANT TO CONVERT : ");
scanf("%lf",&value);


switch (menu)
{
case 1:      //kilometer_to_meter
    return value*1000;
    break;
case 2:      //kilometer_to_centimeter
    return value*100000;
    break;
case 3:      //kilometer_to_millimeter
    return value*1000000;
    break;
case 4:      //meter_to_kilometer
    return value/1000;
    break;
case 5:      //meter_to_centimeter
    return value*100;
    break;
case 6:      //meter_to_millimeter
    return value*1000;
    break;
case 7:      //centimeter_to_kilometer
    return value/100000;
    break;
case 8:      //centimeter_to_meter
    return value/100;
    break;
case 9:      //centimeter_to_millimeter
    return value*10;
    break;
case 10:      //millimeter_to_kilometer
    return value/1000000;
    break;
case 11:      //millimeter_to_meter
    return value/1000;
    break;
case 12:      //millimeter_to_centimeter
    return value/100;
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;
}


double length_menu2(int menu){


double value;
printf("\nENTER THE VALUE THAT YOU WANT TO CONVERT : ");
scanf("%lf",&value);



switch (menu)
{
case 1:      //inch to feet
    return value/12;
    break;
case 2:      //foot to inch
    return value*12;
    break;
case 3:      //yard to cent
    return value*91.44;
    break;
case 4:      //cent to yard
    return value/91.44;
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;
}

double weight_menu(int menu){


double value;
printf("\nENTER THE VALUE THAT YOU WANT TO CONVERT : ");
scanf("%lf",&value);



switch (menu)
{
case 1:      //kg to g
    return value*1000;
    break;
case 2:      //G to kg
    return value/1000;
    break;
case 3:      //kg to pound
    return value*2.2;
    break;
case 4:      //pound to kg
    return value/2.2;
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;
}

double temprature_menu(int menu){

double value;

printf("\nENTER THE VALUE THAT YOU WANT TO CONVERT : ");
scanf("%lf",&value);



switch (menu)
{
case 1:      //c to f
    return (value*(9/5))+32;
    break;
case 2:      //f to c
    return (value-32)*(5/9);
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;

}



