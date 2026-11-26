package LinkedList;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        MySinglyLinkedList list = new MySinglyLinkedList();
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("Menu Driven---------------------");
            System.out.println("1.Insert At Beginning");
            System.out.println("2.Insert at End");
            System.out.println("3.Disply");
            System.out.println("4.Remove From Beginning");
            System.out.println("5.Remove From End");
            System.out.println("6.Exit");
            System.out.println("--------------------------------");
            System.out.println("");
            System.out.println("Enter Your Choice:");
            choice = sc.nextInt();

            switch (choice){
                case 1:{
                    int data;
                    System.out.println("Enter a list item: ");
                    data = sc.nextInt();
                    list.insertAtBeginning(data);
                    break;
                }
                case 2: {
                    int data;
                    System.out.println("Enter a list item: ");
                    data = sc.nextInt();
                    list.insertAtEnd(data);
                    break;
                }
                case 3: {
                    list.display();
                    break;
                }
                case 4: {
                    list.removeFromBeginning();
                }
                case 5: {
                    list.removeFromEnd();
                }
                case 6: {
                    return;
                }
                default: {
                    System.out.println("Insert valid choice.....");
                    break;
                }
            }
        }while (choice != 6);
    }
}
