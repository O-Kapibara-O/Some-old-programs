#include <stdio.h>
#include <math.h>

int main ()
{   
    int whichProgram;
    
    for(;;)
    {   
        printf("\n****List of programs*****\n\n");
        printf("1.Check wheather a number is even or odd.\n");
        printf("2.Check whether a character is a vowel or consonant.\n");
        printf("3.Find the largest number among three numbers.\n");
        printf("4.Find all roots of a quadratic equation.\n");
        printf("5.Check Whether the Entered Year is Leap Year or not.\n");
        printf("6.Check whether a number is positive or negative or zero.\n");
        printf("7.Check whether a character is an alphabet or not.\n");
        printf("8.Find the sum of natural numbers.\n");
        printf("9.Find factorial of a number .\n");
        printf("10.Generate multiplication table .\n");
        printf("11.Display Fibonacci series .\n");
        printf("12.Find HCF (Highest Common Factor) of two numbers.\n");
        printf("13.Find LCM (Lowest Common Multiple) of two numbers.\n");
        printf("14.Count numbers of digits of an integer.\n");
        printf("15.Reverse a number.\n");
        printf("16.Calculate the power of a number.\n");
        printf("17.Check whether a number is a palindrome or not. \n");
        printf("18.Check whether an integer is prime or Not. \n");
        printf("19.Display prime numbers between two intervals.\n");
        printf("20.Check Armstrong number.\n");
        printf("21.Display Armstrong numbers between two intervals.\n");
        printf("22.Display factors of a number. \n");
        printf("23.Draw a pyramdes \n");
        printf("24.A simple calculator\n");

        printf("25.Exit");
        printf("\n****Ends of List of programs*****\n\n");
        printf("Choose the program :");
        scanf("%d",&whichProgram);

        switch(whichProgram)
        {
            case 1:
            {
                printf("---------------------------------------------------------------------------------\n");
                int num;
                    printf("Enter an integer :");
                    scanf("%d",&num);
                    if(num%2 == 0)
                    {
                        printf("%d is even \n",num);
                    }
                    else
                    {
                        printf("%d is odd \n",num);
                    }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 2:
            {
                printf("---------------------------------------------------------------------------------\n");
                char c;
                int lowercase_vowel, uppercase_vowel;
                printf("Enter letter from alphabet: ");
                scanf(" %c",&c);
                lowercase_vowel = ( c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
                uppercase_vowel = ( c =='A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

                if ( lowercase_vowel || uppercase_vowel)
                {
                    printf("%c is vowel\n",c);
                }
                else
                {
                    printf("%c is consonant \n",c);
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 3:
            {
                printf("---------------------------------------------------------------------------------\n");
                double number1, number2, number3;

                printf("Enter three diffrent numbers: ");
                scanf("%lf %lf %lf", &number1, &number2, &number3);
                if( number1 >= number2 && number1 >= number3)
                {
                    printf("%.2lf is the largest number \n", number1);
                }
                if( number2 >= number1 && number2 >= number3)
                {
                    printf("%.2lf is the largest number \n", number2);
                }
                if( number3 >= number1 && number3 >= number2)
                {
                    printf("%.2lf is the largest number \n", number3);
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 4:
            {
                printf("---------------------------------------------------------------------------------\n");
                double a, b, c, discriminant, root1, root2, realPart, imagPart;
                printf("Enter coefficients a, b and c: ");
                scanf("%lf %lf %lf",&a, &b, &c);

                discriminant = b*b - 4*a*c;
                if( discriminant >0)
                {
                    root1 = (-b - sqrt(discriminant)) / (2*a);
                    root2 = (-b + sqrt(discriminant)) / (2*a);

                    printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
                }
                else if( discriminant == 0)
                {
                    root1 = root2 = -b /(2*a);
                    printf("root1 = root2 = %.2lf\n",root1);
                }
                else
                {
                    printf("There are no solutions to this equation for real numbers \n");
                    printf("For the imaginary numbers the solution is: \n");
                    realPart = -b / (2*a);
                    imagPart = sqrt( -discriminant) / (2 * a);
                    printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 5:
            {
                printf("---------------------------------------------------------------------------------\n");
                int year;
                printf("Enter the year to check :");
                scanf("%d",&year);
                if(year % 400 ==0 )
                {
                    printf("%d is a leap year \n", year);
                }
                else if (year%100==0)
                {
                    printf("%d is not a leap year \n", year);
                }
                else if ( year % 4 ==0)
                {
                    printf("%d is a leap year \n", year);
                }
                else
                {
                    printf("%d is not a leap year \n", year);
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 6:
            {
                printf("---------------------------------------------------------------------------------\n");
                double number;
                printf("Enter a number : ");
                scanf("%lf",&number);
                if(number > 0)
                {
                    printf("%.2lf is positive \n",number);
                }
                else if (number == 0)
                {
                    printf("%.2lf is zero \n",number);
                }
                else
                {
                    printf("%.2lf is negative \n",number);
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 7:
            {
                printf("---------------------------------------------------------------------------------\n");
                char character;
                printf("Entera character :");
                scanf(" %c",&character);
                if( (character >=65 && character <= 90) || (character >=97 && character <= 122) )
                {
                    printf("%c is alphabet \n",character);
                }
                else
                {
                   printf("%c is not alphabet \n",character);
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 8:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, sum =0;
                printf("Enter a positive integer:");
                scanf("%d",&number);

                if( number > 0 )
                {
                    for ( int i =1; i<=number; i++)
                    {
                        sum += i;
                    }
                }
                else
                {
                    printf("It is not positive integer ! /n");
                }
                printf("Sum = %d \n",sum);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 9:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number;
                unsigned long long factorial =1;
                printf("Enter a integer:");
                scanf("%d",&number);

                if( number > 0 )
                {
                    for ( int i =1; i<=number; i++)
                    {
                        factorial *= i;
                    }
                }
                else
                {
                    printf("Error! Factorial of a negative number doesn't exist. \n");
                }
                printf("Factorial = %lld \n",factorial);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 10:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number;
                printf("Enter a integer:");
                scanf("%d",&number);
                for(int i = 1; i <= 10;i++)
                {
                    printf("%d * %d = %d \n", number, i, number * i);
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 11:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, firstTerm = 0, secondTerm =1, nextTerm;
                printf("Enter the number of terms: ");
                scanf("%d",&number);
                for(int i = 1; i <= number;i++)
                {
                    printf("%d.Element = %d \n", i, firstTerm);
                    nextTerm = firstTerm + secondTerm;
                    firstTerm = secondTerm;
                    secondTerm = nextTerm;
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 12:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number1, number2;
                int hcf;
                printf("Enter two integers: ");
                scanf("%d %d",&number1, &number2);

                // # METHOD 1
                /*
                for( int i = 1; i <=number1 && i<= number2; i++)
                {
                    if(number1 % i == 0 && number2 % i == 0)
                    {
                        hcf = i;
                    }
                }
                printf("HCF of %d and %d is: %d \n",number1,number2,hcf);
                */

               // # METHOD 2

               while( number1 != number2)
               {
                   if(number1 > number2)
                   {
                       number1 -= number2;
                   }
                   else
                   {
                       number2 -= number1;
                   }
                   
               }
                printf("HCF = %d \n",number1);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 13:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number1, number2;
                int max;
                printf("Enter two integers: ");
                scanf("%d %d",&number1, &number2);

                max = ( number1 > number2) ? number1 : number2;
                
                for( int i = 1; i <= (number1*number2);i++)
                {
                    if ( max % number1 == 0 && max % number2==0)
                    {
                        printf("The LCM of %d and %d is %d. \n", number1, number2, max);
                        break;
                    }
                    max++;
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 14:
            {
                printf("---------------------------------------------------------------------------------\n");
                long long number1;
                int counter = 0;
                printf("Enter an integers: ");
                scanf("%lld",&number1);
                do
                {
                    number1 = number1 / 10;
                    counter++;
                } while (number1 !=0);
                printf("Number of digits: %d \n", counter);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 15:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, reverse = 0, remainder;
                printf("Enter an integers: ");
                scanf("%d",&number);
                while(number != 0)
                {
                    remainder = number % 10;
                    reverse = reverse *10 + remainder;
                    number = number /10;
                }
                printf("Reversed number = %d\n", reverse);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 16:
            {
                printf("---------------------------------------------------------------------------------\n");
                int base, exponent, temp;
                long long result =1;
                printf("Enter a base number: ");
                scanf("%d", &base);
                printf("Enter an exponent: ");
                scanf("%d", &exponent);
                temp = exponent;
                while(exponent != 0)
                {
                    result = result * base;
                    exponent--;
                }
                printf("Answer: %d^%d = %lld \n", base, temp, result);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 17:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, reverse = 0, remainder, orginalNumber;
                printf("Enter an integers: ");
                scanf("%d",&number);
                orginalNumber = number;
                while(number != 0)
                {
                    remainder = number % 10;
                    reverse = reverse *10 + remainder;
                    number = number /10;
                }
                if(reverse == orginalNumber)
                {
                    printf("%d is a palindrome.\n", orginalNumber);
                }
                else
                {
                    printf("%d is not a palindrome.\n", orginalNumber);
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 18:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number;
                int flag = 0;
                printf("Enter an positive integers: ");
                scanf("%d",&number);

                for(int i = 2; i <= number /2;i++)
                {
                    if( number % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(number == 1)
                {
                    printf("1 is neither prime nor composite.\n");
                }
                else
                {
                    if(flag == 0)
                    {
                        printf("%d is a prime number.\n", number);
                    }
                    else
                    {
                       printf("%d is  not a prime number. \n", number);
                    }
                    
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 19:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number1, number2, max, min, flag = 0;
                printf("Enter two numbers(intervals): ");
                scanf("%d %d", &number1, &number2);
                if( number1 > number2)
                {
                    max = number1;
                    min = number2;
                }
                else
                {
                    max = number2;
                    min = number1;
                }
                printf("Min = %d, Max = %d \n",min,max);
                
                for(int i = min; i <= max; i++)
                {
                    flag = 0;
                    if(i == 1 || i ==0)
                    {
                        i++;
                        continue;
                    }
                    for(int j = 2; j <= i /2; j++)
                    {
                        if( i % j ==0)
                        {
                            flag = 1;
                            break;
                        }
                    }

                    if ( flag == 0 )
                    {
                        printf("%d ,",i);
                    }
                }
                printf("\n");
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 20:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, counter = 0, copyOfTheNumber, copyOfTheNumber2, sum = 0, remainder, exponent =1;
                printf("Enter a number ( preferred three-digit integer): ");
                scanf("%d",&number);
                copyOfTheNumber = number;
                copyOfTheNumber2 = number;
                while(copyOfTheNumber != 0)
                {
                    copyOfTheNumber = copyOfTheNumber/10;
                    counter++;
                }
                for(int i =1; i <=counter;i++)
                {
                    exponent =1;
                    remainder = copyOfTheNumber2 % 10;
                    copyOfTheNumber2 = copyOfTheNumber2/10;
                    for(int j = 1; j<= counter;j++)
                    {
                        exponent = exponent*remainder;
                    }
                    sum = sum + exponent;
                }
                if (sum == number)
                    printf("%d is an Armstrong number.\n", number);
                else
                    printf("%d is not an Armstrong number.\n", number);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 21:
            {
                printf("---------------------------------------------------------------------------------\n");
                long long int number1, number2, max, min, copyOfTheMin, copyOfTheMin2, power;
                long long int remainder, counter, result = 0, sum = 0;
                printf("Enter two numbers(intervals): ");
                scanf("%lld %lld", &number1, &number2);
                if( number1 > number2)
                {
                    max = number1;
                    min = number2;
                }
                else
                {
                    max = number2;
                    min = number1;
                }
                while(min <=max)
                {   
                    copyOfTheMin = min;
                    copyOfTheMin2 = min;
                    counter = 0, sum = 0;   //----------------------------------------------------------------
                    while(copyOfTheMin != 0)
                    {
                        copyOfTheMin = copyOfTheMin/10;
                        counter++;
                    }
                    for(int i = 1; i <= counter; i++)
                    {
                        remainder = copyOfTheMin2 % 10;
                        copyOfTheMin2 = copyOfTheMin2 / 10;
                        power =1;
                        for(int j = 1; j<= counter;j++)
                        {
                            power = power*remainder;
                        }
                        sum = sum + power;
                    }
                    if ( sum == min)
                    {
                        printf("Number %lld-digit which is the Armstrong Number : %lld \n",counter,min);
                    }
                    min++;
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 22:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number;
                printf("Enter an positive integers: ");
                scanf("%d",&number);
                printf("Factors of %d are: ",number);
                for(int i = 1; i<= number /2;i++)
                {
                    if(number % i == 0)
                    {
                        printf("%d ", i);
                    }
                }
                printf("%d \n", number);


                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 23:
            {
                printf("---------------------------------------------------------------------------------\n");
                int height, k = 0,space;
                printf("Enter a height of pyramid or triangle ( integer): ");
                scanf("%d", &height);
                for(int i = 1; i <= height;i++ , k = 0)
                {
                    for( space = 1; space <= height-i; ++space)
                    {
                        printf("  ");
                    }
                    while( k != 2 *i -1)
                    {
                        printf("* ");
                        ++k;
                    }
                     printf("\n");
                }
                    
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 24:
            {
                printf("---------------------------------------------------------------------------------\n");
                char operator;
                double first, second;
                int flag = 0;
                for(;;)
                {
                    if(flag == 1)
                    {
                        flag == 0;
                        break;
                    }
                    printf("\nEnter an operator (+, -, *, /  || Exit = others): ");
                    scanf(" %c", &operator);
                    printf("Enter two operands: ");
                    scanf("%lf %lf", &first, &second);
                    switch (operator)
                    {
                    case '+':
                        printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
                        break;
                    case '-':
                        printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
                        break;
                    case '*':
                        printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
                        break;
                    case '/':
                        if(second == 0)
                        {
                            printf("You can't devide by 0 !!!");
                        }
                        else
                        {
                            printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
                        }
                        break;
                    default:
                        flag =1;
                        break;
                    }
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 25:
                return 0;
                
        }

       
    }
}