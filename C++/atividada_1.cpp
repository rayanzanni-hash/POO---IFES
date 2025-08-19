#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    public:
    string title;
    string author;
    int year;
};

class User {
    public:
    string name;
    string address;
    int age;
    vector<Book> rented_books;
};

int main(){
    Book bookObj1;
    bookObj1.title = "Como Fazer Amigos e Influenciar Pessoas";
    bookObj1.author = "Dale Carnegie";
    bookObj1.year = 1936;

    User userObj1;
    userObj1.name = "Rayan R. Zanni";
    userObj1.address = "Rua dos Cabecudos, numero 321";
    userObj1.age = 20;
    userObj1.rented_books.push_back(bookObj1);
    
    cout << "Nome: " << userObj1.name << "\n";
    cout << "Endereco: " << userObj1.address << "\n";
    cout << "Idade: " << userObj1.age << "\n";
    cout << "Livro Alugado: " << bookObj1.title << ", " << bookObj1.author << ", " << bookObj1.year <<"." << "\n";

    return 0;
}