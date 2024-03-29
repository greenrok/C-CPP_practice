#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
   char name[100];
   int salary; // 매달 지불해야하는 급여
public:
   PermanentWorker(char *name, int money) : salary(money)
   {
      strcpy(this->name, name);
   }

   int GetPay() const
   {
      return salary;
   }

   void ShowSalaryInfo() const
   {
      cout << "name : " << name << endl;
      cout << "salary : " << GetPay() << endl
           << endl;
   }
};

class EmpoyeeHandler
{
private:
   PermanentWorker *empList[50];
   int empNum;

public:
   EmpoyeeHandler() : empNum(0) {}

   void AddEmployee(PermanentWorker *emp)
   {
      empList[empNum++] = emp;
   }

   void ShowAllSalaryInfo() const
   {
      for (int i = 0; i < empNum; i++)
      {
         empList[i]->ShowSalaryInfo();
      }
   }

   void ShowTotalSalary() const
   {
      int sum = 0;
      for (int i = 0; i < empNum; i++)
      {
         sum += empList[i]->GetPay();
      }
      cout << "salary sum : " << sum << endl;
   }

   ~EmpoyeeHandler()
   {
      for (int i = 0; i < empNum; i++)
      {
         delete empList[i];
      }
   }
};

int main()
{
   EmpoyeeHandler handler;

   handler.AddEmployee(new PermanentWorker("Kim", 1000));
   handler.AddEmployee(new PermanentWorker("Lee", 1500));
   handler.AddEmployee(new PermanentWorker("Jun", 2000));

   handler.ShowAllSalaryInfo();

   handler.ShowTotalSalary();

   return 0;
}