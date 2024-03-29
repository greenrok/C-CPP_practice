#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
   char *title;
   char *isbn;
   int price;

public:
   Book(char *btitle, char *bisbn, int bprice) : price(bprice)
   {
      title = new char[strlen(btitle) + 1];
      isbn = new char[strlen(bisbn) + 1];

      strcpy(title, btitle);
      strcpy(isbn, bisbn);
   }

   void ShowBookInfo()
   {
      cout << "제목 : " << title << endl;
      cout << "ISBN : " << isbn << endl;
      cout << "가격 : " << price << endl;
   }

   ~Book()
   {
      delete[] title;
      delete[] isbn;
   }
};

class EBook : public Book
{
private:
   char *DRMKey;

public:
   EBook(char *btitle, char *bisbn, int bprice, char *drmkey) : Book(btitle, bisbn, bprice)
   {
      DRMKey = new char[strlen(drmkey) + 1];
      strcpy(DRMKey, drmkey);
   }

   void ShowEBookInfo()
   {
      ShowBookInfo();
      cout << "인증키 : " << DRMKey << endl;
   }

   ~EBook()
   {
      delete[] DRMKey;
   }
};

int main()
{
   Book book("좋은 C++", "555-12345-890-0", 20000);
   book.ShowBookInfo();
   cout << endl;
   EBook ebook("좋은 C++", "555-12345-890-0", 20000, "fdx9w0i8kiw");
   ebook.ShowEBookInfo();

   return 0;
}