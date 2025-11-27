public class LastOccurence {
    public static int LastOccurences(int arr[], int i, int key){
        
        if(i == arr.length) {
            return -1;
        }
        int isfound = LastOccurences(arr, i + 1, key);
        if(isfound == -1 && arr[i] == key) {
            return i;
        }
        return isfound;
    }
    
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 3, 6};
        int result = LastOccurences(arr, 0, 3);
        System.out.println("Last Occurrence of "  + " is at index " + result);

    }
}
