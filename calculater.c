 #include<stdio.h>
 #include<math.h>
 int main(){
    int chose;
    float a,b;
    printf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Exit\n");
    scanf("%d",& chose );
    printf("enter two number:");
    scanf("%f %f",& a,&b );
    if(b==0&&chose==4)
       printf(" division is not possible with zero");
    switch (chose)
    {
    case 1: printf("Addition is %f",a+b); 
        break;
    case 2: printf("Subtraction is %f",a-b);
     break;
    case 3: printf("Multiplication is %f",a*b);
     break;
    case 4: printf(" Division is %f",a/b);
     break;
     case 5: printf(" Exit  ");
     break;
    default: printf (" invalid value");
        break;
    }
    printf ("\nThanks for using" );
return 0;
 }
 