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
