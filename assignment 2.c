#include <stdio.h>
#include <stdlib.h>


int main ( void )
{
    float a , b, c ;

    printf("Please enter the temperature: \n");
    scanf("%f", &a);
    printf("Please enter the ending point: \n");
    scanf("%f", &b);
    printf("Please enter the increment: \n");
    scanf("%f", &c);
    while ( a <= b )
    {
        //if ((a>98.6)&&(b<98.6))
          //  {
            //    printf("%f degrees F= %f degrees C\n " ,
              //      98.6 , ( 98.6-32.0)*5.0/9.0 ) ;
            //};
        printf("%f degrees F = %f  degrees C\n " ,
                    a , (a-32.0 )*5.0/9.0 );

        //b = a ;
        a = a + c;
    }
    return 0 ;

};
