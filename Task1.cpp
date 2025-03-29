#include <iostream>
using namespace std;

// Task 1: Book Class
class Book
{
private:
    string title;
    string author;
    string genre;
    int publicationYear;

public:
    Book()
    {
        title = "Unknown Title";
        author = "Unknown Author";
        genre = "Unknown Genre";
        publicationYear = 2000;
    }

    void displayBook()
    {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "-----------------------------" << endl;
    }
};

// Task 2: StudentRecord Class
class StudentRecord
{
private:
    int id;
    string name;
    string grade;
    string department;
    string contactNumber;

public:
    StudentRecord(int id, string name, string grade, string department, string contactNumber)
    {
        this->id = id;
        this->name = name;
        this->grade = grade;
        this->department = department;
        this->contactNumber = contactNumber;
    }

    void displayRecord()
    {
        cout << "Student Record:" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
        cout << "Department: " << department << endl;
        cout << "Contact Number: " << contactNumber << endl;
        cout << "-----------------------------" << endl;
    }
};

// Task 3: OnlineOrder Class
class OnlineOrder
{
private:
    string name;
    int quantity;
    double price;
    string orderDate;
    string address;

public:
    OnlineOrder(string name, int quantity, double price, string orderDate, string address)
    {
        this->name = name;
        this->quantity = quantity;
        this->price = price;
        this->orderDate = orderDate;
        this->address = address;
    }

    void displayOrder()
    {
        double totalPrice = quantity * price;
        cout << "Order Details:" << endl;
        cout << "Product Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per Item: $" << price << endl;
        cout << "Total Price: $" << totalPrice << endl;
        cout << "Order Date: " << orderDate << endl;
        cout << "Delivery Address: " << address << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    // Task 1: Book Class
    Book book1;
    book1.displayBook();

    // Task 2: StudentRecord Class
    StudentRecord student1(101, "Huzaifa", "A", "Software Engineering", "123-456-7890");
    student1.displayRecord();

    // Task 3: OnlineOrder Class
    OnlineOrder order1("Laptop", 2, 500.0, "29-March-2025", "123 Street, Peshawar");
    order1.displayOrder();

    return 0;
}
