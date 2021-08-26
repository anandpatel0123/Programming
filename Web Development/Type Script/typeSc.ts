var n = 10; // inplicit type 
var x: number = 100; // explicit type using annotation

var y = "hi";
var z = true;

var m: string;


// Functions
//Defining Functions

let myAdd = ( x: number , y: number): number => { return x+y; }; 
// first two "number" defines type for parameters 'x' and 'y'

// third "number" defines `return type` of function

// We can define optional parameter by adding “?” so that anyone calling that function 
// may or may not pass value for that variable. Optional parameters do not exist in J
// avaScript and hence those will not be handled.
	var addFunction = (n1: number, n2: number, n3?: number) : number => {
		//observe "?" in parameter n3
		//Optional parameter has to be the last parameter in the list 
        return n1+n2;
	}
	var sum = addFunction(10, 20);	//output: 30

// We can define any parameter with a default value, and while calling the function, 
// we are not required to pass the value of the parameters.
	var addFunction = (n1: number, n2: number, n3: number = 30) : number => {
		//observe parameter n3 has default value
        return n1+n2+n3;
	}

    var sum = addFunction(10, 20);	// output: 60

// Defining Objects
	interface Point2D {
	    x: number;
	    y: number;
	}
     var point2D: Point2D = { x: 0, y: 10 }











