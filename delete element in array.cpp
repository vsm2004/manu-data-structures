/* program to remove the specific elements from an array in C. */  
#include <stdio.h>  
#include <conio.h>  
  
int main ()  
{  
    // declaration of the int type variable  
    int arr[50];  
    int pos, i, num; // declare int type variable  
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter %d elements in array: \n ", num);  
      
    // use for loop to insert elements one by one in array  
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);   
    if (pos >= num+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1];  
        }  
          
        printf (" \n The resultant array is: \n");  
          
       
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    return 0;  
}  
