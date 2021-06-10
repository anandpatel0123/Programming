#include <iostream>
using namespace std;

class array
{
public:
    int *a;
    int size;
    int length;
};

//display all the elements
void display(class array ar)
{
    cout << "Elements are :" << endl;

    for (int i = 0; i < ar.length; i++)
        cout << ar.a[i] << " ";
    cout<<endl;
}


//Append an element
void append(class array *arr, int x)
{
    if (arr->length < arr->size)
        arr->a[arr->length++] = x;
}

//Insert an element
void insert(class array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->a[i] = arr->a[i - 1];
        arr->a[index] = x;
        arr->length++;
    }
}

//Delete an element from array and shift all the elements
int Delete(class array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->a[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->a[i] = arr->a[i + 1];
        arr->length--;
        return x;
    }
    return x;
}

//Swap two elements
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//Linear Search
int Linearsearch(class array arr, int key)
{

    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.a[i])
        {
            cout << "Succesfully Found at Index " << i << endl;
            return i;
        }
    }
    cout << "Not Found!" << endl;
    return 0;
}

//move found element towards front
int PromotionLinearSearch(class array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            if (i > 0)
            {
                swap(&arr->a[i], &arr->a[i - 1]);
            }
            cout << "Succesfully Found at Index " << i << endl;
            return i;
        }
    }
    cout << "Not Found!" << endl;
    return 0;
}

//Move the found element to front
int MoveFrontLinearSearch(class array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            if (i > 0)
            {
                swap(&arr->a[i], &arr->a[0]);
            }
            cout << "Succesfully Found at Index " << i << endl;
            return i;
        }
    }
    cout << "Not Found!" << endl;
    return 0;
}

//loop Binary Search
int LBinarySearch(class array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.a[mid])
        {
            cout << "Succesfully Found at Index " << mid << endl;
            return mid;
        }

        else if (key < arr.a[mid])
            h = mid;
        else
            l = mid;
    }
    cout << "Not Found!" << endl;
    return 0;
}

//Recursive Search
int RSearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Succesfully Found at Index " << mid << endl;
            return mid;
        }
        else if (key < a[mid])
            return RSearch(a, l, mid - 1, key);
        else
            return RSearch(a, mid + 1, h, key);
    }
    cout << "Not Found!" << endl;
    return 0;
}

//get an element
int get(int a[], int index)
{
    return a[index - 1];
}

//set an element
void set(int a[], int x, int index)
{
    a[index] = x;
}

//find the biggest element of an array
int max(class array *arr)
{
    int max = arr->a[0];
    for (int i = 1; i < arr->length; i++)
    {
        if (arr->a[i] > max)
            max = arr->a[i];
    }
    return max;
}

//Find the smallest element of an arary
int min(class array *arr)
{
    int min = arr->a[0];
    for (int i = 1; i < arr->length; i++)
    {
        if (arr->a[i] < min)
            min = arr->a[i];
    }
    return min;
}

//Find the total sum of an array
int sum(class array *arr)
{
    int sum = 0;
    for (int i = 0; i < arr->length; i++)
    {
        sum = sum + arr->a[i];
    }
    return sum;
}

//Find the average of an array
int average(class array *arr)
{

    int sum = 0;
    for (int i = 0; i < arr->length; i++)
    {
        sum = sum + arr->a[i];
    }
    return sum / arr->length;
}

//Reverse an array
void reverse(class array *arr)
{
    int len = arr->length;
    int temp;
    for (int i = 0; i < arr->length / 2; i++)
    {
        len--;
        temp = arr->a[i];
        arr->a[i] = arr->a[len];
        arr->a[len] = temp;
    }
}

//Left Shift
void Lshift(class array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (i > arr->length - 1)
        {
            arr->a[i] = 0;
        }
        arr->a[i] = arr->a[i + 1];
    }
}

//Left Rotate
void LRotate(class array *arr)
{
    int temp = arr->a[0];
    for (int i = 0; i < arr->length; i++)
    {
        arr->a[i] = arr->a[i + 1];
    }
    arr->a[arr->length - 1] = temp;
}

//Insert the element in a sorted array
void insertInSorted(class array *arr, int x)
{
    int i = arr->length - 1;

    while (i >= 0 && arr->a[i] > x)
    {
        arr->a[i + 1] = arr->a[i];
        i--;
    }
    arr->a[i + 1] = x;
    arr->length++;
}

//Check whether the array is sorted or not
bool isSorted(class array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.a[i] > arr.a[i + 1])
            return false;
    }
    return true;
}

