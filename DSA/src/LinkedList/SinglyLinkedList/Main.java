package LinkedList.SinglyLinkedList;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        MySinglyLinkedList list = new MySinglyLinkedList();
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\nMenu Driven---------------------");
            System.out.println("1.Insert At Beginning");
            System.out.println("2.Insert at End");
            System.out.println("3.Insert At Position");
            System.out.println("4.Disply");
            System.out.println("5.Remove From Beginning");
            System.out.println("6.Remove From End");
            System.out.println("7.Remove At Position");
            System.out.println("8.Search");
            System.out.println("9.Get At Position");
            System.out.println("10.Get Middle Node");
            System.out.println("11.Display Reverse");
            System.out.println("12.Swap The Position");
            System.out.println("13.Second Max");
            System.out.println("14.Exit");
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
                    System.out.println("Postion: ");
                    int position = sc.nextInt();
                    System.out.println("Value: ");
                    int data = sc.nextInt();
                    list.insertAtPostion(data, position);
                }
                case 4: {
                    list.display();
                    break;
                }
                case 5: {
                    list.removeFromBeginning();
                    break;
                }
                case 6: {
                    list.removeFromEnd();
                    break;
                }
                case 7: {
                    System.out.println("Postion: ");
                    int position = sc.nextInt();
                    list.removeAtPosition(position);
                    break;
                }
                case 8:{
                    System.out.println("Insert the value you want to search: ");
                    int data = sc.nextInt();
                    list.search(data);
                    break;
                }
                case 9: {
                    System.out.println("Postion: ");
                    int position = sc.nextInt();
                    list.getAtPosition(position);
                    break;
                }
                case 10: {
                    list.getMiddleNode();
                    break;
                }
                case 11:{
                    list.displayReverse(list.start);
                    break;
                }
                case 12:{
                    System.out.println("Position 1: ");
                    int p1 = sc.nextInt();
                    System.out.println("Position 2: ");
                    int p2 = sc.nextInt();
                    list.swapPosition(p1, p2);
                    break;
                }
                case 13: {
                    list.secondMax();
                    break;
                }
                default: {
                    System.out.println("Insert valid choice.....");
                    break;
                }
            }
        }while (choice != 14);
    }
}
