#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

//	■ Заполнить книгу;  ?

struct Book
{
	char name[50]{};
	char author[50]{};
	char publish[50]{};
	char genre[50]{};
};

void input(Book& book)
{
	cout << "Name    :: "; cin.getline(book.name, 50);
	cout << "Author  :: "; cin.getline(book.author, 50);
	cout << "Publish :: "; cin.getline(book.publish, 50);
	cout << "Genre   :: "; cin.getline(book.genre, 50);

}
void print(const Book& book)
{
	cout << "Name    :: " << book.name << endl;
	cout << "Author  :: " << book.author << endl;
	cout << "Publish :: " << book.publish << endl;
	cout << "Genre   :: " << book.genre << endl;

}
void inputAll(Book* books, const size_t length)
{
	cout << "\n======= Input Value =======" << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << "\n============= Book " << i + 1 << " ==============" << endl;
		input(books[i]);
	}
}
void printAll(const Book* books, const size_t length)
{
	cout << "\n======= Print Value =======" << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << "\n============= Book " << i + 1 << " ==============" << endl;
		print(books[i]);
	}
}
void writeBook(const char* nameFile, const Book& book)
{
	ofstream file;
	file.open(nameFile, ofstream::app);
	if (!file.is_open()) { cout << "File not found" << endl; }
	else {
		file.write((char*)&book, sizeof(Book));
	}
	file.close();
}
void writeBookAll(const Book* books, const size_t length, const char* nameFile)
{
	for (size_t i = 0; i < length; i++)
	{
		writeBook(nameFile, books[i]);
	}
}
void pushBack(Book*& books, int& length, Book book)
{
	Book* tmp = new Book[length + 1];
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = books[i];
	}
	tmp[length++] = book;
	delete[] books;
	books = tmp;
}
void readFile(Book*& books, int& length, const char* nameFile)
{
	Book tmp;
	ifstream file;
	file.open(nameFile);
	if (!file.is_open()) { cout << "File not found" << endl; }
	else {
		while (file.read((char*)&tmp, sizeof(Book))) {
			pushBack(books, length, tmp);
		}
	}
}
char* toLowerCase(const char* str) {
	char* tmp = new char[strlen(str) + 1];
	tmp[strlen(str)] = '\0';
	for (size_t i = 0; i < strlen(str); i++)
	{
		tmp[i] = tolower(str[i]);
	}
	return tmp;
}
int searchName(const Book* books, const size_t& length)
{
	char name[50];
	cout << "Input name :: "; cin.getline(name, 50);
	for (size_t i = 0; i < length; i++)
	{
		if (strcmp(toLowerCase(books[i].name), toLowerCase(name)) == 0) { return i; }
	}
	return -1;
}
int searchAuthor(const Book* books, const size_t& length)
{
	char author[50];
	cout << "Input author :: "; cin.getline(author, 50);
	for (size_t i = 0; i < length; i++)
	{
		if (strcmp(toLowerCase(books[i].author), toLowerCase(author)) == 0) { return i; }
	}
	return -1;
}
void sliceForName(Book*& books, int& length)
{
	int index = searchName(books, length);
	if (index == -1) return;
	Book* tmp = new Book[--length];
	for (size_t i = 0; i < length; i++)
	{
		if (i < index) {
			tmp[i] = books[i];
		}
		else {
			tmp[i] = books[i + 1];
		}
	}
	delete[] books;
	books = tmp;
}

void sortName(Book* books,const size_t length)
{
	Book tmp;
	for (size_t j = 0; j < length-1; j++)
	{
		for (size_t i = 0; i < length - 1-j; i++)
		{
			if (strcmp(toLowerCase(books[i].name), toLowerCase(books[i + 1].name)) > 0)
			{
				tmp = books[i];
				books[i] = books[i + 1];
				books[i + 1] = tmp;
			}
		}
	}

}

