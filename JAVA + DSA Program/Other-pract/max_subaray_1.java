public class max_subaray_1 {
    // Max_subarray_1(brute force)

    public static void Max_subarraygs(int arr[]){
        int currSum=0;
        int maxSum=Integer.MIN_VALUE;

        for(int i=0;i<arr.length;i++){
            int start =i;
        
        for(int j=i;j<arr.length;j++){
            int end =j;
            currSum = 0;
        
        for(int k=start;k<=end;k++){
            currSum = currSum + arr[k];
        }
        System.out.println(currSum);
        if(maxSum<currSum){
            maxSum = currSum;
        }
    }
}

System.out.println("max sum: " + maxSum);
    }

    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        Max_subarraygs(arr);
    }
}
