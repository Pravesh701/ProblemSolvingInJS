
//Write a recursive function that takes an array that may contain more arrays in it and returns an array with all values flattened.
// Suppose this is the input array:
// [[1], [2, 3], [4], [3, [2, 4]]]
// The output should be:
// [1, 2, 3, 4, 3, 2, 4]

let nestedArr = [[1], [2, 3], [4], [3, [2, 4, [5, [6, [7, [8, [9, [10, 11, 12]]]]]]]]];

const getFlattedArray = (nestedArr, flattened = []) => {
    if (nestedArr?.length !== 0) {
        for (let item of nestedArr) {
            if (Array.isArray(item)) {
                getFlattedArray(item, flattened)
            } else {
                flattened.push(item)
            }
        }
    } else {
        return [];
    }
    return flattened;
}
console.log('getFlattedArray', getFlattedArray(nestedArr));



