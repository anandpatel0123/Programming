class linerSearch{

    public static boolean linearSearch(int arr[],int key){
        for (int i=0;i<arr.length;i++){
            if(arr[i]==key){
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        int arr[] = {3,5,7,4,9,10,14,32};
        int key = 9;
        System.out.println(linearSearch(arr,key));
        System.out.println(linearSearch(arr,10));
        System.out.println(linearSearch(arr,55));

    }
}