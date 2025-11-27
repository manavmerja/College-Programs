public class print_pairs_array {

    public static void pairs(int arr[]){
        for(int i=0;i<arr.length;i++){
            int curr=arr[i];

            for(int j=i+1;j<arr.length;j++){
                System.out.println("(" + curr + arr[j] + ")");
            }
            System.out.println();
            }
        }
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5};
        pairs(arr);


    }
}
