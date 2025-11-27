
import java.util.Scanner;

public class linear_search {

    public static int linear(int number[], int key){

        for(int i=0; i<number.length;i++){
            if(number[i]==key){
                return i;
        }
    }
    return -1;
    }

    public static void main(String[] args) {
    int number[] = {1, 2, 3, 4, 5, 6, 7,};
    int key = 5;

    int index = linear(number, key);
    if (index ==-1){
        System.out.println("Element is not present in array");
    }
    else{
        System.out.println("Element is present at index " + index);
    }
}
}
