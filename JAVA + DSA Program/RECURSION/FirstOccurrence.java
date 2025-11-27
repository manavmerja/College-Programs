public class FirstOccurrence {
    public static int current(int arr[],int key, int i) {
        if(i == arr.length){
            return -1;
        }
        if(arr[i] == key){
            return i;
        }
        return current(arr, key, i+1);
    }

    public static void main(String[] args) {
        int arr[] ={8,7,6,5,4,3,2,1};
        int result = current(arr, 05, 0);
        System.out.println(result);
    }
}