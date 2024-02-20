#include <stdio.h>
#include <stdlib.h>


int main ( void )
{
    float a;

    printf("Please enter the distance in miles: \n");
    scanf("%f", &a);

        //if ((a>98.6)&&(b<98.6))
          //  {
            //    printf("%f degrees F= %f degrees C\n " ,
              //      98.6 , ( 98.6-32.0)*5.0/9.0 ) ;
            //};
        printf("%f miles M = %f  kilometres KM\n " ,
                    a , (a*1.609));

        //b = a ;


    return 0 ;

};
