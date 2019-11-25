
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include<conio.h>
using namespace std;
void imprimir_menu();
int leer_valor();
float norma (int myVector[],int size);
float unitario(int myVector[], int size);
void printVector(int myVector[],int size);
void sumaVector(int vector1[3], int vector2[3],int *ptr);
void restaVector(int vector1[3], int vector2[3],int *ptr);
float  producto(int vector1[3],int vector2[3],int size);
void pcruz(int vector1[3], int vector2[3]);
char repetir;

int main(){
int opt;
float r;
int c[3] = {0,0,0};
int  a[3];
int b[3];
int *ptrC = &c[0];
char repetir;
do{
imprimir_menu();
printf("Introduce una opcion:\n");
scanf("%d",&opt);

if(opt==1 || opt==2){
printf("Vector 1\n");
a[0];
printf("Introduzca x\n");
scanf("%d",&a[0]);
a[1];
printf("Introduzca y\n");
scanf("%d",&a[1]);
a[2];
printf("Introduzca z\n");
scanf("%d",&a[2]);
}
else{

printf("Vector 1\n");
a[0];
printf("Introduzca x\n");
scanf("%d",&a[0]);
a[1];
printf("Introduzca y\n");
scanf("%d",&a[1]);
a[2];
printf("Introduzca z\n");
scanf("%d",&a[2]);

printf("Vector 2\n");
b[0];
printf("Introduzca x\n");
scanf("%d",&b[0]);
b[1];
printf("Introduzca y\n");
scanf("%d",&b[1]);
b[2];
printf("Introduzca z\n");
scanf("%d",&b[2]);
}




switch (opt){
case 1:
norma(a,3);
break;

case 2:
    unitario(a,3);

    break;
case 3:
sumaVector(a,b,ptrC);
printVector(c,3);
break;

case 4:
    restaVector(a,b,ptrC);

printVector(c,3);
break;
case 5:
    producto(a,b,3);

break;
case 6:
pcruz(a,b);
break;
}
printf("Desea hacer otra operacion S N:\n");
repetir=getch();
}while(repetir=='s' || repetir=='S');
}



void imprimir_menu(){
printf("1 Norma \n");
printf("2 Vector Unitario \n");
printf("3 Suma\n");
printf("4 Resta\n");
printf("5 Producto punto\n");
printf("6 Producto cruz\n");
}

float norma (int myVector[],int size){
	float suma;
	for(int i = 0; i<size; i++){
		suma+=(myVector[i])*(myVector[i]);

	}
	float n;
n=sqrt(suma);
printf("%f\n",n);
}

float unitario(int myVector[], int size){
	float suma;
	float u;
	myVector[3];
	int a[3];
	a[0];
printf("Introduzca x\n");
scanf("%d",&a[0]);
a[1];
printf("Introduzca y\n");
scanf("%d",&a[1]);
a[2];
printf("Introduzca z\n");
scanf("%d",&a[2]);

	u=norma(a,3);
float u1,u2,u3;
	u1=(myVector[0])/(u);
    u2=(myVector[1])/(u);
	u3=(myVector[2])/(u);
printf("%f\n%f\n%f\n",u1,u2,u3);
}


void sumaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] + vector2[i];
	}
}



void printVector(int myVector[],int size){
for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,myVector[i]);
	}
}

void restaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] - vector2[i];
	}
}

float  producto(int vector1[3], int vector2[3],int size){
    float x;
    	x=((vector1[0])*(vector2[0]))+((vector1[1])*(vector2[1]))+((vector1[2])*(vector2[2]));
printf("%f\n",x);
}
void pcruz(int vector1[3], int vector2[3]){
float pc1, pc2, pc3;
pc1=((vector1[1])*(vector2[2]))-((vector2[1])*(vector1[2]));
pc2=((vector1[0])*(vector2[2]))+((vector2[0])*(vector1[2]));
pc3=((vector1[0])*(vector2[1]))-((vector2[0])*(vector1[1]));

printf("%f\n%f\n%f\n ",pc1,pc2,pc3);
}

