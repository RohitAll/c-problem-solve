// 1. दो Numbers का Sum निकालो
// Solution
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);

    return 0;
}


// 2. Rectangle का Area निकालो
// Solution
#include <stdio.h>

int main() {
    float length, width;

    scanf("%f %f", &length, &width);

    printf("Area = %.2f", length * width);

    return 0;
}


// 3. Number Even है या Odd
// Solution
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}


// 4. सबसे बड़ा Number
// Solution
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d", a);
    else
        printf("%d", b);

    return 0;
}

// 5. Positive, Negative या Zero
// Solution
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}

// 6. 1 से 10 तक Print करो
// Solution
#include <stdio.h>

int main() {

    for(int i=1;i<=10;i++)
        printf("%d\n",i);

    return 0;
}

// 7. 10 से 1 तक Print करो
// Solution
#include <stdio.h>

int main() {

    for(int i=10;i>=1;i--)
        printf("%d\n",i);

    return 0;
}

// 8. 1 से N तक Sum
// Solution
#include <stdio.h>

int main() {

    int n,sum=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        sum+=i;

    printf("%d",sum);

    return 0;
}

// 9. Table Print करो
// Solution
#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);

    return 0;
}

// 10. Factorial
// Solution
#include <stdio.h>

int main() {

    int n;
    long long fact=1;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        fact*=i;

    printf("%lld",fact);

    return 0;
}

// 11. Function से Sum
// Solution
#include <stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;

    scanf("%d%d",&x,&y);

    printf("%d",sum(x,y));

    return 0;
}

// 12. Function से Square
// Solution
#include <stdio.h>

int square(int n)
{
    return n*n;
}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d",square(n));

    return 0;
}

// 13. Function से Maximum
// Solution
#include <stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    printf("%d",max(a,b));

    return 0;
}

// 14. Leap Year
// Solution
#include <stdio.h>

int main()
{
    int year;

    scanf("%d",&year);

    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}

// 15. Grade निकालो
// Solution
#include <stdio.h>

int main()
{
    int marks;

    scanf("%d",&marks);

    if(marks>=90)
        printf("A");
    else if(marks>=80)
        printf("B");
    else if(marks>=70)
        printf("C");
    else
        printf("Fail");

    return 0;
}


// 16. Calculator (switch)
// Solution
#include <stdio.h>

int main()
{
    int a,b;
    char op;

    scanf("%d %c %d",&a,&op,&b);

    switch(op)
    {
        case '+':
            printf("%d",a+b);
            break;

        case '-':
            printf("%d",a-b);
            break;

        case '*':
            printf("%d",a*b);
            break;

        case '/':
            printf("%d",a/b);
            break;
    }

    return 0;
}

// 17. Count 1 से N तक (while)
// Solution
#include <stdio.h>

int main()
{
    int n,i=1;

    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }

    return 0;
}

// 18. Reverse Count (do-while)
// Solution
#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    do
    {
        printf("%d\n",n);
        n--;
    }
    while(n>=1);

    return 0;
}

// 19. Simple Interest
// Solution
#include <stdio.h>

int main()
{
    float p,r,t,si;

    scanf("%f%f%f",&p,&r,&t);

    si=(p*r*t)/100;

    printf("%.2f",si);

    return 0;
}

// 20. Celsius से Fahrenheit
// Solution
#include <stdio.h>

int main()
{
    float c,f;

    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("%.2f",f);

    return 0;
}
