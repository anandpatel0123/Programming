function Hello (string){
    return "Hello" + " " + string
  }
  console.log(Hello("Tom"))

  // Function as value
  var f = function foo()
  {
      console.log("Hello");
  };
  f();  /*  prints "Hello" */

  // Function as argument

var f = function()
{   console.log("Hello");
};
var executor = function(fn)
{  fn();
}
executor(f);  /* returns "Hello" */

// Function as property

var myObj = {
    "testProp" : true
};
myObj.prop1 = function() {
    console.log ("Function in object");
};
myObj.prop1();

// Function arguments
// A function can accept a varied number of arguments. i.e., a function "add" 
// can be called by passing a different number of arguments different times. 
// This is possible using an implicit argument by JavaScript called arguments.

var add = function()
{  var i, sum = 0;
  for (i=0; i< arguments.length; i++)
 {  sum += arguments[i];
  }
  return sum;
};

console.log(add(1,2,3,4,5));  /* 5 arguments*/
console.log(add(1,2,3,4));  /* 4 arguments*/

// Object Constructor Function
// A constructor is useful when you want to create multiple similar objects with 
// the same properties and same methods. The code creates objects as an instance of it.

function Car(make,model,year){
    this.make = make;
    this.model = model;
    this.year = year;
};

var car1 = new Car('Honda','civic','2021');
car1.fourWheelDrive = true;

console.log(car1);


// for-each - it accepts the function as an arguments

var myArr = [10,20,"Hello",{}];

myArr.forEach(function(item,index,array){ // array itself
    console.log(index+" --> "+item);
});

// Closure
// A Closure is nothing but a function inside another function.
// This closure function can access the variables inside its own scope, the outer 
// function's variables and the global variables.

var myClosure = (function () {
    var i = 0;
    return function () {return i += 1;}
})();
myClosure();//i=1
myClosure();//i=2
myClosure();//i=3





