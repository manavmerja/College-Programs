import java.util.Arrays; // Import this to print the array easily

public class Selection_Sort {
  public static void main(String args[]){
    int arr[] = {64, 25, 12, 22, 11};
    int n = arr.length;

    // Outer loop to go through each position
    for (int i = 0; i < n - 1; i++) {
      // Assume the first element of the unsorted part is the minimum
      int min_idx = i;
      
      // Inner loop to find the actual minimum element
      for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[min_idx]) {
          min_idx = j;
        }
      }

      // Swap operation moved here, OUTSIDE the inner loop
      // This swaps the found minimum element with the first element of the unsorted part
      int temp = arr[min_idx];
      arr[min_idx] = arr[i];
      arr[i] = temp;
    }

    // Print the final sorted array AFTER the sorting is complete
    System.out.println("Sorted array: " + Arrays.toString(arr));
  }
}