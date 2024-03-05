// //lecture 1
// const vasvi = {
//       ownership : "prince",
//       gender : "girl",
//       surname : "sharma",
// };
// console.log(vasvi);
 
// var a; //not used in modern js let and const are used 
// let b; //declare in a scope

// //second lecture

// let a = prompt("enter your name");
// console.log(a+" sharma");

//  let number = prompt("Enter a number");
// if(number%5===0){
//     console.log("true");
// }
// else{
// console.log("false");
// }

// //practice question lecture 4

// let arr = ["Bloomberg","Microsoft","Uber","Google","IBM","Netflix"];
// arr.shift();
// arr.splice(1,1,"Ola");
// arr.push("Amazon");

// //arrow functions

// const sum = (a,b)=>{
//     return a+b;
// };

// function countVowels(str){
//     let count = 0;
//     for(let i = 0; i<str.length; i++){
//         if(str[i]==="a" || str[i]==="e" ||str[i]=== "i" ||str[i]=== "o" ||str[i]=== "u"){
//             count ++;
//         }
//     }
//     return count;
// }

// const Vowels = (str)=>{
//     let count = 0;
//     for(let i = 0; i<str.length; i++){
//         if(str[i]==="a" || str[i]==="e" ||str[i]=== "i" ||str[i]=== "o" ||str[i]=== "u"){
//             count ++;
//         }
//     }
//     return count;
// }

// practice que

// let arr = [1,2,3,4];
// arr.forEach((item)=>{
//     console.log(item*item);
// })

// foreach

// const arr1 = [2,3,4,5];

// arr1.forEach((val)=>{     //here val: is the each value of arr passed one by one to the function
//     console.log(val+1);
// })

       //  OR

//      const arr2 = [1,2,3,4];
//      arr2.forEach(function myfunc(val){
//       console.log(val);
//   })

//highorder fuctions :   are those function which takes functions as an argument 
                //       and can also return functions;

//A callback is a function passed as an argument to another function.

//function methods : funtions are specific block of code which takes input and perform operations on it than give an output 
//                   but methods are associated with a specific object that can be performed on a specific object. for example
//                   toUppercase() is a method that can be only be done on strings.

//maps
// const arr = [1,2,3,4];

// let new_arr = arr.map((val)=>{
//    return val;
// })

//    OR

// const arr = [2,3,4,5];

// let new_arr = arr.map(function myfunc(val){
//     return val*val;
// })



// array filter

// const arr = [1,2,3,4,5,6];
// let new_arr = arr.filter((val)=>{
//     return val%2===0;
// })

//array reduce : we perform operation on multiple values and give a single output

// const arr = [1,2,3,4,5];
// let output = arr.reduce((res,val)=>{
//    return res + val;
// })

// practice que on reduce

// let n = prompt("enter the size:");
// let arr = [];

// for(let i = 1 ; i <= n; i++){
//     arr[i-1]=i;
// }

// console.log(arr);

// let sum = arr.reduce((res,val)=>{
//    return res + val;
// })

// console.log(sum);

// let heading_1 = document.querySelector("h1");
// heading_1.innerText= "vasvi";

// let h2 = document.querySelector("h2");
// h2.innerText = h2.innerText + " from prince sharma";
// console.log(h2.innnerText);

// let divs = document.querySelectorAll(".box");
// console.log(divs);
// divs[0].innerText = "1";
// divs[1].innerText = "2";
// divs[2].innerText = "3";