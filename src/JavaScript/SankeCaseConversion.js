process.stdin.resume();
process.stdin.setEncoding('utf-8');

var input_ = "";

process.stdin.on('data', function (data) {
    input_ += data.toString().trim();
    input_ += '\n';
});

function caseConversion(s) {
    return s.split('').map((val, index) => {
        let carCode = val.charCodeAt();
        if (carCode >= 65 && carCode <= 90 && index !== 0) {
            return '_' + val.toLowerCase()
        } else {
            return val.toLowerCase()
        }
    }).join('')
}

process.stdin.on('end', function () {
    input_ = input_.replace(/\n$/, "");
    input_ = input_.split("\n");
    var T = parseInt(input_[0], 10);
    for (let t = 0; t <= T; t++) {
        var s = input_.shift();
        if (t != 0) {
            console.log(caseConversion(s));
        }
    }
    process.exit();
});