//All (-ve) Elements on the left side
void negativeLeft(class array *ar)
{

    int i = 0;
    int j = ar->length - 1;
    while (i < j)
    {
        while (ar->a[i] < 0)
        {
            i++;
        }
        while (ar->a[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(ar->a[i], ar->a[j]);
        }
    };
}

//Merge Operation
void merge(class array *a1, class array *a2)
{
    int i = 0, j = 0, k = 0;
    int totallength = a1->length + a2->length;
    int c[totallength];
    while (i < a1->length && j < a2->length)
    {
        if (a1->a[i] < a2->a[j])
        {
            c[k++] = a1->a[i++];
        }
        else
        {
            c[k++] = a2->a[j++];
        }
    }
    for (; i < a1->length; i++)
    {
        c[k++] = a1->a[i];
    }
    for (; j < a2->length; j++)
    {
        c[k++] = a2->a[j];
    }
    for (int l = 0; l < totallength; l++)
        cout << c[l] << " ";
}

//Union Operation
void Union(class array *a1, class array *a2)
{
    int i = 0, j = 0, k = 0;
    int totallength = a1->length + a2->length;
    int c[totallength];
    while (i < a1->length && j < a2->length)
    {
        if (a1->a[i] < a2->a[j])
        {
            c[k++] = a1->a[i++];
        }
        else if (a1->a[i] > a2->a[j])
        {
            c[k++] = a2->a[j++];
        }
        else
        {
            c[k++] = a1->a[i++];
            j++;
        }
    }
    for (; i < a1->length; i++)
    {
        c[k++] = a1->a[i];
    }
    for (; j < a2->length; j++)
    {
        c[k++] = a2->a[j];
    }
    for (int l = 0; l < k; l++)
        cout << c[l] << " ";
}

//Intersection Operation
void Intersection(class array *a1, class array *a2)
{
    int i = 0, j = 0, k = 0;
    int totallength = a1->length + a2->length;
    int c[totallength];
    while (i < a1->length && j < a2->length)
    {
        if (a1->a[i] < a2->a[j])
        {
            i++;
        }
        else if (a1->a[i] > a2->a[j])
        {
            j++;
        }
        else
        {
            c[k++] = a1->a[i++];
            j++;
        }
    }

    for (int l = 0; l < k; l++)
        cout << c[l] << " ";
}

//Difference Operation
void Difference(class array *a1, class array *a2)
{
    int i = 0, j = 0, k = 0;
    int totallength = a1->length + a2->length;
    int c[totallength];
    while (i < a1->length && j < a2->length)
    {
        if (a1->a[i] < a2->a[j])
        {
            c[k++] = a1->a[i++];
        }
        else if (a1->a[i] > a2->a[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for (; i < a1->length; i++)
    {
        c[k++] = a1->a[i];
    }

    for (int l = 0; l < k; l++)
        cout << c[l] << " ";
}

int main()
{
    // array arr = array({{2,3,4,5,6},10,5});
    // array ar = array({{6,3,8,10,-7,5,6,65,1,2},10,10});
    // array a1= array({{3,8,16,20,25},10,5});
    // array a2= array({{4,8,12,20,2},10,5});
    //  append(&arr,10);
    //  insert(&arr,0  ,11);
    // display(arr);

    // cout<<endl<<"Deleted Value : "<<Delete(&arr,0)<<endl;
    // display(arr);
    // MoveFrontLinearSearch(&arr,4);
    // RSearch(arr.a,0,arr.length,4);
    // display(arr);
    //    cout<<sum(&arr)<<endl;
    //     cout<<average(&arr);
    // display(arr);
    // reverse(&arr);cout<<endl;
    // display(arr);
    //LRotate(&arr);
    //insertInSorted(&arr,1);
    //cout<<isSorted(arr);
    //Difference(&a1, &a2);

    array arr1;
    cout<<"Enter the size of an Array"<<endl;
    cin>>arr1.length;
    arr1.a = new int[arr1.length];
    int ch,x,index;

    do
    {  
    cout<<"Menu \n";
    cout<<"1. Insert\n";
    cout<<"2. Delete\n";
    cout<<"3. Search\n";
    cout<<"4. Sum\n";
    cout<<"5. Display\n";
    cout<<"6. Exit\n";

    cout<<"Enter your choice ";
    cin>>ch;

    switch(ch){
        case 1: cout<<"Enter an element and index ";
                cin>>x>>index;
                insert(&arr1,index,x);
                break;
        case 2: cout<<"Enter index ";
                cin>>index;
                Delete(&arr1,index);
                break;
        case 3: cout<<"Enter element to search ";
                cin>>x;
                Linearsearch(arr1,x);
                break;
        case 4: cout<<"Sum is "<<sum(&arr1);
                break;
        case 5: display(arr1);
                
    }
    } while (ch<6);

    return 0;


}