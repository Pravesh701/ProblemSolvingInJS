// Write a recursive function that will return the sum of all the positive numbers in a dictionary which may contain more dictionaries nested in it.
// Here is an example:
let obj = {
    "a": 2,
    "b": { "x": 2, "y": { "foo": 3, "z": { "bar": 2 } } },
    "c": { "p": { "h": 2, "r": 5 }, "q": 'ball', "r": 5 },
    "d": 1,
    "e": { "nn": { "lil": 2 }, "mm": 'car' }
}

let sum = 0;
const sumOfAllPositiveNumber = (obj) => {
    if (typeof obj === 'object') {
        for (let i in obj) {
            if (typeof obj[i] === 'object') {
                sum = sumOfAllPositiveNumber(obj[i])
            } else if (typeof obj[i] === 'number') {
                sum += obj[i];
            }
        }
        return sum;
    } else {
        return 0;
    }
}

console.log(sumOfAllPositiveNumber(obj))