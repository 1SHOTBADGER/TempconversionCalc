#include <stdio.h>
#include <ctype.h>
//im gonna make a temerature conversion calculato
int main(){

char unit;
float temp;

printf("is the temperature in (F) or (C)? ");
scanf("%c", &unit);
unit = toupper(unit);

if(unit == 'C'){
printf("\nenter the tempurature in celsius ");
scanf("%f", &temp);
temp = (temp * 9 / 5) + 32;
printf("\n the temp in farenheit is: %.1f", temp);
}

else if(unit == 'F'){
printf("\nenter the tempurature in farenheit ");
scanf("%f", &temp);
temp = ((temp - 32 )* 5) / 9;
printf("\nthe temp in celsius is %f", temp);



}

else{
    printf("\n %c is not a valid choice", unit);

}




















    return 0;
}