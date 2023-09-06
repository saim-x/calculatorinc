#include <stdio.h>
int main(){
    //Building calculator
    int user_choice, user_num_1, user_num_2, answer;
    printf("Press\n1 for addition: \n2 for subtraction: \n3 for multiplication: \n& 4 for division:\n");
    scanf("%i", &user_choice);
    printf("Your choice was: %i", user_choice);
    //if conditions
    if (user_choice == 1){
        //Addition
        printf("\nEnter your first number: ");
        scanf("%i", &user_num_1);
        printf("Enter your second number: ");
        scanf("%i", &user_num_2);
        answer = user_num_1 + user_num_2;
        printf("Your answer is: %i", answer);
    }else if (user_choice == 2){
        //Subtraction
        printf("\nEnter your first number: ");
        scanf("%i", &user_num_1);
        printf("\nEnter your second number: ");
        scanf("%i", &user_num_2);
        answer = user_num_1 - user_num_2;
        printf("Your answer is: %i", answer); 
    } else if (user_choice == 3){
        //Multiplication
        printf("\nEnter your first number: ");
        scanf("%i", &user_num_1);
        printf("\nEnter your second number: ");
        scanf("%i", &user_num_2);
        answer = user_num_1 * user_num_2;
        printf("Your answer is: %i", answer);
    } else if (user_choice == 4){
        //Division
        printf("\nEnter your first number: ");
        scanf("%i", &user_num_1);
        printf("\nEnter your second number: ");
        scanf("%i",&user_num_2);
        if (user_num_2 == 0){
            printf("Can not be divided by zero!");
        } else {
            answer = user_num_1 / user_num_2;
            printf("Your answer is: %i", answer);
        }
    } else {
        printf("\nError occured!");
    }
}