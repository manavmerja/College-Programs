public class binary_search {

    public static int search(int arr[],int key){
        int start=0;
        int end=arr.length-1;

        while(start<=end){
            // comparisons
            int mid = (start+end)/2;

            
            if(arr[mid]==key){ 
                return mid;
                } 
                if (arr[mid] <= key){ // right 
                    start = mid + 1;
                }
                else{    // left
                    end = mid -1;
                }
        
        }
        return -1;
    }
    
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5,};
        int key = 6;

        System.out.println("index is: " + search(arr,key));
    }
}
