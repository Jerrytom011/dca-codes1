class LL 
{
    Node head;
    class node{
        string data;
        node next;

        Node(String data){
            this.data = data;
            this.next = null;
        }
    }

    //add first,last
 public void addFirst(String data) 
 {
    Node newNode = new Node(data);
    if(head == null){
        head = newNode;
        return;
    }

    newNode.next = head;
    head = newNode;
 }

public void addLast(string data){
    Node newNode = new Node(data);
    if(head == null){
        head = newNode;
        return;
    }

    Node currNode = head;
    while(currNode.next != null){
        currNode = currNode.next;
    }

    currNode.next = newNode;
}
 //print
 public void printList(){
    If(head == null) {
        system.out.println("list is empty");
        return;
        
    }
    Node currNode = head;
    while(currNode != null){
        system.out.print(currNull.data + " -> " );
        currNode = currNode.next;
    }
    system.out.println("NULL");


}



    public static void main(String args[]){
        LL list = new LL();
    list.addFirst("a");
    list.addFirst("is");
    list.printlist();

    }
}