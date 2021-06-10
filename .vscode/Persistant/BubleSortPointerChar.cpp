#include <iostream>

using namespace std;
#define MAX 100 
  
void sortStrings(char arr[][MAX], int n) 
{ 
    char temp[MAX]; 
  
    // Sorting strings using bubble sort 
    for (int j=0; j<n-1; j++) 
    { 
        for (int i=j+1; i<n; i++) 
        { 
            if (strcmp(arr[j], arr[i]) > 0) 
            { 
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[i]); 
                strcpy(arr[i], temp); 
            } 
        } 
    } 
} 

void swap(int *xp, int *yp)
{

    int temp = *xp;

    *xp = *yp;

    *yp = temp;
}

void bubble_sort(int *p, int size)
{

    //Bubble sort basic version

    for (int pass = 0; pass < size; pass++)
    {

        for (int j = 0; j <= size - pass - 1; j++)
        {

            if (*(p + j) > *(p + 1 + j))
            {

                swap((p + j), (p + 1 + j));
            }
        }
    }
}

int main()
{

    int size;

    cout << "enter the size of array"
         << "\n";

    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {

        cout << "enter the data"
             << "\n";

        cin >> array[i];
    }

    int *p = array;

    bubble_sort(p - 1, size);

    for (int i = 0; i < size; i++)
    {

        cout << array[i] << " ";
    }


    //Char Sorting
    char arr[][MAX] = {"GeeksforGeeks","Quiz","Practice","Gblogs","Coding"}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    sortStrings(arr, n); 
  
    printf("Strings in sorted order are : "); 
    for (int i=0; i<n; i++) 
        printf("\n String %d is %s", i+1, arr[i]); 
}