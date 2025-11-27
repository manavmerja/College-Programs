public class merge_sort {

    public static void printArr(int arr[]) {
        for(int i=0;i<arr.length;i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void mergesort(int arr[], int si, int ei) {
        if(si >= ei) { // Base case: if the subarray has one or no elements
            return;
        }
        int mid = si + (ei - si) / 2;
        mergesort(arr, si, mid);      // Sort left half
        mergesort(arr, mid + 1, ei);   // Sort right half
        merge(arr, si, mid, ei);     // Merge the two halves
    }

    public static void merge(int arr[],int si, int mid, int ei) {
        //left (0,3)=4 and right (4,6)=3 -> 6-0+1
        int temp[] = new int[ei - si + 1];
        int i = si; // Starting index for left subarray
        int j = mid + 1; // Starting index for right subarray
        int k = 0; // Index for temp array

        while(i <= mid && j<= ei){
            if(arr[i] < arr[j]){
                temp[k] = arr[i];
                i++;
            } else {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        // left part
        while(i <= mid) {
            temp[k++] = arr[i++];
        }
        // right part
        while(j <= ei) {
            temp[k++] = arr[j++];
        }
        // Copying temp to original array
        for(k=0,i=si; k< temp.length; k++,i++) {
            arr[i] = temp[k];
        }
    }

    public static void main(String[] args) {
        int arr[] = {6,3,9,8,2,7};
        mergesort(arr, 0, arr.length - 1);
        printArr(arr);
    }
}
