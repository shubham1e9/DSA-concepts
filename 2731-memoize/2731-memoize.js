/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    const cashe = {}; 
    return function(...args) {
        const key = JSON.stringify(args);
        if(key in cashe) {
            return cashe[key];
        }
        cashe[key] = fn(...args);
        return cashe[key];
    }
}



//   let callCount = 0;
//   const memoizedFn = memoize(function (a, b) {
//  	 callCount += 1;
//     return a + b;
//   })
//   memoizedFn(2, 3) // 5
//   memoizedFn(2, 3) // 5
//   console.log(callCount) // 1 
 