#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string category;

public:
    Book(const std::string& bookTitle, const std::string& bookAuthor, const std::string& bookCategory)
        : title(bookTitle), author(bookAuthor), category(bookCategory) {}

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    std::string getCategory() const {
        return category;
    }
};

// Iterator interface
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual Book* next() = 0;
};

class LibraryIterator : public Iterator {
private:
    std::vector<Book*> books;
    int position;

public:
    LibraryIterator(const std::vector<Book*>& bookList) : books(bookList), position(0) {}

    bool hasNext() override {
        return position < books.size();
    }

    Book* next() override {
        if (hasNext()) {
            Book* book = books[position];
            position++;
            return book;
        }
        return nullptr;
    }
};

class Library {
private:
    std::vector<Book*> books;

public:
    void addBook(const Book& book) {
        books.push_back(new Book(book.getTitle(), book.getAuthor(), book.getCategory()));
    }

    Iterator* createIterator(const std::string& category = "") {
        std::vector<Book*> categoryBooks;
        for (Book* book : books) {
            if (category.empty() || book->getCategory() == category) {
                categoryBooks.push_back(book);
            }
        }
        return new LibraryIterator(categoryBooks);
    }

    ~Library() {
        for (Book* book : books) {
            delete book;
        }
    }
};

int main() {
    Library library;

    // Add books to the library
    library.addBook(Book("Book1", "Author1", "Fiction"));
    library.addBook(Book("Book2", "Author2", "Non-Fiction"));
    library.addBook(Book("Book3", "Author3", "Science"));
    library.addBook(Book("Book4", "Author4", "Fiction"));
    library.addBook(Book("Book5", "Author5", "Non-Fiction"));

    // Iterate over books in specific category and print Author and title of book
    std::string category = "Fiction";
    std::cout << "Books in category '" << category << "':" << std::endl;
    Iterator* categoryIterator = library.createIterator(category);
    while (categoryIterator->hasNext()) {
        Book* book = categoryIterator->next();
        std::cout << "Title: " << book->getTitle() << ", Author: " << book->getAuthor() << std::endl;
    }
    delete categoryIterator;

    std::cout << std::endl;

    // Iterate over all the books and print Author and title of book
    std::cout << "All books in the library:" << std::endl;
    Iterator* allBooksIterator = library.createIterator();
    while (allBooksIterator->hasNext()) {
        Book* book = allBooksIterator->next();
        std::cout << "Title: " << book->getTitle() << ", Author: " << book->getAuthor() << std::endl;
    }

    delete allBooksIterator;

    return 0;
}