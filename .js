let ladoA = 6;
let ladoB = 4;
let ladoC = 8;


if (ladoA === ladoB && ladoB === ladoC) {
    
    console.log("El triángulo es Equilátero.");

} else if (ladoA === ladoB || ladoA === ladoC || ladoB === ladoC) {
   
    
    
    console.log("El triángulo es Isósceles.");

} else {
    console.log("El triángulo es Escaleno.");
}