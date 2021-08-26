// There are four main principles to Object Oriented Programming

// Encapsulation
// Inheritance
// Abstraction
// Polymorphism.
// TypeScript can implement all four of OOPs principles with its smaller and cleaner syntax.

// Classes
// A Class in terms of OOP is a blueprint for creating objects. It includes: fields, constructor and functions. We use "new" keyword to initialize the class object. Example:

// Class in TypeScript
class Student{
    name: string;
}

var newClassObject = new Student();
newClassObject = {
    name: "rajesh",
}         

// Compiled Class in JavaScript
    var Student = (function () {
        function Student() {
        }
        return Student;
    }());
    var newClassObject = new Student();
    newClassObject = {
        name: "rajesh"
    };
// Note: Class in TypeScript can be transferred to JavaScript.

class Student1 {
    private firstName: string;  //private members
    private lastName: string;
    yearOfBirth: number;    //Public scope by default
    schoolName: string;
    city: string;
   
       //Constructor            
       constructor(firstName: string, lastName: string, schoolName: string, city: string, yearOfBirth: number) {
               this.firstName = firstName;
            this.lastName = lastName;
            this.yearOfBirth = yearOfBirth;
            this.city = city;
            this.schoolName = schoolName;
        }
   
       age() {
           return 2017 - this.yearOfBirth;
       }    
   
       printStudentFullName(): void {
           alert(this.lastName + ',' + this.firstName);
       }
   }


//    Interface
//    Interface helps in detecting error in compile time.
   
       interface Volume {
           length: number;
           width: number;
           sayHi: () => string;
       }
       //Volume binding object Physics to define all members as specified by interface 
       var Physics: Volume = {
           length: 10,
           width: "ten",
           sayHi: (): string => { return "Hello" }
       }











