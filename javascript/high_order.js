// 1st order function or normal function
// parameters -> primitive/objects
// return     -> primitive/objects

//higher order functions
//parameters -> primitive/objects/functions
//return -> primitive/objects/functions

// for ex->

// function operation (operatorFn , a, b){ //here operation is a higher order function
//     return operatorFn(a,b)
// }

// function add(a,b){
//     return a+b;
// }

// let result = operation(add , 5 , 6)

// console.log(result)

function Greet(){
    return function(){
        console.log("hello")
    }
}

let greet = Greet()

// console.log(typeof greet)

greet()

//---------------------------------------------------------------------------

//forEach method  

// player = ["sachin","virat","dhoni"]

// player.forEach((player)=>console.log(player))

// //map method

// arr = [3,4,5,6,7]

// sq_arr = arr.map(nums => nums*nums)

// console.log(sq_arr)

//filter method

arr = [1,2,3,4,5,6,7,8,9,10]
even_arr = arr.filter(nums => nums%2==0)
console.log(even_arr)

//reduce

arr = [1,2,3,4,5,6,7,8,9,10]
let sum = arr.reduce((curr,next)=> curr+next)
console.log(sum)


