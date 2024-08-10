#include<stdio.h>
#include<math.h>


float plus(float num1 , float num2 , char op )
{
        printf("%f %c   ",num1 , op);
                    scanf("%f",& num2  );

                    if (num2 == 0 )
                    {
                        printf("%f",num1);

                    }
                    else 
                    {
                        num1 = num1 +  num2 ; 
                        printf("%f \n ",num1);
                    }
            return num1 ; 

}


float  minus(float num1 , float num2 , char op )
{
                    printf("%f %c   ",num1 , op);
                    scanf("%f",&num2 );

                    if (num2 == 0 )
                    {
                        printf("%f \n",num1);

                    }
                    else
                    
                    {
                        num1 = num1 - num2; 
                        if (num1<0)
                        {
                            printf("%f \n ",num1);
                            
                        }
                        else {
                        printf("%f \n ",num1);
                
                    }
                    }

                    return num1 ; 

}



float  multiply(float num1 , float num2 , char op )
{
    printf("%f %c   ",num1 , op);
                    scanf("%f",&num2 );

                    if (num2 == 0 )
                    {
                        num1 = num2 * 0;
                        printf("%f \n ",num1);

                    }
                    else 
                    {
                        num1 = num1 * num2; 
                        printf("%f \n ",num1);
                    }

                    return num1 ; 

}


float  divide(float num1 , float num2 , char op )
{
    printf("%f %c   ",num1 , op);
                    scanf("%f",&num2  );

                    if (num2  == 0 )
                    {
                        printf("cannot be divided by zero \n ");

                    }
                    else 
                    {
                        num1 = num1 / num2 ; 
                        printf("%f \n ",num1);
                    }

                    return num1 ; 
}


float topow(float num1 , float num2 , char op )
{


            printf("%f %c   ",num1 , op);
            scanf("%f\n",&num2 );


            if (num2 == 0 )
            {
                num1 = num1 * 0 ; 
                printf("%f \n  ",num1);

            }


                    else 
                    {
                        num1 = pow(num1 ,num2); 
                        printf("%f \n ",num1);
                    }

                    return num1 ; 
}



int main ()
{
    int i = 1 ; 
    float  count1;
    printf("Cal :   ");
    scanf("%f",&count1 );
    float  count = 0; 
    while (i == 1 )
    {   
        char operator ;
        printf("operator   :");
        scanf(" %c", &operator);





        if (operator == '+') 
        {


            count1 = plus(count1 , count, operator);
        
            

        }
        else if(operator== '-')
        {
            count1 = minus(count1 , count , operator);
        }
        else if (operator == '*')
        {

            count1 = multiply(count1 , count , operator);

        }
        else if (operator == '/')
        {
            count1 = divide(count1 , count , operator);
        }

        else if (operator == '^')
        {
            count1 = topow(count1 , count , operator);
        }
        else if (operator == '=') 
        {
            count1 = printf("%c %f\n  ",operator, count1 );
            float  count1;
            printf("Cal :   ");
            scanf("%f",&count1 );
            float  count = 0;


        }







}
}