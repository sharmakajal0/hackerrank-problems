import java.io.*;
import java.util.*;
class Node {
	int data;
	Node next;
	Node(int d) {
        data = d;
        next = null;
    }
}
class LinkedList {
    public static  Node insert(Node head,int data) {
		Node node = new Node(data);
    	Node start = head;
    	if(head == null) {
    		head = new Node(data);
            // System.out.println(head.data);
        } else {
    		while(start.next != null) {
    			start = start.next;
            }
            start.next= node;
        }
        return head;
    }
    public static void display(Node head) {
        Node start = head;
        while(start != null) {
            System.out.print(start.data + " ");
            start = start.next;
        }
        System.out.println();
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Node head = null;
        int N = sc.nextInt();
        while(N-- > 0) {
            int ele = sc.nextInt();
            head = insert(head,ele);
        }
        display(head);
        sc.close();
    }
}
