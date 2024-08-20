#include<iostream>
#include<cstring>
using namespace std;

int N, i;

class book {
    int prize, stock_pos;
    char *title, *author, *publication;
public:
    void accept();
    void display();
    void search();
    book() {
        prize = 100;
        stock_pos = 10;
        title = new char[50];
        author = new char[50];
        publication = new char[50];
        strcpy(title, "HTML");
        strcpy(author, "Williamsons");
        strcpy(publication, "Oxford");
    }
} b[100];

void book::accept() {
    cout << "Enter Title, Author, Publication, Prize and Stock position of a book: ";
    cin >> title >> author >> publication >> prize >> stock_pos;
}

void book::display() {
    cout << "\n" << title << "\t" << author << "\t" << publication << "\t" << prize << "\t" << stock_pos;
}

void book::search() {
    int flag = 0, flag_1 = 0;
    char *t, *a;
    t = new char[50];
    a = new char[50];
    int cost, cp;
    cout << "\nEnter the book title and author for search: ";
    cin >> t >> a;
    for (i = 0; i < N; i++) {
        if (strcmp(t, b[i].title) == 0 && strcmp(a, b[i].author) == 0) {
            flag = 1;
            cout << "\nBOOK found";
            cout << "\nEnter the Number of Copy: ";
            cin >> cp;
            if (cp <= b[i].stock_pos) {
                flag_1 = 1;
                cost = b[i].prize * cp;
                b[i].stock_pos = b[i].stock_pos - cp;
                cout << "\nTotal cost is: " << cost;
            }
        }
    }
    if (flag == 0) {
        cout << "Book Not Found";
    }
    if (flag == 1 && flag_1 == 0) {
        cout << "Book is Available but Stock is insufficient";
    }
}

int main() {
    int ch = 0;
    cout << "Enter Count of Books: ";
    cin >> N;
    do {
        cout << "\n1. Accept\n2. Display\n3. Search\nEnter Your Choice: ";
        cin >> ch;
        switch(ch) {
            case 1:
                for (int i = 0; i < N; i++) {
                    b[i].accept();
                }
                break;
            case 2:
                for (int i = 0; i < N; i++) {
                    b[i].display();
                }
                break;
            case 3:
                b[i].search();
                break;
            default:
                cout << "INVALID CHOICE";
                break;
        }
    } while (ch != 0);
    return 0;
}
