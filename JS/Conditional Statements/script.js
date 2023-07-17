// Declare variables
let tempType = "";
let tempInput = 0;
let temp = 0;

while (tempType.toLowerCase() !== "f" && tempType.toLowerCase() !== "c") {
  tempType = prompt("Fahrenheit or Celsius? (Input F/C):");
}

if (tempType.toLowerCase() === "f") {
  tempInput = parseFloat(prompt("Enter the temperature in Fahrenheit:"));
  console.log(`For a temperature of ${tempInput} Fahrenheit:`)
  temp = (tempInput - 32) * (5 / 9); // Convert to celsius
} else if (tempType.toLowerCase() === "c") {
  tempInput = parseFloat(prompt("Enter the temperature in Celsius:"));
  console.log(`For a temperature of ${tempInput} Celsius:`)
  temp = tempInput; // Use the celsius value
}



switch (true) {
  case temp > 30:
    console.log("It is hot outside!");
    break;
  case temp > 20:
    console.log("It is warm outside.");
    break;
  case temp > 10:
    console.log("It is cool outside.");
    break;
  default:
    console.log("It is cold outside!");
    break;
}


