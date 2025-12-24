package Assign_2;
public class BookTest {

    static class Book {
        String title;
        String author;
        int yearPublished;
        double price;

        public Book() {
                // Called One Constructor From Another
            this ("","",1999,99);
        }

        public Book(String title, String author, int yearPublished, double price) {
            this.title = title;
            this.author = author;
            this.yearPublished = yearPublished;
            this.price = price;
        }

        public void displayDetails() {
            System.out.println("Title : " + title);
            System.out.println("Author : " + author);
            System.out.println("Year Published : " + yearPublished);
            System.out.println("Price : " + price);
        }
    }

    public static void main(String[] args) {
        Book one = new Book();
        Book two = new Book("Harry Potter", "JK.Rowling", 1990, 99.99);
        one.displayDetails();
        two.displayDetails();
    }
}
