using namespace std;
#include <iostream>

class Bird{
    
  private:    
  int speed;
  
  public:
  int age;
  string name;
  
  void fly()
  {
      cout<<"Bird can Fly" << endl;
  }
  
  void eat()
  {
      cout<<"Bird can Eat"<< endl;
  }
  
  int getSpeed()
  {
      return this->speed;
  }
  
  void setSpeed(int speed)
  {
      this->speed = speed;
  }
  
  Bird()
  {
      cout<<"Default Constructor is called" << endl;
      this->speed = speed;
      this->age = 40;
      this->name = "EAGLE";
  }
  
  Bird(int speed)
  {
      cout<< "This Constructor is called" << endl;
      this->speed = speed;
      this->age = 50;
      this->name = "Sparrow";
  }
  
  Bird(Bird& b)
  {
      cout<< "Copy Constructor is called" << endl;
      this->speed = b.speed;
      this->age = b.age;

  }
  
//   ~Bird()
//   {
//       cout<<"Default Destructor is called" << endl;
//   }
  
    
};

int main() {
    
    cout<<"//////////////////DEFAULT CONSTRUCTOR//////////////////////"<<endl;
    Bird eagle;
    // eagle.age = 120;
    // eagle.name = "Sparrow";
    eagle.fly();
    eagle.eat();
    cout<<"Age of Bird is : "<<  eagle.age << endl;
    cout<<"Name of Bird is : "<< eagle.name << endl;
    cout<<endl;
    
    
    cout<<"////////////////////PARAMETRISED CONSTRUCTOR///////////////"<<endl;
    Bird *sparrow = new Bird(40);
    sparrow->fly();
    sparrow->eat();
    // (*sparrow).name = "Sparrow";
    // sparrow->setSpeed(40);
    cout<<"Speed of Sparrow is "<<sparrow->getSpeed()<<endl;
    cout<<"Name of Bird is : "<<sparrow->name<<endl;
    cout<<"Age of Bird is : "<< sparrow->age << endl;
    cout<<endl;
    
    
    cout<<"///////////////////COPY CONSTRUCTOR////////////////////////"<<endl;
    Bird owl(eagle);
    owl.fly();
    owl.eat();
    cout<<"Age of Bird is : "<<  owl.age << endl;
    cout<<"Name of Bird is : "<< owl.name << endl;
    cout<<endl; 

    return 0;
}