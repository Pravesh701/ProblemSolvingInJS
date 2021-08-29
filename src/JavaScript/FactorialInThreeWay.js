/**
 * Factorialize a Number With Recursion
 */
function factorialize(num) {
    // If the number is less than 0, reject it.
    if (num < 0)
        return -1;

    // If the number is 0, its factorial is 1.
    else if (num == 0)
        return 1;

    // Otherwise, call the recursive procedure again
    else {
        return (num * factorialize(num - 1));
    }
}

/**
 * Factorialize a Number with a WHILE loop
 */
function factorialize(num) {
    var result = num;
    if (num === 0 || num === 1)
        return 1;
    while (num > 1) {
        num--;
        result *= num;
    }
    return result;
}

/**
 * Factorialize a Number with a FOR loop
 */

function factorialize(num) {
    if (num === 0 || num === 1)
        return 1;
    for (var i = num - 1; i >= 1; i--) {
        num *= i;
    }
    return num;
}
console.log(factorialize(12))