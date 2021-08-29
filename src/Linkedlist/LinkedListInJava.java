import java.util.Scanner;

class Node {
	private int data;
	private Node next;

	public Node() {
		data = 0;
		next = null;
	}

	public Node(int d, Node n) {
		data = d;
		next = n;
	}

	public void setData(int d) {
		data = d;
	}

	public int getData() {
		return data;
	}

	public void setNext(Node n) {
		next = n;
	}

	public Node getNext() {
		return next;
	}

}

class LinkedList {
	private int size;
	private Node start;

	public LinkedList() {
		size = 0;
		start = null;
	}

	public boolean isEmpty() {
		if (start == null)
			return true;
		else
			return false;
	}

	public int getListSize() {
		return size;
	}

	public void viewList() {
		Node t;
		if (start == null) {
			System.out.println(" List is Empty ");
		} else {
			t = start;
			for (int i = 1; i <= size; i++) {
				System.out.print(" " + t.getData());
				t = t.getNext();
			}
		}
	}

	public void insertAtBeggining(int data) {
		Node n = new Node();
		n.setNext(start);
		n.setData(data);
		start = n;
		size++;
	}

	public void insertAtEnd(int data) {
		Node t, n;
		n = new Node();
		n.setData(data);
		n.setNext(null);
		t = start;

		while (t.getNext() != null) {
			t = t.getNext();
		}
		t.setNext(n);
		size++;
	}

	public void insertAtPosition(int data, int pos) {
		if (pos == 1) {
			insertAtBeggining(data);
		} else if (pos == size + 1) {
			insertAtEnd(data);
		} else if (pos > 1 && pos <= size) {
			Node t, n;
			n = new Node(data, null);
			t = start;
			for (int i = 1; i < pos - 1; i++) {
				t = t.getNext();
			}
			n.setNext(t.getNext());
			t.setNext(n);
			size++;
		} else {
			System.out.println("Intertion not possible at position " + pos);
		}
	}

	public void deleteAtFirst() {
		if (start == null) {
			System.out.println("List is already empty");
		} else {
			start = start.getNext();
			size--;
		}
	}

	public void deleteAtEnd() {
		if (start == null) {
			System.out.println("List is already empty");
		} else if (size == 1) {
			start = null;
			size--;
		} else {
			Node t = start;
			for (int i = 1; i < size - 1; i++) {
				t = t.getNext();
			}
			t.setNext(null);
			size--;
		}
	}

	public void deleteAtPosition(int pos) {
		if (start == null) {
			System.out.println("List is already empty");
		} else if (pos < 1 || pos > size) {
			System.out.println("Invalid position");
		} else if (pos == 1) {
			deleteAtFirst();
		} else if (pos == size) {
			deleteAtEnd();
		} else {
			Node t, t1;
			t = start;
			for (int i = 1; i < pos - 1; i++) {
				t = t.getNext();
			}
			t1 = t.getNext();
			t.setNext(t1.getNext());
			size--;
		}
	}
}

public class LinkedListInJava {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		LinkedList list = new LinkedList();
		boolean flag = true;
		while (flag) {
			System.out.println("/***** Choose Menu Item *****/");
			System.out.println("1. Add Item to the list at Start");
			System.out.println("2. Add Item to the list at End");
			System.out.println("3. Add Item to the list at Position");
			System.out.println("4. Delete First Item from List");
			System.out.println("5. Delete Last Item of List");
			System.out.println("6. Delete Item in a List At Position");
			System.out.println("7. View List");
			System.out.println("8. Exit");
			System.out.println("Enter Your Choice \n");
			int choice = scanner.nextInt();
			int pos, data;
			switch (choice) {
			case 1:
				System.out.println("Enter Interted Data ");
				data = scanner.nextInt();
				list.insertAtBeggining(data);
				break;
			case 2:
				System.out.println("Enter Interted Data ");
				data = scanner.nextInt();
				list.insertAtEnd(data);
				break;
			case 3:
				System.out.println("Enter Interted Data ");
				data = scanner.nextInt();
				System.out.println("Enter Position ");
				pos = scanner.nextInt();
				list.insertAtPosition(data, pos);
				break;
			case 4:
				list.deleteAtFirst();
				break;
			case 5:
				list.deleteAtEnd();
				break;
			case 6:
				System.out.println("Enter position ");
				pos = scanner.nextInt();
				list.deleteAtPosition(pos);
				break;
			case 7:
				list.viewList();
				break;
			case 8:
				flag = false;
			default:
				System.out.println("Invalid Choice \n");

			}
		}
	}
}
