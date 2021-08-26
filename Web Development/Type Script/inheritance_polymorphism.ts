// JavaScript uses prototypical inheritance instead of classical inheritance.

// TypeScript allows us to inherit from existing classes according to need. 
// Here is a code snippet to explain:

	class Cube {
		length: number;
		constructor(length : number) {
			this.length = length;
		}
    }
	class Physics extends Cube {
		color: string;
		constructor(length: number, color: string) {
			super(length);
			this.color = color;
		}
	}
	var obj = new Physics(10, "yellow");


    // Polymorphism – Overloading

  //Yes, function overloading is possible in TypeScript. The following code snippet
  // will demonstrate how:


    class Length{
    Length(length: number);
    Length(length:string);
    Length(value: any) {
    if (value && typeof value == "number") {
    alert("overload 1");
    }
    if (value && typeof value == "string") {
    alert("overload 2");
    }
    }}

    // Polymorphism - Overriding
    // Method Overriding is a mechanism by which the child class redefines the 
    // superclass’s method.
    
    // The following code snippet will demonstrate how:
    
    class PrinterClass { 
       doPrint():void {
          console.log("doPrint() from Parent called…") 
       } 
    } 
    
    class StringPrinter extends PrinterClass { 
       doPrint():void { 
          super.doPrint() 
          console.log("doPrint() is printing a string…")
       } 
    } 
    
    var obj = new StringPrinter() 
    obj.doPrint()

























