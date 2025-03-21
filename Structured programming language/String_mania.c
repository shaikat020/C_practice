/**Write Program which will allow the following Sting operation. Please do not used any library function from string.h.

Menu:

STRING MANIA
=============
1. Calculate the String Length
2. String Comparison
3. String Concatenation
4. String Reverse**/
#include <stdio.h>

int string_length(char arr[]);
void string_comparison(char arr1[], char arr2[]);
void string_concatenation(char arr1[], char arr2[]);
void string_reverse(char arr[]);

int main(){

	
	char string1[] = {"StringMania1"};
	char string2[] = {"StringMania1"};

	// String length 
	printf("Length of the string = %d\n\n",string_length(string2));

	// String Comparison
	printf("Both String are : ");
	string_comparison(string1,string2);

	// String Concatenation
	printf("Before concatination : %s\n",string1);
	string_concatenation(string1,string2);
	printf("After concatination : %s\n\n",string1);

	// String Reverse
	printf("Orignal String : %s\n", string2);
	string_reverse(string2);
	printf("Reversed String : %s\n", string2);
	
	
	return 0;
}

int string_length(char arr[]){
	int length = 0;
	for(int i=0; arr[i] != '\0'; i++) length++;
	return length;
}
void string_comparison(char arr1[], char arr2[]){
	int flag = 1;
	if(string_length(arr1) == string_length(arr2)){
		for(int i=0; arr1[i] != '\0'; i++){
			if(arr1[i]!=arr2[i]){
				flag = 0;
				break;
			}
		}
		if(flag) printf("Same  !!\n\n");
		else printf("Different  !!\n\n");
	}
	else printf("Different !!");
}
void string_concatenation(char arr1[], char arr2[]){
	int len = string_length(arr1);
	for(int i=0; arr2[i] !='\0'; i++){
		arr1[len] = arr2[i];
		len++;
	}
	arr1[len] = '\0';
	
}
void string_reverse(char arr[]){
	int len = string_length(arr)-1;
	for(int i=0; i<len; i++,len--){
		char temp = arr[i];
		arr[i] = arr[len];
		arr[len] = temp;
	}
}