export const TestJS = (params) => { }

let name = {
    first: 'Pravesh',
    second: 'Singh',
}

function mybindMethod() {
    console.log('first = ', this.first, 'second = ', this.second);
}
let calledBind = mybindMethod.bind(name)
calledBind()

Function.prototype.mybind = function (...args) {
    let obj = this;
    let params = args.slice(1)
    return function (...args2) {
        obj.apply(args[0], [...params, ...args2])
    }
}

let myBindCalled = mybindMethod.mybind(name)
myBindCalled()