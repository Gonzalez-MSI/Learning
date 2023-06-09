#include <stdio.h>
#include <math.h>
#define pi 3.1415927

double exponential();
double Sinoidal(float,int);
double Factorial_Sin(int);

int main(){

    float x;
    int number_of_terms;

    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    printf("%f",pow(exponential(),Sinoidal(x,number_of_terms)));
}

double exponential(){

    float y,exponential,factorial_e;
    int i;

    for(i=1,exponential=1,y=1,factorial_e=1;i<50;i++){

        factorial_e*=(y/i);
        exponential+=factorial_e;
    }
    return exponential;
}

double Sinoidal(float x,int number_of_terms){

    int i;
    float sin_x, power, j;
    sin_x=0;

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        i%2?sin_x-=((pow(((x*pi/180)),(2*power+1)))/(Factorial_Sin(j))):
        sin_x+=((pow(((x*pi/180)),(2*power+1)))/(Factorial_Sin(j)));

    }
    return sin_x;
}

double Factorial_Sin(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j+1;k++){
        
        factorial*=k;
    }
    return factorial;
}


