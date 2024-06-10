console.log("Hello World"); //to run type node filename.js

// ASI is a mechanism in JavaScript that automatically inserts semicolons at the end of lines where they are missing, under certain conditions. 

// **********************Variables***************************

// The scope is global when a var variable is declared outside a function.
// This means that any variable that is declared with var outside a function block is available for use in the whole window.
// var is function scoped when it is declared within a function.
// This means that it is available and can be accessed only within that function.
var a = 10; //Old way of declaring

// let is block scoped
// A block is a chunk of code bounded by {}.
let b = 20;

// Like let declarations, const declarations can only be accessed within the block they were declared.
// const cannot be updated or re-declared
const c = 30, d = 40;



// **********************7 Primitive Data Types***************************
// string.
let my_str = 'This is My String';

// number.
let num = 100;

// bigint.
let myBigNumber = 435435464565n;

// boolean.
let value = true;

// undefined.
let something;
console.log(something);

// symbol.
const unique = Symbol();

// null.
let nothing = null;

// Object. //Object is not a primitive data type
// Its a Reference Type
let course = {
    name: "JS Course",
    hours: 3
};

// open terminal and type node to open node env.
// if you type typeof and then something, it will give us data type of it.

// **********************Dynamic Typing***************************
// We can initialize a variable of a certain data type then re initialize to another data type, its called Dynamic Typing.
// So its a bug, as in production code we do not want to change the data type od a variable, hence we can work with Typescript, which is statically typed version of Javascript with some enhanced features. 
let quantity = "Something";
console.log(typeof quantity);

quantity = 10;
console.log(typeof quantity);

quantity = true;
console.log(typeof quantity);

// **********************Objects***************************
// Objects are reference types. Its fundamental data type which allows us to store key value pairs.
let course1 = {
    name: "JS Course",
    hours: 3
};

// accessing the object
console.log(course1);
console.log(course1.name);
console.log(course1['hours']);


// **********************Arrays***************************
// Array is an object.
let my_arr = ['one', 'two'];
console.log(my_arr[0]);
console.log(typeof my_arr);
console.log(my_arr.length);

// **********************Functions***************************
function my_func() {
    console.log("Say Hi!!");
}
my_func();

function my_func1(name) {
    console.log("I am Saying Hello to " + name);
}
my_func1("John Doe");

// **********************Operators***************************
// Arithmetic Operators: +,-,*,/,%

// Comparison Operators: >, <, >=, <=
// == compares equality, === is strict equality, i.e. it compares value and data type.

// Ternary Operator: 
let age = 16
const canDrive = age >= 18 ? true : false;
console.log(canDrive);

// **********************Operators ***************************
let color1 = "Blue";
let color2 = "Green";

// The console prints "Green" because the || (logical OR) operator returns the first truthy value it encounters.
// In this case, color2 is assigned the value "Green", which is a truthy value.
console.log(color2 || color1);

// How are logical operators functions when applied to non-boolean values?
// In JS, booleans are operatd from left to right.

// **********************Control Flow***************************

// if-else
let age1 = 18;
if (age1 >= 18) {
    console.log("Can Drive!!");
} else {
    console.log("Cannot Drive :(");
}

// Switch case
let person = "Student"
switch (person) {
    case "Student":
        console.log("Studys...")
        break;
    case "Child":
        console.log("Plays, no study...");
        break;
    default:
        console.log("Invalid Person !!");
        break;
}

// for loops
for (let i = 0; i <= 5; i++) {
    console.log(i);
    if (i == 5) {
        console.log("End of For Loop!!");
    }
}

// while loop
let idx = 0;
while (idx < 5) {
    console.log(idx);
    idx++;
}

// For in loops, used to iterate over JS Objects and access its value.
const person1 = {
    name: "ABC",
    age: 34,
    height: 104
}

for (const i in person1) {
    console.log(i, person1[i]);
}

// For of Loops
let arr1_nums = [10, 20, 30, 40, 50];
let arr2_words = ["One", "Two", "Three"]; 

for (const i in arr1_nums) {
    console.log(arr1_nums[i]);
}

// **********************Exercise***************************
function minmax (a,b) {
    if (a>b){
        console.log(`${a} is greater than ${b}`);
    } else {
        console.log(`${b} is greater than ${a}`);
    }
}
minmax(5,10);

function evenodd (arr_nums) {
    for(let nums in arr_nums) {
        if (arr_nums[nums] %2 == 0) {
            console.log(`Even number is ${arr_nums[nums]}`)
        } else {
            console.log(`Odd number is ${arr_nums[nums]}`)
        }
    }
}


arr_nums = [1,65,16,468,165,81,16,31,5,6,1,851,36,631,1,68,516]
evenodd(arr_nums);

// **********************Factory Functins***************************
function func_car(name, model, make_year, condition) {
    return {
        name,
        model,
        make_year,
        condition,
        sound () {
            console.log("Zuuu... Zoom!!");
        }
    }
}
const my_car = func_car("Gini", "Murcielago", "2015", "Brand New");
console.log(my_car);

