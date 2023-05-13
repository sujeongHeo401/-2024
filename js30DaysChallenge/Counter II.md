// https://leetcode.com/problems/counter-ii/description/?utm_campaign=PostD3&utm_medium=Post&utm_source=Post&gio_link_id=xRxVYOXo



typescript

```
type ReturnObj = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

class Counter{
    init: number;
    currentCount: number;
    constructor(init){
        this.init = init;
        this.currentCount = init;
    }

    increment(){
        this.currentCount += 1;
        return this.currentCount;
    }

    decrement(){
        this.currentCount -= 1;
        return this.currentCount;
    }

    reset(){
        this.currentCount = this.init;
        return this.currentCount;
    }
}

function createCounter(init: number): ReturnObj {
    let cnt = init;
    return new Counter(init);

};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
```

javascript

```
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
class Counter{
    constructor(init){
        this.init = init;
        this.currentCount = init;
    }

    increment(){
        this.currentCount += 1;
        return this.currentCount;
    }

    decrement(){
        this.currentCount -= 1;
        return this.currentCount;
    }

    reset(){
        this.currentCount = this.init;
        return this.currentCount;
    }
}
var createCounter = function(init) {
    return new Counter(init);
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
```

Approach 3: Closure with Separately Created Functions

javascript
```
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let currentCount = init;
    function increment(){
        return ++currentCount;
    }

    function decrement(){
        return --currentCount;
    }

    function reset(){
        return (currentCount = init);
    }
    return {increment, decrement, reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
```

typescript
```
function createCounter(init: number): ReturnObj {
    let currentCount = init;
    function increment(){
        return ++currentCount;
    }

    function decrement(){
        return --currentCount;
    }

    function reset(){
        return (currentCount = init);
    }

    return {increment, decrement, reset};

};
```
