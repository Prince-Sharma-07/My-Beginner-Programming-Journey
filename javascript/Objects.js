const user = {
    name : "prince",
    age: "20",
    address : {
    country : "India",
    city : "Saharanpur",
    }
}

//user.name = "vasvi"
//user["country"] = "Bharat" 

// console.log(user.address.country)

// console.log(user.name)
// console.log(user.country)

// console.log(user.address)

// for(let key in user){
//     console.log(key + " => " + user[key])
// }

// console.log(Object.keys(user)) to get all the keys of an object

// console.log(Object.values(user)) to get all the values of object
// console.log(Object.entries(user)) // to get both

let New_user = user

console.log(New_user)