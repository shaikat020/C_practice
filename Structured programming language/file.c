#include<stdio.h>
int main()
{
    int arr[26]={0};
    FILE *ptr;
    char c;
    ptr=fopen("text.txt",'r');
    while(fgetc(ptr)!=EOF){
        fgetc(c);
        if(c>='a' && c<='z'){
            arr[c-'a']++;
        }
    } 
    
    for(int i=0;i<26;i++){
        printf("%c : %d\n",(97+i),arr[i]);
    }
    fclose(ptr);
    return 0;
}