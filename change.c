#include <stdio.h>

int main(void){
    double hundred = 10000;
    double h = 0;
    double tendollars = 1000;
    double t = 0;
    double dollar = 100;
    double d = 0;
    double quarter = 25;
    double q = 0;
    double dime = 10;
    double di = 0;
    double nickel = 5;
    double n = 0;
    double penny = 1;
    double p = 0;
    double change;
    
    // int Y = 1;
    // int N = 1;
    
    while(1) {
    char retry = 'Y';
    printf("Put in the amount of change you want (WHOLE NUMBER): ");
    scanf("%lf", &change);
    while (change >= hundred){ 
        h++;
        change = change - 10000;
    }
    while (change >= tendollars){ 
        t++;
        change = change - 1000;
    }
    while (change >= dollar){ 
        d++;
        change = change - 100;
    }
    while (change >= quarter){
        q++;
        change = change - 25;
    }
    while (change >= dime){
        di++;
        change = change - 10;
    }
    while (change >= nickel){
        n++;
        change = change - 5;
    }
    while (change >= penny){
        p++;
        change = change - 1;
    }

    printf("%.0lf hundred dollar bills\n %.0lf ten dollar bills\n %.0lf dollars\n %.0lf quarters\n %.0lf dimes\n %.0lf nickels\n %.0lf pennies\n ", h, t, d, q, di, n, p); 
    printf("\nWould you like to Try Again?(Y/N) ");
    scanf(" %c", &retry);
    //printf("%c",retry);
    
    if(retry == 'Y'){
        continue;
    }
    else if(retry == 'N'){
        break;
    }
}
  

    return 0;
}