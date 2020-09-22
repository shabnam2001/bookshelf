#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(0, "rus");
	Book a; //First book
	a.Print();
	int n; //book amount
	cout<<"Enter number of books \n";
	cin>>n;
	PrintBook *books = new PrintBook[n];
	for (int i=0;i<n;i++){ //Ask for books
		cout<<"Enter book #"<<i+1<<" Name: \n";
		string name;
		cin >> name;
		cout<<"Enter book #"<<i+1<<" Pages: \n";
		int p;
		cin>>p;
		PrintBook pbook;
		pbook.setName(name); 
		pbook.setPages(p);
		books[i] = pbook;
	}
	for (int i=0;i<n;i++){ //Print books
		books[i].Print();
	}
	return 0;
}
