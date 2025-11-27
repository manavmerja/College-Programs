public class sub_array {

    public static void sub(int arr[]){
        int sum =0;
        for(int i=0;i<arr.length;i++){
            int start = i;

            for(int j=0;j<arr.length;j++){
            int end = j;

            for(int k=start;k<=end;k++){ //print
                System.out.print(arr[k] + " ");//subarray
                sum = sum + arr[k];
            }
             
            System.out.println();
            }
            System.out.println(sum);
            System.out.println();
        }
        
    }
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5};
        sub(arr);
    }
}
