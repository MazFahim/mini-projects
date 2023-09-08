const prompt = require("prompt-sync")();
const target = Math.round(Math.random()*100)
let guesses = 0
console.log(target)
while(guesses<10){
    
    const guess = Number(prompt("Guess the number (0-100):"))
    guesses++;
    if(guess>target){
        console.log("Your guess is higher than the number");
    }
    else if(guess<target){
        console.log("Your guess is lower than the number")
    }
    else{
        console.log("You are correct");
        break;
    }
}

console.log("You have guessed ", guesses," times");