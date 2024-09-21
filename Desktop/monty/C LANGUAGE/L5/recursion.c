#include <stdio.h>

int factorial(int); // function prototype

int factorial(int n) // function definition
{
    if (n == 1 || n == 0) // base condition
    {
        return 1;
    }

    return factorial(n - 1) * n; // agar n=5 hai toh wo pehle factorial(4)*5 mai break hoga
                                 // uske baad wo factorial(3)*4*5 mai break hoga ar aise karte wo factorial(0)*1*2*3*4*5 mai jayega
                                // ar fir base condition pply hogi
}
int main()
// factorial oa any number is n!= (n-1)!*n

{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    printf("The factorial of %d is %d", a, factorial(a)); // yaha par a nahi jayega uski value jayegi jaise a=5 hai to 5 jayega

    return 0;
}
