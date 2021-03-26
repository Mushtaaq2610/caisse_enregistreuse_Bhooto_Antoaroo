// returns number of units and subtracts unit_size * result
// from val

#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>

int units(int* val, int unit_size)
{
    int num = *val / unit_size;
    *val %= unit_size;

    return num;
}

int main()
{
    

    float amount,amt_money,tot_amt;
    
    srand(time(0)); 
    amount = rand()% 100000;
    amount = amount/10;

    printf("The amount that you need to pay : %.2f\n",amount);
    
    
    printf("Enter the amount of money you would give : ");
    scanf("%f",&amt_money);
    
    while(amount > amt_money)
    {
        
      printf("Insufficient Funds!");
      printf("Enter the amount of money you would give : ");
      scanf("%f",&amt_money);  
        
    }
    
    tot_amt = amt_money - amount;
    
    printf("The amount to return : %.2f\n",tot_amt);

    int x = (int)(tot_amt * 100.0 + 0.5);

    printf("No. of RS 2000 notes: %d\n", units(&x, 2000 * 100) );
    printf("No. of RS 1000 notes: %d\n", units(&x, 1000 * 100) );
    printf("No. of RS 500 notes: %d\n", units(&x, 500 * 100) );
    printf("No. of RS 200 notes: %d\n", units(&x, 200 * 100) );
    printf("No. of RS 100 notes: %d\n", units(&x, 100 * 100) );
    printf("No. of RS 50 notes: %d\n", units(&x, 50 * 100) );
    printf("No. of RS 25 notes: %d\n", units(&x, 25 * 100) );
    printf("No. of RS 20 coin: %d\n", units(&x, 20 * 100) );
    printf("No. of RS 10 coin: %d\n", units(&x, 10 * 100) );
    printf("No. of RS 5 coin: %d\n", units(&x, 10 * 100) );
    printf("No. of RS 1 coin: %d\n", units(&x, 1 * 100) );
    printf("No. of 50 cents: %d\n", units(&x, 50) );
    printf("No. of 20 cents: %d\n", units(&x, 20) );
    printf("No. of 5 cent: %d\n", units(&x, 5) );

    return 0;
}
