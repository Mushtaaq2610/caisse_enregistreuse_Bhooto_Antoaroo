#include <stdio.h>
#include <stdlib.h>
#include<time.h>

 int main() {

  int c, ex,y;
  float n, amt,change,num, mont;

  int n2000=10, n1000=10, n500=10, n200=10, n100=10, n50=10, n25=10, n20=10, n10=10, n5=10, n1=10,z;
  float x50=10,x20=10,x5=10;

  int  r2000=0, r1000=0, r500=0, r200=0,  r100=0, r50=0, r20=0, r25=0, r10=0, r5=0 , r1=0, x=0; 
  float c50=0,c20=0,c5=0;  
  char ans;
  

   srand(time(0));

  do 
  {
    srand(time(0)); 
    n = rand()% 1000000;
    n = n/100;


   printf("Bill to be paid: Rs %.2f\n", n);
    
   printf("Enter your money please: Rs ");
    scanf("%f", &mont);

    if(mont>n){
      change = mont;

      ex = mont - n;
      change = mont -n;
    printf("Your bill is: Rs %.2f\n",n);
    printf( "You entered: Rs %.2f\n", mont) ;
    num = change - ex;
    if (num == 0){
      printf("Your change is: Rs %d\n", ex);
    }
    else printf("Your change is: Rs %.2f\n", change);
    
   

  }
  else if(mont<n){
    do{
    
    printf("Your bill is: Rs %.2f\n",n);
    printf( "You entered: Rs %.2f\n", mont);
    printf("Please re-enter your money Rs %.2f\n", n);
    scanf("%f",&mont);
    
    ///printf("The total amount paid is: Rs %.2f\n", change);
  }while(mont<n);
    ex = mont - n ;
    change = mont - n;
    num = change - ex;
    if (num == 0){
      printf("Your change is: Rs %d\n", ex);
    }
    else printf("Your change is: Rs %.2f\n", change);
    

  }
  else{
    printf("Thanks");

  }
  
   
  

 while(ex >= 2000) 
  { 
    r2000 = ex / 2000 ; 
    ex = ex % 2000;
    printf("Total Number Of 2000 Rupees Notes used : %d", r2000) ;
    break ; 
   
  }
   while(ex >= 1000) 
  { 
    r1000 = ex / 1000 ; 
    ex = ex % 1000 ;
    
    printf("\nTotal Number Of 1000 Rupees Notes used : %d", r1000) ;
    break ; 
  }
 while(ex >= 500) 
  { 
    r500 = ex / 500 ; 
    ex = ex % 500;
    printf("\nTotal Number Of 500 Rupees Notes used : %d", r500) ;
    break ; 
  } 
  while(ex >= 200) 
  { 
    r200 = ex / 200 ; 
    ex = ex % 200;
   printf("\nTotal Number Of 200 Rupees Notes used : %d", r200) ;
    break ; 
   
  }
  while(ex >= 100) 
  { 
    r100 = ex / 100 ; 
    ex = ex % 100;
    printf("\nTotal Number Of 100 Rupees Notes used : %d", r100) ;
    break ; 
  } 
  while(ex >= 50) 
  { 
    r50 = ex / 50 ;
    ex = ex % 50; 
    printf("\nTotal Number Of 50 Rupees Notes used : %d", r50) ; 
  break ; 
  }  
  while(ex >= 25) 
  { 
    r25 = ex / 25 ;
    ex = ex %25; 
    printf("\nTotal Number Of 25 Rupees Notes used : %d", r25) ; 
  break ; 
  }  
  while(ex >= 20) 
  { 
    r20 = ex / 20 ; 
    ex = ex % 20;
    printf("\nTotal Number Of 20 Rupees coins used : %d", r20) ; 
    break ; 
  }  
  while(ex >= 10) 
  { 
    r10 = ex / 10 ; 
    ex = ex % 10;
    printf("\nTotal Number Of 10 Rupees coins used : %d", r10) ; 
    break ; 
  } 
  while(ex >= 5) 
  { 
    r5 = ex / 5 ; 
    ex = ex % 5;
    printf("\nTotal Number Of 5 Rupees Coins used : %d", r5) ; 
    break ; 
  } 



  while(ex >= 1) 
  { 

    r1 = ex / 1 ; 
    ex = ex % 1;
    
    printf("\nTotal Number Of 1 Rupees  Coins used : %d", r1) ; 
    break ; 
  }

  num = num * 100;
  

  while(num >= 50) 
  { 
    c50  = (int)num / 50 ; 
    num = (int)num % 50 ;
    printf("\nTotal Number Of 50 cent Coins used : %.0f", c50) ; 
    break ; 
  }


  while(num >= 20) 
  { 
    c20  = (int)num / 20 ; 
    num = (int)num % 20 ;
    printf("\nTotal Number Of 20 cent Coins used : %.0f", c20) ; 
    break ; 
  }

  while(num >= 5) 
  { 
    c5  = (int)num / 5 ; 
    num = (int)num % 5 ;
    printf("\nTotal Number Of 5 cent Coins used : %.0f", c5) ; 
    break ; 
  }

  
     printf("\n");
     printf("\n");

      if(r2000>0){         
      x = n2000 - r2000;
      n2000 = x;

        
        switch (x) {
          case 0:
               printf("\n Rs 2000 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n2000);
           break;
           default:
           printf("Number of 2000 notes remaining: %d\n", n2000 );
           
           
  }

}
else {
  printf("Number of 2000 notes remaining: %d\n", n2000 );
}
        
  
    if (r1000>0){
     x = n1000 - r1000;
      n1000 = x;
     
        switch (x) {

           case 0:
               printf("\n Rs 1000 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n1000);
           break;
           default:
           printf("Number of 1000 notes remaining: %d\n", n1000 );
           
           
  }
}
  else{
    printf("Number of 1000 notes remaining: %d\n", n1000 );
  }

     if(r500>0){
      x = n500 - r500;
      n500 = x;
      
        switch (x) {

           case 0:
               printf("\n Rs 500 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n500);
           break;
           default:
           printf("Number of 500 notes remaining: %d\n", n500);
            
           
  }
}
else {printf("Number of 500 notes remaining: %d\n", n500 );}

          if(r200>0){
           x = n200 - r200;
          n200 = x;
          
        switch (x) {

           case 0:
               printf("\n Rs 200 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n200);
           break;
           default:
           printf("Number of 200 notes remaining: %d\n", n200 );
           
  }
}
else{printf("Number of 200 notes remaining: %d\n", n200 );}

            if(r100>0){
           x = n100 - r100;
           
        switch (x) {

           case 0:
               printf("\n Rs 100 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n100);
           break;
           default:
           printf("Number of 100 notes remaining: %d\n", n100 );
           
           
  }
}
else{printf("Number of 100 notes remaining: %d\n", n100 );}


          if (r50>0){
           x = n50 - r50;
          
           
        switch (x) {

           case 0:
               printf("\n Rs 50 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n50);
           break;
           default:
           printf("Number of 50 notes remaining: %d\n", n50 );
          
  }
}
else{printf("Number of 50 notes remaining: %d\n", n50 );}
          
          if(r25>0){
           x = n25 - r25;
           n25 = x;
          
           
        switch (x) {

           case 0:
               printf("\n Rs 25 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of notes: \n");
                 scanf("%d", &n25);
           break;
           default:
           printf("Number of 25 notes remaining: %d\n", n25 );         
         
  }
}
else{printf("Number of 25 notes remaining: %d\n", n25 );}

        if(r20>0){
           x = n20 - r20;
           n20 = x;
           
        switch (x) {

           case 0:
               printf("\n Rs 20 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of coins: \n");
                 scanf("%d", &n20);
           break;
           default:
           printf("Number of 20 coins remaining: %d\n", n20);
           
  }
}
else{printf("Number of 20 coins remaining: %d\n", n20);}


          if(r10>0){
           x = n10 - r10;
            n10 = x;
        switch (x) {

           case 0:
               printf("\n Rs 10 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of coins: \n");
                 scanf("%d", &n10);
           break;
           default:
           printf("Number of 10 coins remaining: %d\n", n10 );
          
           
  }
}
else{printf("Number of 10 coins remaining: %d\n", n10);}


          if(r5>0){
           x = n5 - r5;
           n5 = x;
           
        switch (x) {

           case 0:
               printf("\n Rs 5 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of coins: \n");
                 scanf("%d", &n5);
           break;
           default:
           printf("Number of 5 coins remaining: %d\n", n5 );
          
           
  }
}
else{printf("Number of 5 coins remaining: %d\n", n5);}

          if (r1>0){
           x = n1 - r1;
           n1 = x;
           
        switch (x) {

           case 0:
               printf("\n Rs 1 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of coins: \n");
                 scanf("%d", &n1);
           break;
           default:
           printf("Number of 1 coins remaining: %d\n", n1 );
           if (r1>0){
                n1= x;
            }
           }
         }
         else{printf("Number of 1 coins remaining: %d\n", n1);}


          if(c50>0){
           x = x50 - c50;
           x50 = x;
          
           
        switch (x) {

           case 0:
               printf("\n 50 cents coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of cents: \n");
                 scanf("%f", &x50);
           break;
           default:
           printf("Number of 50 cents coins remaining: %.0f\n", x50 );
          
            
           }
         }
         else{printf("Number of 50 cents coins remaining: %.0f\n", x50 );}

         if(c20>0){
           x = x20- c20;
           x20 = x;           
          
        switch (x) {

           case 0:
               printf("\n 20 cents coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of cents: \n");
                 scanf("%f", &x20);
           break;
           default:
           printf("Number of 20 cents coins remaining: %.0f\n", x20 );
           
          } 
}
else{printf("Number of 20 cents coins remaining: %.0f\n", x20 );}

          if(c5>0){

           x = x5 - c5;
          x5 = x;
          
        switch (x) {

           case 0:
               printf("\n 5 cents coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Enter the number of cents: \n");
                 scanf("%f", &x5);
           break;
           default:
           printf("Number of 5 cents coins remaining: %.0f\n", x5 );
           
            

}
}
else{printf("Number of 5 cents coins remaining: %.0f\n", x5 );}


    printf("\n");
    printf("Do you want to continue [y/n] : ");
    scanf("%s", &ans);
     printf("\n");

}while(ans=='y');
printf("Thanks for your transaction\n");

}

