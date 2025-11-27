public class cycle {
     public static class Node {
        int data;
        Node next;

        // ✅ Constructor should be inside Node class
        public Node(int data){
            this.data = data;
            this.next = null;
        }
    }

     public static Node head;
    public static Node tail;
    
    // DETECT A Loop or cycle in ll 
    public static boolean iscycle() {
        Node slow = head;
        Node fast = head;

        while(fast != null && fast.next !=null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                return true;
            }
            
        }
        return false;
        }

    // REMOVE CYCLE NODE
    public static void removecycle(){
        // detect cycle
        Node slow = head;
        Node fast = head;
        boolean cycle = false;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if(fast == slow){
                cycle = true;
                break;
            }
        }

        if(cycle == false){
            return;
        }

        //finding meeting point
        slow = head;
        Node prev = null;
        while(slow != fast){
            prev = fast;
            fast = fast.next;
            slow = slow.next;
        }

        //remove cycle
        prev.next = null;
    }

        public static void main(String[] args) {
           head = new Node(1);
           Node temp = new Node(2);
           head.next = temp;
           head.next.next = new Node(3);
           head.next.next.next = temp;

           //1->2->3->1
           System.out.println(iscycle());
          removecycle();
           System.out.println(iscycle());   


        }

}
