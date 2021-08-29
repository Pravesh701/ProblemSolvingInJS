/**
 * First way
 * @param str1 
 */

function reverseString(str1) {
    let start = 0,
        end = str1.length - 1;
    let str = str1.split("");
    while (end > start) {
        let temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    let my = str.join("")
    return my;
}

/**
 * Second Way
 * @param str1 
 */
function reverseString(str) {
    return str.split("").reverse().join("");
}


/**
 * Third way
 */
function reverseString(str) {
    var newString = "";
    for (var i = str.length - 1; i >= 0; i--) {
        newString += str[i];
    }
    return newString;
}

/**
 * Reverse a String With Recursion
 */
function reverseString(str) {
    if (str === "")
        return "";
    else
        return reverseString(str.substr(1)) + str.charAt(0);
}
console.log(reverseString("hello"));