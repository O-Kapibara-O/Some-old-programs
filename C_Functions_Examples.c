#include <stdio.h>
int checkPrimeNumbers(int number);
int checkArmstrongNumber(int number);
int sumOfNaturalNumbers(int number);
int factorialOfNumber(int number);
int GCD(int number1, int number2);
void reverseSentence();
int powerOfNumber(int base, int exponent);

long long DecimalToBinaryConverter(int number);
int BinaryToDecimalConverter(long long binaryNumber);
int DecimalToOctalConverter(int decimalNumber);
long long OctalToDecimalConverter(int octalnumber);
void main()
{
    int whichProgram;
    
    for(;;)
    {   
        printf("\n****List of programs*****\n\n");

        printf("1.Display all prime numbers between two Intervals. \n");
        printf("2.Check prime and Armstrong number by making functions. \n");
        printf("3.Check whether a number can be expressed as the sum of two prime numbers. \n");
        printf("4.Find the sum of natural numbers using recursion. \n");
        printf("5.Calculate the factorial of a number using recursion. \n");
        printf("6.Find G.C.D (greatest common divisor) using recursion. \n");
        printf("7.Reverse a sentence using recursion. \n");
        printf("8.Calculate the power of a number using recursion. \n");
        printf("9.Convert a binary number to decimal and vice-versa. \n");
        printf("10.Convert an octal Number to decimal and vice-versa. \n");
        printf("11.Convert a binary number to octal and vice-versa. \n");
        printf("\n****Ends of List of programs*****\n\n");

        printf("Choose the program :");

        scanf("%d",&whichProgram);

        switch(whichProgram)
        {
            case 1:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number1, number2, max, min;
                printf("Enter two positive integers: ");
                scanf("%d %d", &number1, &number2);
                printf("Prime numbers between %d and %d are: ", number1, number2);
                if(number1 > number2)
                {
                    max = number1;
                    min = number2;
                }
                else
                {
                    max = number2;
                    min = number1;
                }
                for( int i =  min; min <= max;min++)
                {
                    if(checkPrimeNumbers(min) == 1)
                    {   
                        printf("%d ", min);
                    }
                }
                printf("\n");
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 2:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number;
                printf("Enter a positive number : ");
                scanf("%d",&number);

                if(checkPrimeNumbers(number) == 1)
                {
                    printf("%d is a prime number.\n", number);
                }
                else
                {
                    printf("%d is not a prime number.\n", number);
                }
                if(checkArmstrongNumber(number) == 1)
                {
                    printf("%d is an Armstrong number.\n", number);
                }
                else
                {
                    printf("%d is not an Armstrong number.\n", number);
                }

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 3:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, flag = 0;
                printf("Enter a positive number : ");
                scanf("%d",&number);
                
                for(int i = 2; i<=number /2; i++)
                {
                    if(checkPrimeNumbers(i) == 1)
                    {
                        if(checkPrimeNumbers(number-i) == 1)
                        {
                            printf("%d = %d + %d\n", number, i, number - i);
                            flag =1;
                        }
                    }
                }
                if(flag == 0)
                {
                    printf("%d cannot be expressed as the sum of two prime numbers.\n", number);
                }

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 4:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, sum;
                printf("Enter a positive number : ");
                scanf("%d",&number);
                sum = sumOfNaturalNumbers(number);
                printf("Sum of natural numbers %d is : %d \n",number, sum);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 5:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, sum;
                printf("Enter a positive number : ");
                scanf("%d",&number);
                printf("Factorial of numbers %d is : %d \n",number, factorialOfNumber(number));

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 6:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number1, number2;
                printf("Enter two positive integers : ");
                scanf("%d %d",&number1, &number2);
                printf("Greatest Common Divisor of %d and %d is %d. \n", number1, number2, GCD(number1, number2));

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 7:
            {
                printf("---------------------------------------------------------------------------------\n");
                
                printf("Enter a sentence: ");
                
                reverseSentence();     // here is something wrong

                printf("\n");
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 8:
            {
                printf("---------------------------------------------------------------------------------\n");
                int base, exponent;
                printf("Enter the base and exponent of the number :");
                scanf("%d%d", &base, &exponent);

                printf("%d^%d = %d\n", base, exponent, powerOfNumber(base,exponent));
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 9:
            {
                printf("---------------------------------------------------------------------------------\n");
                int number, choice;
                long long binaryNumber;
                printf("1.Program to convert decimal to binary. \n");
                printf("2.Program to convert binary to decimal. \n");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                    {
                        printf("Enter a decimal number :");
                        scanf("%d",&number);
                        printf("%d in decimal = %lld in binary\n", number, DecimalToBinaryConverter(number));
                        break;
                    }
                    case 2:
                    {
                        printf("Enter a binary number :");
                        scanf("%lld",&binaryNumber);
                        printf("%lld in binary = %d in decimal \n", binaryNumber, BinaryToDecimalConverter(binaryNumber));
                        break;
                    }
                    default:
                    {
                        printf("No options !!!\n");
                        break;
                    }
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 10:
            {
                printf("---------------------------------------------------------------------------------\n");
                int choice;
                int number;
                printf("1.Program to convert decimal to octal.\n");
                printf("2.Program to convert octal to decimal. \n");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                    {
                        printf("Enter a decimal number :");
                        scanf("%d",&number);
                        printf("%d in decimal = %d in octal \n", number, DecimalToOctalConverter(number));
                        break;
                    }
                    case 2:
                    {
                        printf("Enter a octal number :");
                        scanf("%d",&number);
                        printf("%d in decimal = %lld in octal \n", number, OctalToDecimalConverter(number));
                        break;
                    }
                    default:
                    {
                        printf("No options !!!\n");
                        break;
                    }
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 11:
            {
                printf("---------------------------------------------------------------------------------\n");
                int choice, octalNumber;
                long long binaryNumber;
                printf("1.Binary to Octal Converter . \n");
                printf("2.Octal to Binary Converter. \n");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                    {
                        printf("Enter a binary number :");
                        scanf("%lld",&binaryNumber);
                        printf("%lld in binary = %d in octal \n", binaryNumber, DecimalToOctalConverter(BinaryToDecimalConverter(binaryNumber)));
                        break;
                    }
                    case 2:
                    {
                        printf("Enter a octal number :");
                        scanf("%d",&octalNumber);
                        printf("%d in octal = %lld in binary \n", octalNumber,DecimalToBinaryConverter(OctalToDecimalConverter(octalNumber)) );
                        break;
                    }
                    default:
                    {
                        printf("No options !!!\n");
                        break;
                    }
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }

        }
    }
}

int checkPrimeNumbers(int number)
{
    for(int i =2;i<=number/2; i++)
    {
        if( number % i == 0)
        {
            // is not prime number
            return 0;
        }
    }
    // is prime number
     return 1;
}
int checkArmstrongNumber(int number)
{
    int counter = 0, copyOfTheNumber,copyOfTheNumber2;
    int remainder, result, sum = 0;
    copyOfTheNumber = number;
    copyOfTheNumber2 = number;
    while( copyOfTheNumber != 0)
    {
        copyOfTheNumber = copyOfTheNumber /10;
        counter++;
    }
    for ( int i = 1; i <= counter; i++)
    {
        remainder = copyOfTheNumber2 % 10;
        copyOfTheNumber2 = copyOfTheNumber2 / 10;
        result = 1;
        for(int j = 1; j<=counter;j++)
        {
            result = result * remainder;
        }
        sum = sum + result;
    }
    if ( sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int sumOfNaturalNumbers(int number)
{
    if(number !=0)
    {
        return number + sumOfNaturalNumbers(number -1);
    }
    else
    {
        return number;
    }
    
}
int factorialOfNumber(int number)
{
    if(number != 1)
    {
        return number * factorialOfNumber(number -1);
    }
    else
    {
        return number;
    }
}
int GCD(int number1, int number2)
{
    if(number2 != 0)
    {
        return  GCD(number2, number1 % number2);
    }
    else
    {
        return number1;
    }
}
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n') 
    {
        reverseSentence();
        printf("%c", c);
    }
}
int powerOfNumber(int base, int exponent)
{
    if(exponent != 0)
    {
        return base * powerOfNumber(base, exponent -1);
    }
    else
    {
        return 1;
    }
}
long long DecimalToBinaryConverter(int number)
{
    int remainder;
    long long binaryNumber = 0;
    long long i = 1;
    while (number != 0)
    {
        remainder = number % 2;
        number = number / 2;
        binaryNumber = binaryNumber + remainder * i;
        i = i *10;
        //printf("%lld\n",binaryNumber);
    }
    return binaryNumber;
}
int BinaryToDecimalConverter(long long binaryNumber)
{
    long long copyOfBinaryNumber;
    int flag = 0, remainder;
    copyOfBinaryNumber = binaryNumber;
    int decimalNumber =0, counter = 0;
    while( copyOfBinaryNumber != 0)
    {
        if(copyOfBinaryNumber % 10 == 1 || copyOfBinaryNumber % 10 == 0 )
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
        copyOfBinaryNumber = copyOfBinaryNumber / 10;
    }

    if(flag == 1)
    {
        while(binaryNumber != 0)
        {
            remainder = binaryNumber % 10;
            binaryNumber = binaryNumber / 10;
            decimalNumber = decimalNumber + remainder * powerOfNumber(2,counter);
            counter++;
        }
        return decimalNumber;
    }
    if(flag == 0)
    {
        printf("It is not a binary number !!!! \n");
        return -1;
    }
}
int DecimalToOctalConverter(int decimalNumber)
{
    int octalNumber = 0;
    long long i = 1;
    while(decimalNumber != 0)
    {
        octalNumber = octalNumber + ( decimalNumber % 8) * i;
        decimalNumber = decimalNumber / 8;
        i = i *10;
    }
    return octalNumber;
}
long long OctalToDecimalConverter(int octalnumber)
{
    int copyOfOctalNumber;
    int flag =  1;
    int counter = 0;
    long long decimalNumber = 0;
    copyOfOctalNumber = octalnumber;
    while( copyOfOctalNumber != 0)
    {
        if(copyOfOctalNumber % 10 > 7 )
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
            
        }
        copyOfOctalNumber = copyOfOctalNumber / 10;
    }

    if(flag == 1)
    {
        while(octalnumber != 0)
        {
            decimalNumber = decimalNumber + ( octalnumber % 10 ) * ( powerOfNumber(8,counter));
            octalnumber = octalnumber / 10;
            counter++;
        }
        return decimalNumber;
    }
    if(flag == 0)
    {
        printf("It is not a octal number !!!! \n");
        return -1;
    }
    
}