export const TestJS = (params) => { }

// Search JS object
//Write a function called contains that searches for a value in a nested object. It returns true if the object contains that value.

var nestedObject = {
    data: {
        info: {
            stuff: {
                thing: {
                    moreStuff: {
                        magicNumber: 46,
                        something: 49
                    }
                }
            }
        },
        song: {
            stuff1111: {
                thing1111: {
                    moreStuff11111: {
                        magicNumber111: 40,
                        something111: 44
                    }
                }
            }
        }
    }
}

function contains(nestedObject, value) {
    let val = false;
    for (let i in nestedObject) {
        console.log('i', i)
        if (nestedObject[i] === value) {
            val = true
        }
        if (typeof nestedObject[i] === 'object') {
            val = contains(nestedObject[i], value)
        }
    }
    return val;
}


let hasIt = contains(nestedObject, 44); // true
console.log('hasIt', hasIt)


//Write a recursive function that takes an array that may contain more arrays in it and returns an array with all values flattened.
// Suppose this is the input array:
// [[1], [2, 3], [4], [3, [2, 4]]]
// The output should be:
// [1, 2, 3, 4, 3, 2, 4]



// Write a recursive function that will return the sum of all the positive numbers in a dictionary which may contain more dictionaries nested in it.
// Here is an example:
// obj = {
//   "a": 2,
//   "b": {"x": 2, "y": {"foo": 3, "z": {"bar": 2}}},
//   "c": {"p": {"h": 2, "r": 5}, "q": 'ball', "r": 5},
//   "d": 1,
//   "e": {"nn": {"lil": 2}, "mm": 'car'}

// This should return 10. Because this dictionary contains five 2s and no other even numbers.
// Here is the python solution:
// def evenSum(obj, sum=0):
//     for k in obj.values():
//         if type(k) == int and k%2 ==0:
//             sum += k
//         elif isinstance(k, dict):
//             sum += evenSum(k, sum=0)
//     return sum




























