#include<stdio.h>
#include<math.h>
#include"display.h"
#include"calculations.h"

double length_menu(int list);
int main(){
    int menu;
 menu=show_main_menu();
 
switch (menu)
{
    case 1:{
        int menu=show_length_menu1();
        if(menu == 0){
            menu=show_length_menu2();
            double ans=length_menu2(menu);
            printf("\n your answer : %lf", ans);
            break;
        }
        double ans=length_menu1(menu);
        printf("\n your answer : %lf", ans);
    }
        break;
    case 2:{
        int menu=show_weight_menu();
        double ans=weight_menu(menu);
        printf("\n your answer : %lf", ans);
        
    }
   
        break;
    case 3:{

        int menu=show_temprature_menu();
        double ans=temprature_menu(menu);
        printf("\n your answer : %lf", ans);

    }
        break;
    

default:
    break;

}




}