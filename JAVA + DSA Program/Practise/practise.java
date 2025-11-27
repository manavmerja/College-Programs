package Practise;

public class practise {
   
    public class Node{
        int data;
        Node next;

        public Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;
    public static Node tail;
    public static int size;

    public void addFirst(int data){
        Node newnode = new Node(data);

        if(head == null){
            head = tail = newnode;
            return;
        }

        newnode.next = head;
         head = newnode;
    }

    

    public static void main(String[] args) {
        practise ll = new practise();

        ll.addFirst(2);
        ll.addFirst(3);
        ll.addFirst(4);
        

    }
}
