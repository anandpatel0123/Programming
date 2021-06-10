#include <iostream>
using namespace std;
class Student{
    private:
    string username;
    string pass;
    string name;
    string roll;
    int age;
    string address;

    public:
    Student(string username, string pass){
        this->username = username;
        this->pass = pass;
    }
    
    
    void setName(string username,string pass,string name){
        if(pass==this->pass && username==this->username){
            this->name = name;
        }
        
    }

    string getName() {
        return this->name;
    }

    void display() {
        cout<<"Name: "<<name<<"\n";
        cout<<"Roll: "<<roll<<"\n";
        cout<<"Age: "<<age<<"\n";
        cout<<"Address: "<<address<<"\n";
    }

    ~Student(){
        cout<<"Destructor called"<<endl;
    };
    

};




 int main(){
    Student *s1 = new Student("anand1","anand123");
    s1->setName("anand1","anand123","Rahul");
    cout<<s1->getName()<<endl;

 }