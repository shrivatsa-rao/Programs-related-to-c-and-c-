const kelvin=293;//The value saved to kelvin will stay constant
const celsius=kelvin-273;
// convert Kelvin to Celsius by subtracting 273 from the kelvin variable. Store the result in another variable, named celsius.
Fahrenheit = celsius * (9/5) + 32;


//we will round the number saved to fahrenheit
Fahrenheit=Math.floor(Fahrenheit);
console.log(`The temperature is ${Fahrenheit} degrees Fahrenheit.`);

let newton = celsius * (33 / 100);
 
// Round down
newton = Math.floor(newton);
 
console.log(`The temperature is ${newton} degrees Newton.`);