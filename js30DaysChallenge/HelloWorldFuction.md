https://leetcode.com/problems/create-hello-world-function/solutions/3486599/solution-o-1-javascript-typescript/?utm_campaign=PostD1&utm_medium=Post&utm_source=Post&gio_link_id=QPDw0kJR&orderBy=hot



js
```
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        return "Hello World";
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
 ```

 typescript

```
function createHelloWorld(){
    return function(...args): string {
        return "Hello World";
    };
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */