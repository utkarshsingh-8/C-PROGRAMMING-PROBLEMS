#include<iostream>
    using namespace std;
    
    class Animal{
        
        int weight; // PRIVATE ACCESS MODIFIERS 👈
        
        public: // PUBLIC ACCESS MODIFIERS 👈
        // STATE OR PROPERTIES
        int age;
        int number;
        string name;
        char ch; 
        
        // BEHAVIOUR OR METHODS
        int getWeight()
        {
            return weight;
        }
        
        int setWeight(int weight)
        {
            this -> weight = weight;
        }
        
        // 👉👉 CONSTRUCTORS
        Animal() // default Constructor
        {
            cout << "Default Constructor is called "<< endl;
        }
        
        /*
        Animal(int age) // parametrized Constructor;
        {
            cout<<endl;
            cout<<"Parametrized Constructor Called"<<endl;
            this -> age = age;
        }
        
        // 👉👉 DESTRUCTORS
        ~Animal()
        {
            cout << "Destructor is called" <<endl;
        }*/
        
        
        // 👉👉 COPY CONSTUCTORS
        Animal(Animal &obj)
        {
            cout<<" I am inside copy constructor" << endl;;
        }
    };
    
    int main()
    {
        Animal dog; // STATICALLY OBJECT CREATION
        Animal *lion = new Animal; // DYNAMICALLY OBJECT CREATION
        // cout << "Age of dog "<<sizeof(dog);
        
        // Animal cat(18);
        // cout<<" Age of Cat is "<< cat.age<< endl;
        
        /*dog.age = 33;
        dog.name = "German Sherphard";
        dog.setWeight(55);
        
        
        cout<<"Weight of Dog is "<<dog.getWeight() << endl;
        cout<<"Age of Dog is "<<dog.age<<endl;
        cout<<"Name of Dog is "<<dog.name <<endl;
        
        dog.setWeight(100);
        cout<<"Weight of Dog is "<<dog.getWeight() << endl<<endl;
        
        lion->age = 40;
        lion->setWeight(97);
        
        cout<< " Age of LION " << lion->age <<endl;
        cout<< " Weight of LION " <<  lion->getWeight() << endl;*/
        
        // delete lion;
        // Animal *monkey = new Animal;
        // delete monkey;
        
        Animal hyena(dog);    // When copied object is statically created
        Animal tiger(*lion); // when copied object is dynamically created
        //or
        // Animal hyena = dog;   👈👈  
        // Animal tiger = *lion; 👈👈
        
        
    }