/**
 * @return {Function}
 */
// var createHelloWorld = function() {
//     return function(...args) {
//         return "Hello World"
//     }
// };

let createHelloWorld = () => {
    return () => {
        return "Hello World"
    }
}
/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */