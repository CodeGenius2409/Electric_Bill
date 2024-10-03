#include<stdio.h>
#include<stdlib.h>
int main(){
    int u=0;
    float ta=0,a=0;
    printf("Enter total units consumed\n");
    scanf("%i",&u);
    if(u>0){
    if(u<=200){
        a=u*0.8;
    }
    else if(u>200&&u<=300){
        a=200*0.8+((u-200)*0.9);
    }
    else if(u>300)
        a=200*0.8+100*0.9+((u-300)*1);
    else{
        printf("\nInvalid input");
        exit(0);
        
    }
}
else{
        printf("\ninvalid input");
        exit(0);}
    if(a>400){
        ta=a+100+(a*0.15);
        printf("Consumed Units = %i\n",u);
        printf("Units Charge = Rs.%i\n",u);
        printf("Meter Charge = Rs.100\n");
        printf("Tax percent = 15%%\n");
        printf("Taxable Amount = Rs.%.2f\n",a*0.15);
        printf("Total electricity bill = Rs. %.2f",ta);
    }
    else if(a<400){
        ta=a+100;
        printf("Consumed Units = %i\n",u);
        printf("Units Charge = Rs.%i\n",u);
        printf("Meter Charge = Rs.100\n");
        printf("Total electricity bill = Rs. %f",ta);
    }
    else
        printf("\nInvalid input");
}