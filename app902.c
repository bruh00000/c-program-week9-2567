#include <string.h>
#include <stdio.h>
void callUserName()
{
    //Declarative string
    char firstName[] = "";
    char lastName[] = "";

    printf("Enter stings of fist name : ");
    scanf("%s", &firstName);

    printf("Enter stings of last name : ");
    scanf("%s", &lastName);

    printf("%s" ,firstName );
    printf("%s" , lastName );

}
