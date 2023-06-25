#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Book {
    char title[100];
    char author[100];
    int pagesCount;
};

struct Book library[10000];
int bookCount = 0;

void printBook(struct Book b, int index){
    printf("%d. %s | %s %d pages.\n",
           index + 1,
           b.author,
           b.title,
           b.pagesCount);
}

void clearStdIn(){
    char bebra[10];
    gets(bebra);
}

void readBook(struct Book *b){
    printf("¬ведите название:\n");
    //gets((*b).title);
    gets(b->title);
    printf("¬ведите автора:\n");
    //gets((*b).author);
    gets(b->author);
    printf("¬ведите количетво страниц:\n");
    //scanf("%d", &(*b).pagesCount);
    scanf("%d", &b->pagesCount);
    clearStdIn();
}

void addBook(){
    struct Book b;
    readBook(&b);
    library[bookCount] = b;
    bookCount++;
}

void printAllBooks(){
    for(int i = 0; i < bookCount; i++){
        printBook(library[i], i);
    }
}

void deleteBook()
{
    int index = 0;
    printf("Enter index of book\n");
    scanf("%d", &index + 1);
    if(index < 0 || index >= bookCount)
    {
        printf("Invalid index\n");
        return;
    }
    else
    {
        printf("Book: \n");
        printBook(library[index], index);
        puts("Are u sure?\ny - yes\nn - no");
        clearStdIn();
        char a;
        scanf("%c", &a);
        if(a != 'y')
        {
            return;
        }
        else if (a == 'y')
        {
            for (int i = index; i < bookCount; i++)
            {
                struct Book temp = library[i];
                library[i] = library[i + 1];
                library[i + 1] = temp;
            }
            bookCount--;
        }
    }
}

void upDateBook()
{
    int index = 0;
    printf("Enter index of book\n");
    scanf("%d", &index + 1);
    if(index < 0 || index >= bookCount)
    {
        printf("Invalid index\n");
        return;
    }
    else
    {
        printf("Book: \n");
        printBook(library[index], index);
        puts("Are u sure?\ny - yes\nn - no");
        clearStdIn();
        char a;
        scanf("%c", &a);
        if(a != 'y')
        {
            return;
        }
        else if (a == 'y')
        {
            clearStdIn();
            readBook(&library[index]);
        }
    }
}

void printHint()
{
    puts("1. AddBook;");
    puts("2. Print all books");
    puts("3. Find book by author");
    puts("4. Find book by title");
    puts("5. Delete book");
    puts("6. Update book");
    puts("0. Exit");
}
void findBookByAuthor()
{
    char author[100];
    printf("Enter the author:\n");
    gets(author);
    int len = strlen(author);
    for (int i = 0; i < bookCount; i++)
    {
        if (memcmp(library[i].author, author, len)==0)
        {
            printBook(library[i], i);
        }
        else
        {
            printf("No author\n");
        }
    }
}

void findBookByName()
{
    char name[100];
    printf("Enter the title:\n");
    gets(name);
    int len = strlen(name);
    for (int i = 0; i < bookCount; i++)
    {
        if (memcmp(library[i].title, name, len)==0)
        {
            printBook(library[i], i);
        }
        else
        {
            printf("No book\n");
        }
    }
}



int main()
{
    setlocale(LC_ALL, "Rus");
    char choice;
    do{

    printHint();
    scanf("%c", &choice);
    clearStdIn();

    switch(choice){
    case '1':
        addBook();
        break;
    case '2':
        printAllBooks();
        break;
    case '3':
        findBookByAuthor();
        break;
    case '4':
        findBookByName();
        break;
    case '5':
        deleteBook();
    case '6':
        upDateBook();
        break;
    case '0':
        puts("Bye.");
        break;
    default:
        puts("Invalid command");
        break;
    }
    }while (choice != '0');
    /*

    int a;
    printf("Hello world!\n");
    scanf("%d", &a);

    //нужно обозначить переменную, чтобы зан€ть пам€ть
    char worker[10];
    gets(worker);

    char b[100];
    printf("Hello world!\n");
    gets(b);

    printf("\n\n%d %s", a, b);

    //-------------------------------

    struct Book b, b1;
    readBook(&b);
    readBook(&b1);
    printBook(b);
    printBook(b1);
    */

    return 0;
}
