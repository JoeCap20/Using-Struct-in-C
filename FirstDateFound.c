/*My name is Joseph Capuiso. The Code I wrote for this assignment was to tell a user to enter two dates and then
    those dates get stored. Then when the user enters the two dates the program checks in the if statements by
    month, day, and year to see which one of the two dates entered comes first on the a calender. The user then
    can enter more dates to try out or enter the correct format of zeros to end the program.*/
#include <stdio.h>
#include <stdlib.h>

/*This is declaring the structure with the dates*/
struct date{
int month;
int day;
int year;
};

/*This is declaring the function for compare date*/
int compare_dates(struct date d1, struct date d2);

int main() {

    /*This declares the struct dates for all of the d1 and d2*/
    struct date d1;
    struct date d2;
    int i;

        /*This gets the input form the user and see if they entered a real date to run the rest of the code
            or if they entered them as 0's to break the loop and end the code*/
        for (i = 0; i < 10; i++){

        printf("Enter first date (mm/dd/yy): ");
        scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
        if (d1.month == 0 && d1.day == 0 && d1.year == 0){
            break;
    }

        printf("Enter second date (mm/dd/yy): ");
        scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

            /*This is declaring the product to store the result from the comparing dates function*/
            int product;
            product = compare_dates(d1, d2);

            /*This is the if else that prints the output for the results from the compare dates function*/
            if (product == -1){
                printf("The first date comes first on the calender\n");
            }

            else if (product == 1){
                printf("The second date comes first on the calender\n");
            }

            else {
                printf("The first and second date are the same\n");
            }
        }
      return 0;
}

/*This initialized the function and uses the if else statements to decide which date the user entered does come first*/
int compare_dates(struct date d1, struct date d2){

    if (d1.year < d2.year){
        return -1;
    }
    else if (d1.year > d2.year){
        return 1;
    }
    else{
        if(d1.month < d2.month){
            return -1;
        }
        else if (d1.month > d2.month){
            return 1;
        }
        else {
            if(d1.day < d2.day){
                return -1;
            }
            else if(d1.day > d2.day){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}
