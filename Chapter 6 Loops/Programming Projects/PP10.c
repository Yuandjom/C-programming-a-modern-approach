#include <stdio.h> 

int main (void)
{
    int mm1 , dd1 , yy1 , mm2, dd2 , yy2 ;
    printf("Enter a date : ");
    scanf("%d/%d/%d" , &mm1 , &dd1 , &yy1);
    for(;;){//first loop to prompt comparison 
        printf("Enter a date : ");
        scanf("%d/%d/%d" , &mm2 , &dd2 , &yy2);
        //no need second loop 
        //need to break out of the loop 
        if (mm2 == 0 && dd2 ==0 && yy2==0){
            break;
        }  
        if (yy2 < yy1 || (yy1 == yy2 && mm2 < mm1) || (yy2 == yy1 && mm1 == mm2 && dd2 < dd1) ){
            yy1 = yy2;
            mm1 = mm2;
            dd1 = dd2;
            }
            
     
    }
    printf("%d/%d/%0.2d is the earliest date." , mm1 , dd1 , yy1);
    return 0;
}