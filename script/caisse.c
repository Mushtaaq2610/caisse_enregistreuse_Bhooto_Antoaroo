#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>
int main()

{  
    float amt,total,num,generated,change,amt_ret;

    // Generate a random number
    srand(time(0)); 
    generated = rand() % 10000; 
    num = generated;


    printf("Change=%f\n",num); 
    printf("Enter an amount "); 
    scanf("%f", &amt); 
    

    do{
    
        if(amt<num)
        {
          printf("The amount you have have enter is too low, please put an amount greater or equal to %f\n",num);
          scanf("%f", &amt);
        }

    }while(amt<num);

    amt_ret = amt-num;
    printf("Amount to return = %f\n",amt_ret);
  
    return 0; 
} 