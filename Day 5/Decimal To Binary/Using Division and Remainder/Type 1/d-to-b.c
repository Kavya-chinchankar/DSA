//DEVISION AND REMAINDER
//USING BASE
//USING ARRAY

#include <stdio.h>

void decimalToBinary(int decimalNumber){
    int binaryNumber[32];

    int i=0;
    do{
        binaryNumber[i++] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
    }while(decimalNumber>0);

//    while(decimalNumber > 0){
//        binaryNumber[i] = decimalNumber % 2;
//        decimalNumber = decimalNumber / 2;
//        i++;
//    }

    printf("Binary Representation: ");

    if(i == 0){
        printf('0');
    }else{
        for(int j=i-1; j>= 0; j--){
            printf("%d",binaryNumber[j]);
        }
    }

    printf("\n");


}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
