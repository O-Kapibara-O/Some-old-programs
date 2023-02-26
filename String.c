#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int frequencyOfCharacter(char text[1000],char letter);
void vowels_consonants_digits_whiteSpace_Counter(char text[1000],int*numberOfVowels,int*numberOfConsonants,int*numberOfDigits,int*numberOfWhiteSpace);
void reverseSentence(char text[1000],int index);
int lengthOfString(char text[1000]);
char *concatenate_2_Strings(char destination[1000],char source[1000]);
void copyStrings(char destination[1000],char source[1000]);

void removeAllExpectAlphabets(char text[1000]);

void lexicographical_Order(char text[][500]);
void main()
{
    char whichProgram;
    
    for(;;)
    {   
        printf("\n****List of programs*****\n\n");

        printf("1.Find the frequency of a character in a string. \n");
        printf("2.Find the number of vowels, consonants, digits and white spaces. \n");
        printf("3.Reverse a string using recursion. \n");
        printf("4.Find the length of a string. \n");
        printf("5.Concatenate two strings. \n");
        printf("6.C Program to Copy a String. \n");
        printf("7.Remove all characters in a string except alphabets. \n");
        printf("8.Sort elements in the lexicographical order (dictionary order). \n");
        printf("\n****Ends of List of programs*****\n\n");
        
        printf("Choose the program :");



        scanf(" %c",&whichProgram);

        switch(whichProgram)
        {
            case '1':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000], letter;
                int buffertrash;
                buffertrash = getchar();

                printf("Enter a string: ");
                fgets(text, sizeof(text), stdin);
                
                printf("Enter a character to find its frequency: ");
                scanf(" %c", &letter);
                
                
                printf("In text the letter %c appear %d-times. \n",letter,frequencyOfCharacter(text,letter));
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '2':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000];
                int numberOfVowels, numberOfConsonants, numberOfDigits, numberOfWhiteSpace;
                numberOfVowels = numberOfConsonants = numberOfDigits = numberOfWhiteSpace = 0;
                int buffertrash;
                buffertrash = getchar();

                printf("Enter a string: ");
                fgets(text, sizeof(text), stdin);

                vowels_consonants_digits_whiteSpace_Counter(text,&numberOfVowels,&numberOfConsonants,&numberOfDigits,&numberOfWhiteSpace);

                printf("Number of : \nVowels : %d,\nConsonants : %d, \nDigits : %d, \nWhite Space : %d. \n",numberOfVowels,numberOfConsonants,numberOfDigits,numberOfWhiteSpace);
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '3':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000];
                int buffertrash;
                buffertrash = getchar();

                printf("Enter a string: ");
                fgets(text, sizeof(text), stdin);
                
                reverseSentence(text,0);
                printf("\n");
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '4':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000];
                int buffertrash;
                buffertrash = getchar();

                printf("Enter a string:");
                fgets(text, sizeof(text), stdin);
                
                
                printf("Length of the string: %d \n", lengthOfString(text));

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '5':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000], text2[1000];
                int buffertrash;
                buffertrash = getchar();

                printf("Enter a first string:");
                fgets(text, sizeof(text), stdin);

                printf("Enter a second string:");
                fgets(text2, sizeof(text2), stdin);
                
                printf("%s \n",concatenate_2_Strings(text,text2));
            
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '6':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000], text2[1000];
                int buffertrash;
                buffertrash = getchar();

                printf("Enter string:");
                fgets(text, sizeof(text), stdin);

                
                printf("String 1:%s",text);
                copyStrings(text2,text);
                printf("String 2:%s \n",text2);
                
            
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '7':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[1000];
                int buffertrash;
                buffertrash = getchar();

                printf("Enter string:");
                fgets(text, sizeof(text), stdin);

                removeAllExpectAlphabets(text);
                printf("%s \n",text);
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case '8':
            {
                printf("---------------------------------------------------------------------------------\n");
                char text[5][500];
                int buffertrash;
                buffertrash = getchar();

                for(int i=0;i<5;i++)
                {
                    printf("Enter %d string:",i+1);
                    fgets(text[i], sizeof(text[i]), stdin);
                }

                lexicographical_Order(text);
                printf("In the lexicographical order: \n");

                for(int i=0;i<5;i++)
                {
                    printf("%d.%s",i+1,text[i]);
                }
                
                

                
                

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            default:
            {
                printf("No options !!! \n");
            }
    
            

        }
    }
}
int frequencyOfCharacter(char text[1000],char letter)
{
    int counter = 0;
    for(int i =0;text[i] != '\0';i++)
    {
        if(text[i] == letter)
        {
            counter++;
        }
    }
    return counter;
}
void vowels_consonants_digits_whiteSpace_Counter(char text[1000],int*numberOfVowels,int*numberOfConsonants,int*numberOfDigits,int*numberOfWhiteSpace)
{
    
    for(int i =0;text[i] != '\0';i++)
    {
        int lowercase_vowel = ( text[i] =='a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'y');
        int uppercase_vowel = ( text[i] =='A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'Y');
        
        if(lowercase_vowel || uppercase_vowel)
        {
            *numberOfVowels +=1; 
        }
        else
        {
            if( (text[i] >= 65 && text[i]<=90) || (text[i]>=97 && text[i]<=122) )
            {
                *numberOfConsonants +=1;
            }
        }
        if( text[i] >= 48 && text[i]<=57 )
        {
            *numberOfDigits +=1;
        }
        if(text[i]==' ')
        {
            *numberOfWhiteSpace +=1;
        }
    }
}
void reverseSentence(char text[1000],int index)
{
    if(text[index] !='\n')
    {
        reverseSentence(text,index+1);
        printf("%c",text[index]);
    }
}
int lengthOfString(char text[1000])
{
    int i;
    for(i=0;text[i] != '\n';i++);
    
    return i;
}
char *concatenate_2_Strings(char destination[1000],char source[1000])
{
    int length1= lengthOfString(destination);
    int length2= lengthOfString(source);

    if(length1 + length2 >1000)
    {
        return "Can not concatenate this strings, there are to long ( >1000 characters).";
    }
    else
    {
        for(int i=0;i<length2;i++)
        {
            destination[length1+i]=source[i];
        }
        return destination;
    }
}
void copyStrings(char destination[1000],char source[1000])
{
    if(lengthOfString(source) > 1000)
    {
        printf("Error, out of range");
    }
    else
    {
        for(int i=0;source[i] != '\n';i++)
        {
            destination[i]=source[i];
        }
    }
}
void removeAllExpectAlphabets(char text[1000])
{
    int k=0;
    for(int i=0;text[i] !='\0';i++)
    {
        if( (text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122))
        {
            text[k]=text[i];
            k++;
        }
    }
    text[k]='\0';
}
void lexicographical_Order(char text[][500])
{
    char temp[500];
    for (int i = 0; i <5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if(strcmp(text[i],text[j]) >0)
            {
                strcpy(temp,text[i]);
                strcpy(text[i],text[j]);
                strcpy(text[j],temp);
            }
        }
    }
}