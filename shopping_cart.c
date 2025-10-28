//to create a basic shopping cart program where the user can select items and find the total cost
#include<stdio.h>
#include<string.h>
int main() {
char item[50]="";
int quantity=0;
float price=0.0f;
float total=0.0f;
char currency='$'; // use single quotes for single characters as anything inside double quotes is treated like a string
printf("What item would you like to purchase? ");
fgets(item,sizeof(item),stdin);
// fgets will read the newline character when u press enter, as it reads till we press enter 
// so we need to remove it
item[strlen(item)-1]='\0'; // replacing newline character with null character
printf("What is the price of the item? ");
scanf("%f",&price);
printf("How many would you like to buy? ");
scanf("%d",&quantity);
total=price*quantity;
printf("You have selected %d of %s at a price of %.2f%c each.\n",quantity,item,price,currency);
printf("The total cost is: %.2f%c\n",total,currency);

return 0;

}

