process.stdin.resume();
process.stdin.setEncoding('utf-8');

var input_ = "";

process.stdin.on('data', function (data) {
    input_ += data.toString().trim();
    input_ += '\n';
});

function caseConversion(s) {
    // Write your code here that converts the given camel case string s  and
    // returns a snake case version of that string

}

process.stdin.on('end', function () {
    input_ = input_.replace(/\n$/, "");
    input_ = input_.split("\n");
    var T = parseInt(input_[0], 10);
    for (int t_i = 0; t_i < T; t_i++) {
    var s = input_.shift();

    var res = caseConversion(s);
    process.stdout.write(out_);
    output.write('\n');
}

process.exit();

});