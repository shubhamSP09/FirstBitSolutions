package MyArrayList;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        MyArrayList list = new MyArrayList();
        Scanner sc = new Scanner(System.in);

        int choice;

        do{
            System.out.println("Menu Driven---------------------");
            System.out.println("1.Add Elements at End");
            System.out.println("2.Add element at a specific index");
            System.out.println("3.Get element by index");
            System.out.println("4.Display all elements");
            System.out.println("5.Remove element by index");
            System.out.println("6.Check whether array is empty");
            System.out.println("7.Check whether element exists");
            System.out.println("8.Exit");
            System.out.println("--------------------------------");
            System.out.println("");
            System.out.println("Enter Your Choice:");
            choice = sc.nextInt();

            switch (choice) {
                case 1: {
                    int el = sc.nextInt();
                    list.add(el);
                    break;
                }
                case 2: {
                    int idx = sc.nextInt();
                    System.out.println("Enter a number: ");
                    int el = sc.nextInt();
                    list.add(idx, el);
                    break;
                }
                case 3: {
                    System.out.println("Enter a index: ");
                    int idx = sc.nextInt();
                    list.get(idx);
                    break;
                }
                case 4: {
                    list.arr();
                    break;
                }
                case 5: {
                    System.out.println("Enter a index: ");
                    int idx = sc.nextInt();
                    list.remove(idx);
                    break;
                }
                case 6: {
                    list.isEmpty();
                    break;
                }
                case 7: {
                    System.out.println("Enter a number: ");
                    int el = sc.nextInt();
                    list.contains(el);
                    break;
                }
            }
        }while (choice != 8);
    }
}
