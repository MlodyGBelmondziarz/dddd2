#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>


using namespace std;

int main(int argc, char** argv)
{
    system("chcp 1250");
    system("cls");
    double bok_A;
    double przekatna_D;
    double B_do_kwadratu;
    double B;
    double pole_prostokata;
    double obwod_prostokata;
    
    
    printf("Podaj przek¹tn¹ D w centymetrach: ");
    scanf("%lf",&przekatna_D);
    
printf("\n");

    printf("Podaj bok A w centymetrach: ");
    scanf("%lf",&bok_A);

    

	printf("\nwczytane dane\nD=%.2lf",przekatna_D);
	printf(" cm");
	printf("\nA=%.2lf",bok_A);
	printf(" cm");

printf("\n");


   
   B_do_kwadratu = (przekatna_D * przekatna_D) - (bok_A*bok_A);
   
   printf("\nwyniki");
   
   B=sqrt(B_do_kwadratu);
   printf("\nB=%.2lf", B);
   printf("cm");
   
   pole_prostokata = bok_A * B;
   
   printf("\npole prostok¹ta=%.2lf", pole_prostokata);
   printf("cm^2");
  
   obwod_prostokata = bok_A + bok_A + B + B;

   printf("\nobwód prostok¹ta=%.2lf", obwod_prostokata);
   printf("cm");   


   // cout<<"Pole prost¹k¹ta="<<A*B<<"cm^2"<<endl;

    //cout<<"Obwód Prostok¹ta="<<A+A+B+B<<"cm^2"<<endl;



return 0;
}
