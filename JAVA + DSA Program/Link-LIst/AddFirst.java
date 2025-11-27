public class AddFirst{
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
    public static int size;

    public void addfirst(int data){
        // step1 = create new node
        Node newNode = new Node(data);
        size++;
        // step2 = check if list is empty
        if(head == null){
            head = newNode;
            tail = newNode;
            return;
            }
         // step3 = add new node at the beginning
         newNode.next = head;  //link

         // step 4 : head = newnode
         head = newNode; // Now update the head to point to the new node.

        // The new node becomes the first node in the list.


    } 

    public void addlast(int data){

        // step1 = create new node
        Node newNode = new Node(data);
        size++;

        // step2 = check if list is empty
        if(head == null){
            head = newNode;
            tail = newNode;
            return;
            }

            // step3 = add new node at the end
            tail.next = newNode;  //link
            
            // step 4 : tail = newnode
            tail = newNode;
            
    }

    // Print the value of link-list

    public void print(){
        if(head == null){
            System.out.println("List is empty");
            return;
        }
        Node temp = head;
        while(temp !=null){
            System.out.print(temp.data + "-->");
            temp = temp.next;
        }
        System.out.println("Null");
    }

    // Add the Element in link-list

    public void add(int idx,int data){

        if(idx == 0){
            addfirst(data);
            return;
        }

        Node newNode = new Node(data);
        size++;
        Node temp = head;
        int i =0;
        while(i < idx-1){
            temp = temp.next;
            i++;
    }

    // i=idx-1; temp -> prev
    newNode.next = temp.next;
    temp.next = newNode;
}

// Remove first in link-list
// public int removefirst(){
//     if(size == 0){
//         System.out.println("List is empty");
//         return Integer.MIN_VALUE;
//     } else if(size == 1){
//         int data = head.data;
//         head = tail =null;
//         size = 0;
//         return data;
//     }

//     int val = head.data;
//     head = head.next;     // THIS IS HEAD POINTER SO DHIYAN MA RAKHJE 
//     size--;
//     return val;
// }

// Remove last in link-list

// public int removelast(){
//     if(size == 0){
//         System.out.println("List is empty");
//         return Integer.MIN_VALUE;
//     } else if(size == 1){
//         int data = head.data;
//         head = tail = null;
//         size = 0;
//         return data;
//     }

//     // prev: i = size-2
//     Node prev = head;
//     for(int i=0; i<size-2;i++){
//         prev = prev.next;
//     }

//     int val = prev.next.data; // tail.data
//     prev.next = null;
//     prev = tail;
//     size--;
//     return val;
// }

// Search key in iterative search

// public int itrsearch(int key){  //0(n)
//     Node temp = head;
//     int i =0;
//     while(temp != null){
//         if(temp.data == key){  // key found
//             return i;
//         }
//         temp = temp.next;
//         i++;
//     }

//     // key not found
//     return -1;
// }


// Reverse a link-list

// public void reverse(){ //0(n)
//     Node prev = null;    // hamesha prev che te curr pela aave che and curr ni pela kai hoy nai aetle te null aave
//     Node curr = tail = head; 
//     Node next;

//     while(curr != null){
//         next = curr.next;
//         curr.next = prev;
//         prev = curr;
//         curr = next;
//     }

//     head = prev; //have while loop puri thase tiyare curr che te null ne point karse and curr ni pehla ni node head bani jase 
// }

// public void deletenthnode(int n){
//     // calculating size 
//     int size = 0;
//     Node temp = head;
//     while(temp != null){
//         temp = temp.next;
//         size++;
//     }
    
//     // if deleting  node is first so
//     if(n == size){
//         head = head.next;
//         return;
//     }

//     // flnd size-n

//     int idx = 1;
//     int idxTofind = size - n;
//     Node prev = head;

//     while(idx < idxTofind){
//         prev = prev.next;
//         idx++;
//     }

//     prev.next = prev.next.next;
//     return;
// }


// FInd Pallidrome Number

// Slow-Fast Approach

public Node findmid(Node head){
    Node slow = head;
    Node fast = head;

    while(fast != null && slow.next != null ){ 
        fast = fast.next.next;
        slow = slow.next;
    }
    return slow;
}

public boolean checkpalidrome(){
    if(head == null || head.next == null){   // head null che and head no next null che aetle ke link list emptly che 
        return true;
    }

    //step 1: find midnode
    Node midNode = findmid(head);

    // step 2: reverse 2nd half
    Node prev = null;    
    Node curr = tail = head; 
    Node next;

    while(curr != null){
        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }

    Node right = prev;

    Node left = head;

    // step 3: check left and right part

    while(right != null){
        if(left.data != right.data){
            return false;
    }
    left = left.next;  //update left half
    right = right.next;    // update right half

}

return true;

}

 public static void main(String[] args) {  
         AddFirst ll = new AddFirst();
        ll.print();
        ll.addfirst(1);
        ll.print();
        ll.addfirst(2);
        ll.print();
        ll.addlast(3);
        ll.print();
        ll.addlast(4);
        ll.print();

    //    ll.add(2,9);
    //    ll.print();
    //    System.out.println(ll.size);

    //    ll.removefirst();
    //    ll.print();

    //    ll.removelast();
    //    ll.print();
    //    System.out.println(ll.size);

    // System.out.println(ll.itrsearch(3));
    // System.out.println(ll.itrsearch(10));

    // ll.reverse();
    // ll.print();

    // ll.deletenthnode(3);
    // ll.print();


    System.out.println(ll.checkpalidrome());


    }
 }

