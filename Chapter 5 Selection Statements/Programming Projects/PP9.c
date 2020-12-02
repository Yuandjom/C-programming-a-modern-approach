#include <stdio.h> 

int main (void)
{
    int mm1 , dd1 , yy1 , mm2, dd2 , yy2;
    printf("Enter first date : ");
    scanf("%d/%d/%d" , &mm1 , &dd1 , &yy1);
    printf("Enter second date : ");
    scanf("%d/%d/%d" , &mm2 , &dd2 , &yy2);
    if (yy1 > yy2){
        printf("%d/%d/%0.2d is earlier than %d/%d/%0.2d" ,mm1 , dd1 , yy1 ,mm2 , dd2 , yy2);
    }
    else if (yy2 > yy1){
        printf("%d/%d/%0.2d is earlier than %d/%d/%0.2d" ,mm2 , dd2 , yy2 ,mm1 , dd1 , yy1);
    } // repeat for else mm1 and mm2 , dd1 and dd2 , end statement with else : both equal 
    else if (mm1 > mm2){
        printf("%d/%d/%0.2d is earlier than %d/%d/%0.2d" ,mm2 , dd2 , yy2 ,mm1 , dd1 , yy1);
    }
    else if (mm2 > mm1){
        printf("%d/%d/%0.2d is earlier than %d/%d/%0.2d" ,mm1 , dd1 , yy1 ,mm2 , dd2 , yy2);
    }
    else if (dd1 > dd2){
        printf("%d/%d/%0.2d is earlier than %d/%d/%0.2d" ,mm2 , dd2 , yy2 ,mm1 , dd1 , yy1);
    }
    else if (dd2 > dd1){
        printf("%d/%d/%0.2d is earlier than %d/%d/%0.2d" ,mm1 , dd1 , yy1 ,mm2 , dd2 , yy2);
    }
    else
    {
        printf("Both are the same dates. :D");
    }
    
    return 0 ;
}