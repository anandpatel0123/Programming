// Data Type Classification
// In TypeScript, data types can be classified in three ways:

// any
// It implies that the variable can take any type of value, which denotes a dynamic type.

    var value: any = 30;  //can take string, number, boolean anything

// Built-in
// Built-in types in Typescript are number, string, boolean, null, undefined, and void.
    
  var value1: string = "john"; //can take only string values

//   Difference between null and undefined

// null - variable is set to an object whose value is undefined (empty)
// undefined - variable has no value or object assigned to it.


// User-defined types include enums, classes, interfaces, arrays etc.

 interface ToDo {
  name: string,
  completed?: boolean; 
  // ? tells that 'completed' is optional property, user need not give value
 }
 let todo: ToDo = {
  name: "some string",
  completed:true,
 }


// arrays
 var myArr:number[] = [1,2,3,4,5];


//  Generics
//  Generics are templates allowing the same function to accept arguments of various 
//  different types.

function calVolumeCube<T>(side: T): T {
    return side ;
}
// To explicitly define type of arguments in function call, you can use <> 
// (angular brackets) as shown below.
let volume = calVolumeCube <number> (5);

// Else compiler will decide the type based on argument you pass as shown below.
let volume1 = calVolumeCube (5);

// "T" is used to capture type sent by user.

// Enum is a way to organize set of related values. Enum members have numeric value 
// associated with them and can be either constant or computed. By default first member
//  of enum is assigned value 0 (zero). Then each subsequent member is assigned value 
//  incremented by 1 automatically.

enum CardSuit {
    Clubs,
    Diamonds,
    Hearts,
    Spades
}
// Sample usage
var card = CardSuit.Clubs;
// Safety
// card = "some string"; // Error : string is not assignable to type CardSuit

enum myConstants {
    pi = 3.14,
    e = 2.73,
    log2 = 0.3,
    log5 = 0.7
}

console.log("Finding circumference of circle");

var radius: number = 10;

console.log(2 * myConstants.pi * radius);

// myConstants.pi = 41; // you cannot change the values of enums once assigned














