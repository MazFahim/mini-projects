const prompt = require("prompt-sync")();
let wins = 0;
let losses = 0;
let ties = 0;

while(true){
    const playerChoice = prompt("Ente rock, paper or scissors(or q to quit): ");
    if(playerChoice.toLowerCase()==="q"){
        break;
    }
    if (playerChoice!=="rock"&&
    playerChoice!=="paper"&&
    playerChoice!=="scissors"){
        console.log("Please enter a valid playerChoice");
        continue;
    }

    const choices = ["rock", "paper", "scissors"];
    const randomIndex = Math.round(Math.random()*2);
    const computerChoices = choices[randomIndex];
    console.log("The computer chose: ",computerChoices);

    if(computerChoices===playerChoice){
        console.log("draw!");
        ties++;
    }
    else if((playerChoice==="paper" && playerChoice==="rock")||
    (playerChoice==="rock" && playerChoice==="scissors")||
    (playerChoice==="scissors" && playerChoice==="paper")){
        console.log("Won!");
        wins++;
    }
    else{
        console.log("Lost!");
        losses++;
    }
}
console.log("Wins: ",wins,"Losses: ",losses,"Ties: ",ties);