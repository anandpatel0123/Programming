// Objects in Javascript
// An object in JavaScript is an entity with property and type.
// A property is a variable attached to the object.
// These properties define the characteristics of the object.
// For example, car can be an object with properties color, model, etc.
// You can access the object's property using dot operator.
// In this example, car is an object with model as property

// Method 1
var car = new Object();
car.model = 'Ford';
console.log(car.model);

// Method 2
var obj={};
obj.prop1="Hello";
obj.prop2="World";
console.log(obj.prop1 + ' ' + obj.prop2);

// Method 3 Object Literal
var student = {
    Name:"Ben",
    age:20
};
console.log(student);

// Nested Objects
// We can also have an object nested inside another object, i.e., an object will have 
// another object as its property, which in turn has separate properties of its own.
// Just like the normal objects, these inner objects can also be accessed using dot 
// operator.

// Example:

var student = { 
    Name: "Ben", 
    age: 20, 
    degree: { 
        class: "B.Tech", 
        section: "A" 
    } 
};

// We can access the inner object, class by

console.log(student.degree.class);
console.log(student.degree["section"]); // using brackets

// how to delete the property from an object
 var person = {
    fname : "koushik",
    mname : null,
    lname : "kothagal",
    age : 25
 };

 console.log(person);

 // now i want to remove the age property
 delete person.age;

 console.log(person);

 // Arrays

 var myArray = [1,2,3,4,5];
 console.log(myArray);

 // length of array
 console.log(myArray.length);

 // min max find

 var my_max = Math.max(...myArray);
 var my_min = Math.min(...myArray);
 console.log(my_max);

 // sorting of array
 var num = [3,342,54,488,45,4];
 num.sort(function(a,b){return a-b}); // a-b for ascending and b-a for descending
 console.log(num)

 








