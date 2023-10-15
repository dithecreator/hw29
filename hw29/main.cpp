//
//  main.cpp
//  hw29
//
//  Created by Дима on 15.10.23.
//

#include"Mylibrary.h"
/*‰Á:
* 1.создать класс попугай на основе Animal, реализовать нужные интерфейчы
* 2. создать класс самолёт, реализовать нужный интерфейс
* 3. создать функцию, которая сможет работать и с обьектом класса самолёт, и с обьектом класса попугай

*/
class Ship:public ISwim
{
public:
    virtual void Swim()
    {
        cout << " Ó‡·Î¸- ‚Ó‰Ì˚È Ú‡ÌÒÔÓÚ\n";
    }
};

class Plane: public IFly{
public:
    virtual void Fly(){
        cout << "flying plane" << endl;
    }
};

void MyFunc(ISwim * ptr)
{
    ptr->Swim();
}

void MyFuncSwim(ISwim* ptr)
{
    ptr->Swim();
}
void MyFuncFly(IFly* ptr)
{
    ptr->Fly();
}
int main()
{
    setlocale(0, "ru");
//   Pinguin obj(" ÓÓÎÂ‚ÒÍËÈ ÔËÌ„‚ËÌ", 100, "¿ÍÚËÍ‡");
   //Animal* ptr = &obj;
   //ptr->Eat();
   //ptr->Print();
   //ptr->Continent();

  
//   MyFunc(&obj);
//
//   Ship sh;
//   MyFunc(&sh);
//
    
    Parrot obj("Ara", 2, "America");
    MyFuncFly(&obj);

    Plane obj2;
    MyFuncFly(&obj2);
    

}
