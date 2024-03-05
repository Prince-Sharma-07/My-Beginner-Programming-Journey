// let [a,b,c] = [1,2,[3,4,5]]

// console.log(a)    //mapping
// console.log(b)
// console.log(c[1])

//destructing in an object

let person = {
    age : 20,
    name : "prince",
    address : {
        city : "saharanpur",
        state : "UP",
        country : "india"
    }
}
const {name , address : {city,state,country}} = person   //the variable name must match with the key names
console.log(name)
console.log(city) //get the nested values from an object and assign to a variable


