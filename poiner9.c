#include<stdio.h>

// arrays as parameters

void TwiceArray (int arg[], int length) {

int n;

for (n=0; n<length; n++) arg[n] *= 2;

}

void PrintArray(int arg[], int length){

int n;

for (n=0; n<length; n++)

printf("%d ", arg[n]);

printf("\n");

}

void main (void){

int FirstArray[3] = {5, 10, 15};

int SecondArray[] = {2, 4, 6, 8, 10};

TwiceArray (FirstArray,3);

PrintArray (FirstArray,3);

PrintArray (SecondArray,5);

}
