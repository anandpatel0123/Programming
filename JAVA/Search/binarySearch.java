package JAVA.Search;
public class binarySearch {
    public static boolean binary_search(int arr[],int key){
        int start = 0;
        int end = arr.length - 1;

        while(start <= end){
            int mid = (start + end) / 2;
            if(arr[mid] == key){
                return true;
            }
            else if (arr[mid] > key){
                end = mid -1;
            }
            else if(arr[mid] < key){
                start = mid+1;
            }
        }
        return false;
    }
    public static void main(String[] args){
        int a[] = {10,20,30,40,50,60,70,80};
        System.out.println(binary_search(a,90));
    }
}
