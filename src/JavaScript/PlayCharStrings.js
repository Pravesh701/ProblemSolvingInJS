var input = 'hiokkkMY'
console.log(input.split('').map(val => {
    let chareCode = val.charCodeAt()
    if (chareCode >= 65 && chareCode <= 90) {
        return val.toLowerCase()
    } else if (chareCode >= 97 && chareCode <= 122) {
        return val.toUpperCase()
    } else {
        return val;
    }
}).join(''))