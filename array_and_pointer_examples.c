#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//--------------------------------------------------
float arrayAverage(float array[100],int number);
double arrayLargestElement(double array[100], int number);
float calculateSD(float array[10]);

void addMartices(int arrayA[100][100],int arrayB[100][100],int row,int columns);
void display_matrices_add(int arrayA[100][100],int arrayB[100][100],int arraySum[100][100], int row,int columns);

void display_matrices(int array[100][100],int row,int columns);
void getMatriceElement(int arrayA[100][100],int arrayB[100][100],int rowA, int columnsA,int rowB, int columnsB);
void multiplyMatrices(int arrayA[100][100],int arrayB[100][100],int result[100][100],int row_A,int columns_A,int row_B, int columns_B);

void transposeMatrice(int array[100][100], int transposeArray[100][100],int row, int columns);

void cyclicSwap(int *a,int* b,int* c);
//-------------------------------------------------
void main()
{
    int whichProgram;
    
    for(;;)
    {   
        printf("\n****List of programs*****\n\n");

        printf("1.Calculate the average of array elements. \n");
        printf("2.Find the largest element of an array. \n");
        printf("3.Calculate standard deviation. \n");
        printf("4.Program to Add Two Matrices. \n");
        printf("5.Program to Multiply two matrices. \n");
        printf("6.Find transpose of a matrix. \n");
        printf("7.Access elements of an array using pointers. \n");
        printf("8.Swap numbers in the cyclic order using call by reference. \n");
        printf("9.Find the largest number (Dynamic memory allocation is used). \n");
        printf("10,Exit. \n");

        printf("\n****Ends of List of programs*****\n\n");
        
        printf("Choose the program :");



        scanf("%d",&whichProgram);

        switch(whichProgram)
        {
            case 1:
            {
                printf("---------------------------------------------------------------------------------\n");
                float array[100];
                int number;

                printf("Enter the numbers of array's elements (max = 100): ");
                scanf("%d",&number);

                while ( number < 1 || number > 100)
                {
                    printf("Enter the numbers of array's elements (max = 100) again : ");
                    scanf("%d",&number);
                }

                for (int i = 0; i < number; i++)
                {
                    printf("Enter value of the %d element :",i+1);
                    scanf("%f",&array[i]);
                }
                

                printf("Average = %.2f \n", arrayAverage(array,number));

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 2:
            {
                printf("---------------------------------------------------------------------------------\n");
                double array[100];
                int number;

                printf("Enter the numbers of array's elements (max = 100): ");
                scanf("%d",&number);

                while ( number < 1 || number > 100)
                {
                    printf("Enter the numbers of array's elements (max = 100) again : ");
                    scanf("%d",&number);
                }
                for (int i = 0; i < number; i++)
                {
                    printf("Enter value of the %d element :",i+1);
                    scanf("%lf",&array[i]);
                }
                printf("Largest element = %.2lf \n", arrayLargestElement(array,number));
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 3:
            {
                printf("---------------------------------------------------------------------------------\n");
                float data[10];
                printf("Enter 10  elements: ");
                for(int i=0; i< 10; i++)
                {
                    scanf("%f",&data[i]);
                }
                printf("Standard Deviation = %.6f \n", calculateSD(data));
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 4: 
            {
                printf("---------------------------------------------------------------------------------\n");
                int arrayA[100][100],arrayB[100][100],sum[100][100];
                int arrayA_row,arrayA_columns,arrayB_row,arrayB_columns;
                
                printf("Enter the number of rows in the first matrices (between 1 and 100):");
                scanf("%d",&arrayA_row);
                while(arrayA_row <1 || arrayA_row > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of first matrices (between 1 and 100):");
                    scanf("%d",&arrayA_row);
                }

                printf("Enter the number of columns in the first matrices (between 1 and 100):");
                scanf("%d",&arrayA_columns);
                while(arrayA_columns <1 || arrayA_columns > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of first matrices (between 1 and 100):");
                    scanf("%d",&arrayA_columns);
                }

                printf("Enter the number of rows in the second matrices (between 1 and 100):");
                scanf("%d",&arrayB_row);
                while(arrayB_row <1 || arrayB_row > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of second matrices (between 1 and 100):");
                    scanf("%d",&arrayB_row);
                }
                
                printf("Enter the number of columns in the second matrices (between 1 and 100):");
                scanf("%d",&arrayB_columns);
                while(arrayB_columns <1 || arrayB_columns > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of second matrices (between 1 and 100):");
                    scanf("%d",&arrayB_columns);
                }
                if(arrayA_row != arrayB_row || arrayA_columns != arrayB_columns)
                {
                    printf(" \nThe sum of this matrices does not exist. \n Marices have not equal dimension !!! \n");
                }
                else
                {
                    for(int i =0;i<arrayA_row;i++)
                    {
                        for(int j = 0;j < arrayA_columns; j++)
                        {
                            printf("Enter value of element A%d%d of first matrice :",i+1,j+1);
                            scanf("%d",&arrayA[i][j]);
                        }
                    }
                    for(int i =0;i<arrayB_row;i++)
                    {
                        for(int j = 0;j < arrayB_columns; j++)
                        {
                            printf("Enter value of element B%d%d of second matrice :",i+1,j+1);
                            scanf("%d",&arrayB[i][j]);
                        }
                    }
                    addMartices(arrayA,arrayB,arrayA_row,arrayA_columns);
                }
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 5:
            {
                printf("---------------------------------------------------------------------------------\n");
                int arrayA[100][100],arrayB[100][100],result[100][100];
                int arrayA_row,arrayA_columns,arrayB_row,arrayB_columns;
                
                printf("Enter the number of rows in the first matrices (between 1 and 100):");
                scanf("%d",&arrayA_row);
                while(arrayA_row <1 || arrayA_row > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of first matrices (between 1 and 100):");
                    scanf("%d",&arrayA_row);
                }

                printf("Enter the number of columns in the first matrices (between 1 and 100):");
                scanf("%d",&arrayA_columns);
                while(arrayA_columns <1 || arrayA_columns > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of first matrices (between 1 and 100):");
                    scanf("%d",&arrayA_columns);
                }

                printf("Enter the number of rows in the second matrices (between 1 and 100):");
                scanf("%d",&arrayB_row);
                while(arrayB_row <1 || arrayB_row > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of second matrices (between 1 and 100):");
                    scanf("%d",&arrayB_row);
                }
                
                printf("Enter the number of columns in the second matrices (between 1 and 100):");
                scanf("%d",&arrayB_columns);
                while(arrayB_columns <1 || arrayB_columns > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of second matrices (between 1 and 100):");
                    scanf("%d",&arrayB_columns);
                }
                if(arrayA_columns != arrayB_row)
                {
                   printf("\nThe matrices cant be multiplied if numbers of columns of 1 matrice is different than number of rows in 2 matrice. \n");
                }
                else
                {
                    getMatriceElement(arrayA,arrayB,arrayA_row,arrayA_columns,arrayB_row,arrayB_columns);
                    
                    printf("\n\n");
                    multiplyMatrices(arrayA,arrayB,result,arrayA_row,arrayA_columns,arrayB_row,arrayB_columns);
                    
                    printf("\t [A] \n\n");
                    display_matrices(arrayA,arrayA_row,arrayA_columns);
                    printf("\n \t * \n");
                    printf("\n \t [B] \n\n");
                    display_matrices(arrayB,arrayB_row,arrayB_columns);
                    printf("\n \t = \n");
                    printf("\n \t [RESULT] \n\n");
                    display_matrices(result,arrayA_row,arrayB_columns);
                    
                }
                
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 6:
            {
                printf("---------------------------------------------------------------------------------\n");
                int array[100][100],transposeArray[100][100];
                int row, columns;

                printf("Enter the number of rows in the matrices (between 1 and 100):");
                scanf("%d",&row);
                while(row <1 || row > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of matrices (between 1 and 100):");
                    scanf("%d",&row);
                }

                printf("Enter the number of columns in the matrices (between 1 and 100):");
                scanf("%d",&columns);
                while(columns <1 || columns > 100)
                {
                    printf("Wrong size !!! \n Enter correct size of matrices (between 1 and 100):");
                    scanf("%d",&columns);
                }

                for(int i =0;i<row;i++)
                    {
                        for(int j = 0;j < columns; j++)
                        {
                            printf("Enter value of element A%d%d of matrice :",i+1,j+1);
                            scanf("%d",&array[i][j]);
                        }
                    }
                    transposeMatrice(array,transposeArray,row,columns);

                    printf("Entered matrice : \n");
                    display_matrices(array,row,columns);
                    printf("Transpose of the matrice : \n");
                    display_matrices(transposeArray,columns,row);

                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 7:
            {
                printf("---------------------------------------------------------------------------------\n");
                int array[10];
                printf("Enter value of 10 elements : \n");
                for(int i = 0;i<10;i++)
                {
                    printf("Element %d :",i+1);
                    scanf("%d",array + i);
                }
                for(int i=0;i<10;i++)
                {
                    printf("Entered element's number %d is addressed under %p and its value is : %d \n",i+1,array+i,*(array+i));
                }


                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 8:
            {
                
                printf("---------------------------------------------------------------------------------\n");
                int a, b,c;
                printf("Enter A value:");
                scanf("%d",&a);
                printf("Enter B value:");
                scanf("%d",&b);
                printf("Enter C value:");
                scanf("%d",&c);

                printf("Value before swapping:\n");
                printf("a = %d \t b = %d \tc = %d\n", a, b, c);
                cyclicSwap(&a,&b,&c);
                printf("Value after swapping:\n");
                printf("a = %d \tb = %d \tc = %d\n", a, b, c);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 9:
            {
                printf("---------------------------------------------------------------------------------\n");
                
                int size;
                double max;
                double *data;

                printf("Enter the number of elements : ");
                scanf("%d",&size);


                data = (double*)calloc(size, sizeof(double));
                if(data == NULL)
                {
                    printf("Error ! Memory not allocated.");
                    exit(0);
                }
                for(int i=0;i<size;i++)
                {
                    printf("Enter value of element %d :",i+1);
                    scanf("%lf",data+i);
                }
                max = *data;
                for(int i=0;i<size;i++)
                {
                    if(max< *(data +i))
                    {
                        max = *(data+i);
                    }
                }
                printf("Largest number = %.2lf \n", max);
                printf("---------------------------------------------------------------------------------\n");
                break;
            }
            case 10:
            {
                exit(0);
            }
            default:
            {
                printf("No options !!! \n");
            }
    
            

        }
    }
}

float arrayAverage(float array[100],int number)
{
    float average = 0, sum =0;
    for(int i = 0; i <number;i++)
    {
        sum+=array[i];
    }
    average = sum / number;
    return average;
}
double arrayLargestElement(double array[100], int number)
{
    double max = array[0] ;
    for (int i = 0; i < number; i++)
    {
        if(array[i] > max )
        {
            max = array[i];
        }
    }
    return max;
}
float calculateSD(float array[10])
{
    float sum= 0.0, mean, SD = 0.0, sumSD=0.0;

    for(int i =0; i < 10;i++)
    {
        sum = sum + array[i];
    }
    mean = sum / 10;

    for(int i = 0; i<10; i++)
    {
        sumSD = sumSD + pow(array[i]-mean,2);
    }
    SD = sqrt(sumSD / 10 );

    return SD;
}
void addMartices(int arrayA[100][100],int arrayB[100][100],int row,int columns)
{
    
    int sum[100][100];
    

    for(int i=0;i<row;i++)
    {
        for(int j =0;j<columns;j++)
        {
            sum[i][j]=arrayA[i][j]+arrayB[i][j];
        }
    }

    display_matrices_add(arrayA,arrayB,sum,row,columns);
}

void display_matrices_add(int arrayA[100][100],int arrayB[100][100],int arraySum[100][100], int row,int columns)
{
    int counter =0;
    int temp;
    for(int i=0;i<row;i++)
    {
        for(int k = 0; k<5;k++)
        {
            for(int j=0;j<columns;j++)
            {   
                if(counter == 0)
                {
                    printf("[%d] \t",arrayA[i][j]);
                }
                if(counter == 2)
                {
                    printf("[%d] \t",arrayB[i][j]);
                }
                if(counter == 4)
                {
                    printf("[%d] \t",arraySum[i][j]);
                }
                if(counter == 1 && i == row /2)
                {
                    printf("+");
                    break;
                }
                if(counter == 3 && i == row /2)
                {
                    printf("=");
                    break;
                }
                
            }
            counter++;
            printf("\t");
            
        }
        counter =0;
        printf("\n");
    }
}

void getMatriceElement(int arrayA[100][100],int arrayB[100][100],int rowA, int columnsA,int rowB, int columnsB)
{
    for(int i =0;i<rowA;i++)
    {
        for(int j = 0;j < columnsA; j++)
        {
            printf("Enter value of element A%d%d of first matrice :",i+1,j+1);
            scanf("%d",&arrayA[i][j]);
        }
    }
    for(int i =0;i<rowB;i++)
    {
        for(int j = 0;j < columnsB; j++)
        {
            printf("Enter value of element B%d%d of second matrice :",i+1,j+1);
            scanf("%d",&arrayB[i][j]);
        }
    }
}
void multiplyMatrices(int arrayA[100][100],int arrayB[100][100],int result[100][100],int row_A,int columns_A,int row_B, int columns_B)
{
    int sum = 0;
    for(int i =0;i<row_A;i++)
    {
        for(int j = 0;j< columns_B;j++)
        {
            sum = 0;
            for(int k=0;k<columns_A;k++)
            {
                sum = sum + arrayA[i][k] * arrayB[k][j];
            }
            result[i][j]=sum;
        }
    }
}
void display_matrices(int array[100][100],int row,int columns)
{
    for(int i =0;i<row;i++)
    {
        for(int j = 0; j < columns;j++)
        {
            printf("[%d] \t", array[i][j]);
        }
        printf(("\n"));
    }
}
void transposeMatrice(int array[100][100], int transposeArray[100][100],int row, int columns)
{
    for(int i = 0;i < row;i++)
    {
        for(int j=0;j<columns;j++)
        {
            transposeArray[j][i]=array[i][j];
        }
    }
}
void cyclicSwap(int *a,int* b,int* c)
{
    int temp;
    temp = *b;
    *b=*a;
    *a=*c;
    *c=temp;
}
