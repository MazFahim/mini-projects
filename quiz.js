const prompt = require("prompt-sync")();
let correctAnswer = 0;

let qs1 = prompt("What is the brain of the computer?");
const ans1 = "CPU";

if(qs1.toUpperCase()===ans1){
    console.log("Correct Answer");
    correctAnswer++;
}
else{
    console.log("You are wrong!!");
}
let qs2 = prompt("What type of device is a mouse?");
const ans2 = "Input";

if(qs2===ans2){
    console.log("Correct Answer");
    correctAnswer++;
}
else{
    console.log("You are wrong!!")
}
let qs3 = prompt("What type of device is a monitor?");
const ans3 = "Output";

if(qs3===ans3){
    console.log("Correct Answer");
    correctAnswer++;
}
else{
    console.log("You are wrong!!")
}
console.log("Number of correct answer: ", correctAnswer);
