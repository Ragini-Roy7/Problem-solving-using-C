#include <stdio.h>
int main(){
    
float temp_in_deg_celcius=0.0;
printf("enter temp in deg celcius\n");
scanf("%f", &temp_in_deg_celcius);

//formula-> (temp_in_deg_celcius*9)/5+32;
float temp_in_fahrenheit=0.0;
temp_in_fahrenheit= temp_in_deg_celcius*9.0 /5.0 +32.0;
printf("temp in kelvin %0.2f\n", temp_in_fahrenheit);


return 0;

}
