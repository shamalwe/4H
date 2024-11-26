
const m = prompt("Inserisci il coefficiente m:");
const c = prompt("Inserisci il coefficiente c:");

// Calcolo le coordinate y per le ascisse -1 e 10
const y1 = m * (-1) + c;
const y2 = m * 10 + c;

console.log("Coordinate del punto con ascissa -1: (" + y1 + ")");
console.log("Coordinate del punto con ascissa 10: (" + y2 + ")");

