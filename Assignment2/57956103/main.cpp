#include <iostream>

using namespace std;

class PersonType{

private:
    string fullName;
    int idNum;
    string birthday;

public:
    PersonType(); //Constructor
    PersonType(string fName, int id, string birthDay);

    //the getter function
      string getFullName() {
         return this->fullName;
      }
      //the setter function
      void setFullName(string fName) {
         this->fullName = fName;
      }

      //the getter function
      int getId() {
         return this->idNum;
      }
      //the setter function
      void setId(int id) {
         this->idNum = id;
      }

     //the getter function
      string getBirthDay() {
         return this->birthday;
      }
      //the setter function
      void setBirthDay(string birthDay) {
         this->birthday = birthDay;
      }

};

PersonType::PersonType(){}

PersonType::PersonType(string fName, int id, string birthDay){
    fullName = fName;
    idNum = id;
    birthday = birthDay;
}


int main()
{
 PersonType family[20];
 family[0] = PersonType("Goodwill Langa", 57956103, "2 Sept");
 PersonType newBaby("Anny Dube", 20180912, "2 Sept");
//Assume family has been initialised
for (int i = 0; i < 20; i++)
{
if (family[i].getBirthDay() == newBaby.getBirthDay())
        {
cout << family[i].getFullName() << " shares a birthday with " << newBaby.getFullName();
        }
}
    return 0;
}
