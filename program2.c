// C program to find maximum between two numbers
 #include <stdio.h>

int main()
{
    int n1, n2;
     /* Input two numbers from user */
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    /* Compare n1 with n2 */
    if(n1 > n2)
    {
     printf("%d is maximum", n1);        
    }
    else
    {
        printf("%d is maximum", n2);
    }
     return 0;
}