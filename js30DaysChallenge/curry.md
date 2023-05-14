https://leetcode.com/problems/curry/editorial/?utm_campaign=DailyD10&utm_medium=Email&utm_source=Daily&gio_link_id=L9G7N0M9


javascript

```
/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function(fn) {
    return function curried(...args) {
        if(args.length>=fn.length){
            return fn.apply(this, args);
        }

        return curried.bind(this, ...args);

    };
};

```

typescript
```
function curry(fn: Function): Function {
    return function curried(...args:any[]):any {
        if(args.length >= fn.length){
            return fn.apply(this, args);
        }

        return curried.bind(this, ...args);
    };
};

```

어렵지만 맛있고 재밌는 *자타(바입)스크리트
