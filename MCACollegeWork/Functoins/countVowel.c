#include<stdio.h>

int countVowel(char str[]);

int main(){
    char str[100];
    printf("Enter your string :\n");
    gets(str);
    printf("Number of Vowels in the string : %d",countVowel(str));
}

int countVowel(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    return count;
}