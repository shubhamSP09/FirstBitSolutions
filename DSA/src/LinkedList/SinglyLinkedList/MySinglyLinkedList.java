package LinkedList.SinglyLinkedList;

public class MySinglyLinkedList  {
    Node start;

    public void insertAtBeginning (int data) {
        Node temp = new Node(data);
        if(start == null) {
            start = temp;
            System.out.println("Node inserted!!!!");
            return;
        }
        temp.next = start;
        start = temp;
        System.out.println("Node inserted!!!!");
    }

    public void insertAtEnd (int data){
        Node temp = new Node(data);
        if(start == null) {
            start = temp;
            System.out.println("Node inserted!!!!");
            return;
        }

        Node itr = start;
        while(itr.next != null){
            itr = itr.next;
        }
        itr.next = temp;
        System.out.println("Node inserted!!!!");
    }

    public void insertAtPostion(int data, int position){
        if(position < 0) {
            System.out.println("Invalid Position");
            return;
        }
        if(position == 0){
            insertAtBeginning(data);
            return;
        }

        Node temp = new Node(data);
        Node itr = start;

        for(int i = 0; i < position - 1; i++){
            if(itr == null){
                System.out.println("Invalid Position");
                return;
            }
            itr = itr.next;
        }

        if(itr == null){
            System.out.println("Invalid Position");
            return;
        }
        temp.next = itr.next;
        itr.next = temp;
        System.out.println("Node inserted!!!!");
    }

    public void display () {
        if(start == null) {
            System.out.println("Empty list");
            return;
        }

        Node itr = start;

        do{
            System.out.print(itr.data + "->");
            itr = itr.next;
        }while(itr != null);
        System.out.print("Null");

    }

    public void displayReverse(Node p) {
        if(p == null) {
            return;
        }

        displayReverse(p.next);
        System.out.print(" -> " + p.data);
    }

    public void removeFromBeginning (){
        if(start == null) {
            System.out.println("Empty list");
            return;
        }
        start = start.next;
        System.out.println("Node deleted!!!!");
    }

    public void removeFromEnd() {
        if(start == null) {
            System.out.println("Empty list");
            return;
        }
        if(start.next == null){
            start = null;
            return;
        }
        Node temp = start;
        while (temp.next.next != null){
            temp = temp.next;
        }
        temp.next = null;
        System.out.println("Node deleted!!!!");
    }

    public void removeAtPosition (int position) {
        if(start == null) {
            System.out.println("Empty list");
            return;
        }

        if(position < 0) {
            System.out.println("Invalid Position");
            return;
        }

        if(position == 0){
            removeFromBeginning();
            return;
        }

        Node itr = start;
        for(int i = 0; i < position - 1; i++){
            if(itr.next == null) {
                System.out.println("Invalid Position");
                return;
            }
            itr = itr.next;
        }

        itr.next = itr.next.next;
        System.out.println("Node deleted!!!!");
    }

    public void search(int data){
        if(start == null) {
            System.out.println("Empty list");
            return;
        }
        Node itr = start;
        int idx = 0;

        while (itr != null){
            if(itr.data == data){
                System.out.println("Element found at " + idx);
                return;
            }
            itr = itr.next;
            idx++;
        }
        System.out.println("Element not found!!!!");
    }

    public void getAtPosition(int position){
        if(start == null) {
            System.out.println("Empty list");
            return;
        }

        if(position < 0) {
            System.out.println("Invalid Position");
            return;
        }

        Node itr = start;
        int idx = 0;
        while (itr != null && idx < position) {
            itr = itr.next;
            idx++;
        }
        if(itr == null) {
            System.out.println("Invalid Position");
            return;
        }
        System.out.println(itr.data);
    }

    public void getMiddleNode() {
        if(start == null) {
            System.out.println("Empty list");
            return;
        }
        Node slow = start;
        Node fast = start;

        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        System.out.println(slow.data);
    }

    public void swapPosition(int p1, int p2){
        if(start == null) {
            System.out.println("Empty list");
            return;
        }

        if(p1 < 0 || p2 < 0) {
            System.out.println("Invalid Position");
            return;
        }

        Node itr1 = start;
        Node itr2 = start;
        int count = 0;
        while (count < p1 || count < p2) {
            if(itr1 == null && itr2 == null) {
                System.out.println("Invalid Position");
                return;
            }
            if(count < p1){
                itr1 = itr1.next;
            }
            if(count < p2) {
                itr2 = itr2.next;
            }
            count++;
        }
        int data = itr2.data;
        itr2.data = itr1.data;
        itr1.data = data;

        System.out.println("ELement swapped!!!!");
    }

    public void secondMax() {
        if(start == null || start.next == null) {
            System.out.println("Not enough elements");
            return;
        }
        Node ptr = start;
        int first = 0;
        int second = 0;

        while (ptr != null) {
            if(first < ptr.data){
                second = first;
                first = ptr.data;
            } else if(ptr.data > second && ptr.data != first){
                second = ptr.data;
            }
            ptr = ptr.next;
        }

        if(second == 0) {
            System.out.println("Second maximum does not exist");
        } else {
            System.out.println("Second Maximum: " + second);
        }

    }
}
