//create a stack with private data and only expose the API methods. Let's do this!
const buildStack = () => {
  let items = [];

  const push = (item) => items = [item, ...items];
  const pop = () => items = items.slice(1);
  const peek = () => items[0];
  const isEmpty = () => !items.length;
  const size = () => items.length;

  return {
    push,
    pop,
    peek,
    isEmpty,
    size,
  };
};
/*
*Because we created the items stack inside our buildStack function, it is "private". It can be accessed only within the function. In this case, only push, pop, and so one could touch the data. This is exactly what we're looking for.
*/
//And how do we use it? Like this:

const stack = buildStack();

stack.isEmpty(); // true

stack.push(1); // [1]
stack.push(2); // [2, 1]
stack.push(3); // [3, 2, 1]
stack.push(4); // [4, 3, 2, 1]
stack.push(5); // [5, 4, 3, 2, 1]

stack.peek(); // 5
stack.size(); // 5
stack.isEmpty(); // false

stack.pop(); // [4, 3, 2, 1]
stack.pop(); // [3, 2, 1]
stack.pop(); // [2, 1]
stack.pop(); // [1]

stack.isEmpty(); // false
stack.peek(); // 1
stack.pop(); // []
stack.isEmpty(); // true
stack.size(); // 0
