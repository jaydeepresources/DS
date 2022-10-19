package singly;

public class SinglyLinkedList {

	public Node head = null;
	public Node tail = null;

	public void addNode(int data) {

		Node newNode = new Node(data);

		if (head == null) {
			head = newNode;
			tail = newNode;
		} else {
			tail.next = newNode;
			tail = newNode;
		}
	}
	
	public void delete(int data) {
		Node current = head;
		Node prev=null;
		
		while(current!=null) {
			
			if(current.data == data) {
				if(current == head) {
					head = current.next;
				}
				else if(current == tail) {
					tail=prev;
					tail.next = null;
				}
				else {
					prev.next = current.next;
				}
				break;
			}
			else {
				prev = current;
				current = current.next;
			}
		}
		
	}

	public void display() {

		Node current = head;

		if (head == null) {
			System.out.println("List is empty");
			return;
		}
		System.out.println("Nodes of singly linked list: ");
		while (current != null) {

			System.out.print(current.data + ", ");
			if (current.next != null) {
				System.out.println("Next= " + current.next.data);
			} else {
				System.out.println("Next= null");
			}
			current = current.next;
		}
		System.out.println();
	}
}