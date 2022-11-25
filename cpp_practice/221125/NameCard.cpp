#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
   enum
   {
      CLERK,
      SENIOR,
      ASSIST,
      MANAGER
   };

   void ShowPositionInfo(int pos)
   {
      switch (pos)
      {
      case CLERK:
         cout << "사원" << endl;
         break;
      case SENIOR:
         cout << "주임" << endl;
         break;
      case ASSIST:
         cout << "대리" << endl;
         break;
      case MANAGER:
         cout << "과장" << endl;
         break;
      }
   }
}

class NameCard
{
private:
   char *name;
   char *company;
   char *phone;
   int jobGrade;

public:
   NameCard(char *n, char *c, char *p, int jg) : jobGrade(jg)
   {
      name = new char[strlen(n) + 1];
      company = new char[strlen(c) + 1];
      phone = new char[strlen(p) + 1];

      strcpy(name, n);
      strcpy(company, c);
      strcpy(phone, p);
   }
   void ShowNameCardInfo() const
   {
      cout << "이름 : " << name << endl;
      cout << "회사 : " << company << endl;
      cout << "전화번호 : " << phone << endl;
      cout << "직급 : ";
      COMP_POS::ShowPositionInfo(jobGrade);
      cout << endl;
   }
   ~NameCard()
   {
      delete[] name;
      delete[] company;
      delete[] phone;
   }
};

int main()
{
   NameCard manClerk("Lee", "ABCEng", "010-1111-1111", COMP_POS::CLERK);
   NameCard manSENIOR("Hong", "OrangeEng", "010-2222-2222", COMP_POS::SENIOR);
   NameCard manAssist("Kim", "SoGoodComp", "010-5555-5555", COMP_POS::ASSIST);
   manClerk.ShowNameCardInfo();
   manSENIOR.ShowNameCardInfo();
   manAssist.ShowNameCardInfo();

   return 0;
}