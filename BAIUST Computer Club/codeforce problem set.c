#include <stdio.h>

int main(){
    char numbers[1000];
    scanf("%s",numbers);
    int num1=0;
    char the_number;

    for(int i=0; numbers[i] != '\0'; i++){
        int count = 0;
        for(int j=0; numbers[j] != '\0'; j++){

            if(numbers[i] == numbers[j]){
                count++;
            }
        }
        if(count>num1){
            num1 = count;
            the_number = numbers[i];
        }
    }

    printf("%c",the_number);
    return 0;
}

