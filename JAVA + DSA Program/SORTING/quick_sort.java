public class quick_sort {
    
    public static void printArr(int arr[]) {
        for(int i=0;i<arr.length;i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void quicksort(int arr[], int si, int ei) {
        if(si >= ei) { // Base case: if the subarray has one or no elements
            return;
        }
            int pi = partition(arr, si, ei);
            quicksort(arr, si, pi - 1);  // Recursively sort elements left partition
            quicksort(arr, pi + 1, ei); // Recursively sort elements right partition
    }
    
    public static int partition(int arr[],int si,int ei) {
        int pivot = arr[ei];
        int i = si - 1; // to make a place for smaller than pivot elements

        for(int j = si; j < ei; j++) {
            if(arr[j] <= pivot) { // If current element is smaller than pivot
                i++; // Increment index of smaller element
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = pivot;
        arr[ei] = arr[i];
        arr[i] = temp; // pivot = arr[i]
        return i; // Return the partition index
        
    }
        
     public static void main(String[] args) {
        int arr[] = {6,3,9,8,2,7};
        quicksort(arr, 0, arr.length - 1);
        printArr(arr);
    }
}
