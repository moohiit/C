#include<stdio.h>
#include<string.h>

void salting (char password[]);
void length(char password[]);
void slice(char password[], int n, int m);

int main(){
    char password[100];
    printf("Enter your password : ");
    scanf("%s",password);
    salting(password);
    length(password);
    slice(password,2,5);
}

void slice(char password[],int n,int m){
    char slice[100];
    int j =0;
    for (int i=n;i<=m;i++,j++){
        slice[j]=password[i];

    }
    slice[j] = '\0';
    printf("Sliced password : ");
    puts(slice);
}

void salting(char password[]){
    char salt[100];
    printf("Enter your salt : ");
    scanf("%s",salt);
    char nwpass[100];

    strcpy(nwpass,password);
    strcat(nwpass,salt);
    printf("Salted Password : ");
    puts(nwpass);
}

void length(char password[]){
    int count =0;
    for (int i= 0;password[i]!='\0';i++){
        count++;
    }
    printf("Length of password : %d\n",count);
}