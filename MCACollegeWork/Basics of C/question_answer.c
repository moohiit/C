
#include<stdio.h>
int main()

{
    char c;
    int marks=0;
    printf("\t\t**Welcome to the Question Answer Round**\n\n");
    printf("Ques 1: Where is the Tajmahal?\n");
    printf("A. Delhi \nB. Agra\nC. Banglore\nD. Lucknow\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    if(c=='a'){
        printf("Incorrect.");
    }else if(c=='b'){
        printf("Correct.");
        marks+=1;
    }else if(c=='c'){
        printf("Incorrect.");
    }else if(c=='d'){
        printf("Incorrect.");
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");

    printf("Ques 2: Where is the Qutub Minar?\n");
    printf("A. Banglore \nB. Agra\nC. Delhi\nD. Lucknow\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    scanf("%c",&c);

    if(c=='a'){
        printf("Incorrect.");
    }else if(c=='b'){
        printf("Incorrect.");
    }else if(c=='c'){
        printf("Correct.");
        marks+=1;
    }else if(c=='d'){
        printf("Incorrect.");
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");
    
    printf("Ques 3: Who is the President of India?\n");
    printf("A. Dropdi Murmu \nB. Ramnath Kobind\nC. Pratibha Devi singh Patil\nD. APJ Abdul Kalam\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    scanf("%c",&c);

    if(c=='a'){
        printf("Correct.");
        marks+=1;
    }else if(c=='b'){
        printf("Incorrect.");
    }else if(c=='c'){
        printf("Incorrect.");
    }else if(c=='d'){
        printf("Incorrect.");
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");
    
    printf("Ques 4: Which of the following is called as brain of computer?\n");
    printf("A. ALU \nB. CPU\nC. MU\nD. CU\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    scanf("%c",&c);

    if(c=='a'){
        printf("Incorrect.");
    }else if(c=='b'){
        printf("Correct.");
        marks+=1;
    }else if(c=='c'){
        printf("Incorrect.");
    }else if(c=='d'){
        printf("Incorrect.");
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");
    
    printf("Ques 5: Where is the Statue of unity is situated?\n");
    printf("A. Banglore \nB. Haryana\nC. Gujrat\nD. Punjab\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    scanf("%c",&c);

    if(c=='a'){
        printf("Incorrect.");
    }else if(c=='b'){
        printf("Incorrect.");
    }else if(c=='c'){
        printf("Correct.");
        marks+=1;
    }else if(c=='d'){
        printf("Incorrect.");
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");
    
    printf("Ques 6: Which of the following is the largest country of the world?\n");
    printf("A. America \nB. Australia\nC. India\nD. Russia\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    scanf("%c",&c);

    if(c=='a'){
        printf("Incorrect.");
    }else if(c=='b'){
        printf("Incorrect.");
    }else if(c=='c'){
        printf("Incorrect.");
    }else if(c=='d'){
        printf("Correct.");
        marks+=1;
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");

    printf("Ques 7: Which of the following state of India is largest on the basis of Area?\n");
    printf("A. Uttar Pradeh\nB. Haryana\nC. Rajasthan\nD. Punjab\n");

    printf("Enter your Choice : ");
    scanf("%c",&c);
    scanf("%c",&c);

    if(c=='a'){
        printf("Incorrect.");
    }else if(c=='b'){
        printf("Incorrect.");
    }else if(c=='c'){
        printf("Correct.");
        marks+=1;
    }else if(c=='d'){
        printf("Incorrect.");
    }else{
        printf("Invalid Choice.");
    }
    printf("\n\n");

    

    printf("You got %d out of 7 marks.",marks);
    printf("\n\n\t**********\n");

    return 0;
}