void sortAuthor(Book* books, const size_t length)
{
	Book tmp;
	for (size_t j = 0; j < length - 1; j++)
	{
		for (size_t i = 0; i < length - 1 - j; i++)
		{
			if (strcmp(toLowerCase(books[i].author), toLowerCase(books[i + 1].author)) > 0)
			{
				tmp = books[i];
				books[i] = books[i + 1];
				books[i + 1] = tmp;
			}
		}
	}

}

void sortPublish(Book* books, const size_t length)
{
	Book tmp;
	for (size_t j = 0; j < length - 1; j++)
	{
		for (size_t i = 0; i < length - 1 - j; i++)
		{
			if (strcmp(toLowerCase(books[i].publish), toLowerCase(books[i + 1].publish)) > 0)
			{
				tmp = books[i];
				books[i] = books[i + 1];
				books[i + 1] = tmp;
			}
		}
	}

}

int main()
{
	char url[50] = "library.txt";
	int option = 0;
	do {
		cout << "Select option :: " << endl;
		cout << "\t[1] => Add one book " << endl;
		cout << "\t[2] => Add some books " << endl;
		cout << "\t[3] => Edit one book " << endl;
		cout << "\t[4] => Delete one book " << endl;
		cout << "\t[5] => Print all book " << endl;
		cout << "\t[6] => Search book by name" << endl;
		cout << "\t[7] => Search book by authror" << endl;
		cout << "\t[8] => Sort name" << endl;
		cout << "\t[9] => Sort author" << endl;
		cout << "\t[10] => Sort publish" << endl;
		cout << "\t\t";
		cin >> option;
		cin.ignore();
		switch (option)
		{
		case 1: {
			Book book;
			input(book);
			writeBook(url, book);
			break;
		}
		case 2: {
			int count = 0;
			cout << "Enter number :: ";
			cin >> count;
			cin.ignore();
			Book* tmp = new Book[count];
			inputAll(tmp, count);
			writeBookAll(tmp, count, url);
			delete[] tmp;

			break;
		}
		case 3: {
			int select;
			cout << "[1] - name; [2] - author :: ";
			cin >> select;
			cin.ignore();
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			if (select == 1) {
				int index = searchName(tmp, size);
				if (index != -1) {
					input(tmp[index]);
					remove(url);
					writeBookAll(tmp, size, url);
				}
				else {
					cout << "Book not found" << endl;
				}
			}
			delete[] tmp;
			break;
		}
		case 4: {
			int select;
			cout << "[1] - name; [2] - author :: ";
			cin >> select;
			cin.ignore();
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			if (select == 1) {
				sliceForName(tmp, size);
				remove(url);
				writeBookAll(tmp, size, url);
			}
			delete[] tmp;
			break;

		}
		case 5: {
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			printAll(tmp, size);
			delete[] tmp;
			break;
		}
		case 6: {
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			int index = searchName(tmp, size);
			if (index != -1) { print(tmp[index]); }
			else { cout << "book not found" << endl; }
			delete[] tmp;		
			break;
		}
		case 7: {
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			int index = searchAuthor(tmp, size);
			if (index != -1) { print(tmp[index]); }
			else { cout << "book not found" << endl; }
			delete[] tmp;
			break;
		}
		case 8: 
		{
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			sortName(tmp, size);
			cout << "Name sorted :: " << endl;
			printAll(tmp, size);
			delete[] tmp;
			break;
		}
		case 9: 
		{
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			sortAuthor(tmp, size);
			cout << "Author sorted :: " << endl;
			printAll(tmp, size);
			delete[] tmp;
			break;
		}
		case 10:
		{
			int size = 0;
			Book* tmp = new Book[size];
			readFile(tmp, size, url);
			sortPublish(tmp, size);
			cout << "Publish sorted :: " << endl;
			printAll(tmp, size);
			delete[] tmp;
			break;
		}
		default: cout << "Wrong number!!!" << endl;
			break;
		}

	} while (option != 0);
	Sleep(1000);
}