//Variables and DataTypes
/*
var firstName = 'Mario' //String
console.log(firstName); 

var lastName = 'Bravo'; // String
var age = 28; //Integer

var fullAge = true; //Boolean
console.log(fullAge) 

var job; //Undefined 
console.log(job);

job = 'Teacher'; //Now Defined 
console.log(job)
*/

/***** 
 * ****
 Mutations, Alerts, and Prompt
 * ****
var firstName = 'Mario';
var age = 28;

console.log(firstName + ' ' + age)

var job, isMarried;
job = 'Teacher';
isMarried = false;

console.log(firstName + ' is a ' + age + ' year old '+ job + ' is he married? ' + isMarried);

//Variable Mutation 
age = 'twenty eight'
job = 'driver'

alert(firstName + ' is a ' + age + ' year old '+ job + ' is he married? ' + isMarried);

var lastName = prompt('What is his last Name?');
console.log(firstName + ' ' + lastName);


/*************
 * Basic Operators
 */

 // Math Operator 
 /*
 var year, ageMark, ageJohn;
    year = 2020;
    yearJohn = year - 28;
    yearMark = year - 30;

 console.log(yearJohn + 2);

 //Logical Operator 
 var johnOlder = ageMark > ageJohn;
 console.log(johnOlder)

 //Typeof
 console.log(typeof(johnOlder))

 //Operator precedence 

 var now = 2019;
 yearJohn = 1998;
 fullAge = 18;

 var isFullAge = now - yearJohn >= fullAge;
 console.log(isFullAge)
 */

 //Coding Challenge #1 
/*
 var johnHeight, johnMass, markHeight, markMass, johnBMI, markBMI;

 johnHeight = 1.3;
 johnMass = 70;
 markHeight = 1.3;
 markMass = 90;

 johnBMI = johnMass / (johnHeight * johnHeight);
 markBMI = markMass / (markHeight * markHeight);
 console.log(johnBMI, markBMI);

 var isHigh = markBMI > johnBMI;
 console.log('Is Marks BMI higher than Johns BMI? ' + isHigh)
*/

/*
The ternary operator
*/
/*
var firstName = 'Mario';
var age = 20;

//Use this for a simple comparison used for conditionals 
age >= 18 ? console.log(firstName + ' drinks beer. ') : console.log(firstName + ' drinks juice. ');

var drink = age >= 18 ? 'beer' : 'juice';
console.log(drink);

if (age >= 10){
   var drink = 'beer';
}
else{
   var drink = 'juice';
}*/

//Switch Statement 
/*
firstName = 'Mario';
age = 14;
var job = 'teacher';
switch(job){
   case 'teacher':
      console.log(firstName + ' teaches kids how to code.');
      break;
   case 'driver':
      console.log(firstName + ' drives an uber in Denver.');
      break;
   case 'designer':
      console.log(firstName + ' designs beutiful websites.');
      break;
   default:
      console.log(firstName + ' does something else.');
}

switch(true){
   case age < 13:
      console.log(firstName + ' is a boy.');
      break;
   default:
      console.log(firstName + ' is a man.');
}
*/

/******
 * Coding challenge 2
 *

 var avgScoreJ = (89+120+103)/3;
 var avgScoreM = (116+94+123)/3;

 if (avgScoreJ > avgScoreM){
    console.log('John\'s avergage score was higher ');
 }
 else if (avgScoreJ < avgScoreM){
    console.log('Mike\'s avergage was higher ');
 }
 else{
    console.log('They tied');
 }
 */

 /***
  * Functions
  */
/*
  function calculateAge(birthYear){
     return 2020 - birthYear;
  }
  
  var ageMario = calculateAge(1999);
  console.log(ageMario);

  function yearsUntilRetire(year, firstName){
     var age = calculateAge(year);
     var retirement = 65 - age;
     console.log(firstName + ' retires in ' + retirement + ' years.');
  }

  yearsUntilRetire(1999, 'Mario');
  */

  /**
   * Arrays
   */
  var names = ['Mario', 'Mark', 'Jane'];
  var years = new Array(1990, 1969, 2003);

  console.log(names[0]);
  console.log(names.length);

  names[1] = 'Max';
  console.log(names);
  names[5] = 'Mary';
  console.log(names)