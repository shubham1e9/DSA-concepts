/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {

	return function(x) {
        
        for(const i of functions.reverse()) {
            x = i(x);
        }
        return x;
    }
};