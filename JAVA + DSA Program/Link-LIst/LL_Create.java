import java.util.LinkedList;

public class LL_Create {
    public static void main(String[] args) {
        
        // Create LINK-list
        LinkedList<Integer> ll = new LinkedList<>();

        //ADD
        ll.addFirst(10);
        ll.addLast(20);
        ll.addLast(30);

        System.out.println(ll);

        //remove
        ll.removeFirst();
        ll.removeLast();
        System.out.println(ll);
    }
}