// **********************Constructor Function***************************
// Common convention is that when using constructor function  we use a Upper case.
function Const_func_car(name, model, make_year, condition) {
    this.name = name,
    this.model = model,
    this.make_year = make_year,
    this.condition = condition,
    this.sound = function () {
        console.log("Zuuu... Zoom!!");
    }
}
const another_my_car = new Const_func_car("Gini", "Murcielago", "2015", "Brand New")
console.log(my_car);


// **********************Dynamic Objects***************************
// Objects are Dynamic in Javascript
const objs = {
    key1: "Value 1"
};
objs.key2 = "Value 2";
objs["key3"] = "Value 3";
console.log(objs);
delete objs.key2;
console.log(objs);

// Objects
console.log(objs.constructor);

// **********************Values vs Reference Types***************************
// Primitives values are copied by their value
// Objects are copied by reference

let a_ = {value: 10};
let b_ = a_;
b_.value = 100;
console.log(a_);
console.log(b_);

// Cloning object
let obj_b = {};
let obj_b_second = { ...a };

Object.assign(obj_b);
Object.assign(obj_b_second);

obj_b.value = 500;
obj_b_second.value = 500;

console.log(obj_b);
console.log(obj_b_second);

// **********************Enumerating Obejcts***************************
const obj_stuff = {
    stuff1: "Stuffed 1",
    stuff2: "Stuffed 2",
    stuff3: "Stuffed 3",
    stuff4: "Stuffed 4",
    stuff5: "Stuffed 5"
}

const keysOfStuff = Object.keys(obj_stuff);
console.log(keysOfStuff);

const valuesOfStuff = Object.values(obj_stuff);
console.log(valuesOfStuff);

const entriesOfStuff = Object.entries(obj_stuff);
console.log(entriesOfStuff);

// **********************Math Functions***************************
console.log(Math.round(6.8));
console.log(Math.ceil(6.8));
console.log(Math.floor(6.8));
console.log(Math.sqrt(25));
console.log(Math.min(6, 8, 1, 85, 6, 21));
console.log(Math.max(6, 841, 2, 2, 2351, 35, 36165, 8));
console.log(Math.pow(2, 3));
console.log(Math.random());
console.log(`Random Number between 1-10: ${Math.ceil(Math.random()*10)}`);


// **********************String Methods***************************
let sentence = "The quick brown fox jumps over the lazy dog!"

console.log(sentence.includes('fox'));
console.log(sentence[5]);
console.log(sentence.startsWith('T'));
console.log(sentence.replace('T', 'ttttt'));
console.log(sentence.split(' '));
console.log(sentence.toUpperCase());

const onlyWords = sentence.split(" "); 
console.log(onlyWords.join('-'));


// **********************Date***************************
let curr_date = new Date();
console.log(curr_date);

// **********************Arrays***************************
const arrOfNums = [51, 51, 874, 2, 653, 45, 654, 20];

arrOfNums.push(10000)
console.log(`Inserting at End: ${arrOfNums}`);

console.log(`Last element removed is: ${arrOfNums.pop()}`)

console.log(`First element remove is: ${arrOfNums.shift()}`)

arrOfNums.unshift(1);
console.log(`Inserting at Start: ${arrOfNums}`);

arrOfNums.splice(1, 0, 50);
console.log(`Inserting in Between: ${arrOfNums}`);

console.log(`Using Slice: ${arrOfNums.slice(0,5)}`);

console.log(`Finding Index: ${arrOfNums.indexOf(20)}`);

console.log(`Checking if element is present: ${arrOfNums.includes(2)}`);

const half_arr = [-34, -443, -6845, -514, -51, -645, -748];
console.log(`Combined Array: ${arrOfNums.concat(half_arr)}`);

const usingSpread = [...arrOfNums, ...half_arr];
console.log(`Combined array using spread operator: ${usingSpread}`);

console.log(`Sorted array is: ${usingSpread.sort()}`)

console.log(`Emptied array: ${arrOfNums.length = 0}`)

// Using Reduce
const sumOfAllElements = usingSpread.reduce( (acc, currVal) => {
    return acc + currVal;
})
console.log(`Sum of Elements using Reduce${sumOfAllElements}`);
// **********************Arrow Functions***************************
const arrFunc = (num1, num2) => {
    return num1 + num2;
}

const same_arrFunc = (num1, num2) => num1 + num2;

// **********************Getters and Setters***************************
const gAndS = {
    name_person: "ABC",
    age: 54,
    get details() {
        return `Name is: ${this.name_person} and Age is: ${this.age}.`
    },
    set details(value) {
        this.name_person = value
        // return `Name is: ${name} and Age is: ${age}.`
    }
}
gAndS.details = "XYZ";
console.log(gAndS.details);
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************
// **********************Variables***************************

