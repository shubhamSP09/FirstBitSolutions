package MyArrayList;

public class MyArrayList {

    int[] arr;
    int capacity;
    int index;

    // Default constructor
    public MyArrayList() {
        this.capacity = 10;
        this.arr = new int[capacity];
        this.index = 0;
    }

    // Parameterized constructor
    public MyArrayList(int capacity) {
        this.capacity = capacity;
        this.arr = new int[capacity];
        this.index = 0;
    }

    // Grow array method
    public void grow() {
        this.capacity = capacity * 2;

        int[] temp = new int[capacity];

        for (int i = 0; i < index; i++) {
            temp[i] = arr[i];
        }

        arr = temp;
    }

    // Add element at the end
    public void add(int el) {
        if (capacity == index) {
            grow();
        }

        arr[index] = el;
        index++;
    }

    // Add element at a specific index
    public void add(int idx, int el) {

        if (idx < 0 || idx > index) {
            throw new IndexOutOfBoundsException("Invalid index");
        }

        if (capacity == index) {
            grow();
        }

        for (int i = index; i > idx; i--) {
            arr[i] = arr[i - 1];
        }

        arr[idx] = el;
        index++;
    }

    // Get element by index
    public int get(int idx) {
        if (idx < 0 || idx >= index) {
            throw new IndexOutOfBoundsException("Invalid index");
        }

        return arr[idx];
    }

    // Display all elements
    public void arr() {
        for (int i = 0; i < index; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // Remove element by index
    public int remove(int idx) {

        if (idx < 0 || idx >= index) {
            throw new IndexOutOfBoundsException("Invalid index");
        }

        int removed = arr[idx];

        for (int i = idx; i < index - 1; i++) {
            arr[i] = arr[i + 1];
        }

        index--;

        return removed;
    }

    // Check whether array is empty
    public boolean isEmpty() {
        return index == 0;
    }

    // Set (replace) element at a specific index
    public void set(int idx, int el) {

        if (idx < 0 || idx >= index) {
            throw new IndexOutOfBoundsException("Invalid index");
        }

        arr[idx] = el;
    }

    // Check whether element exists
    public boolean contains(int el) {

        for (int i = 0; i < index; i++) {
            if (arr[i] == el) {
                return true;
            }
        }

        return false;
    }
}
