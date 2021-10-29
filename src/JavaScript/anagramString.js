
//First Logic with inbuild functions
// return a.split('').sort().join() === b.split('').sort().join()

//First Logic without inbuild functions
function checkAnagram(a = '', b = '') {
    var array = {};
    if (a === b) {
        return true;
    }
    if (a.length !== b.length) {
        return false;
    }
    for (let i = 0; i < a.length; i++) {
        let res = a.charCodeAt(i) - 97;
        console.log('res', res);
        array[res] = (array[res] || 0) + 1;
    }
    console.log('array', array);

    for (let j = 0; j < b.length; j++) {
        let res = b.charCodeAt(j) - 97;
        if (!array[res]) {
            return false;
        }
        array[res]--;
    }
    return true;
}

console.log(checkAnagram('helloM', 'lloehM'));