package Array;

public class basic_array {

    public static void update(int marks[]){
        for(int i=0;i<marks.length;i++){
            marks[i] = marks[i] + 1;
        }
    }
    public static void main(String[] args) {
        int marks[] = {56,86,36};
        update(marks);
    

    for(int i=0;i<marks.length;i++){
        System.out.println(marks[i] + " ");
    }
    System.out.println();
}
}