https://leetcode.com/problems/create-hello-world-function/editorial/?utm_campaign=PostD1&utm_medium=Post&utm_source=Post&gio_link_id=QPDw0kJR

### Function Syntax

* Javascript
```
var createHelloWorld = function() {
    return function() {
        return "Hello World";
    }
};
```

* Typescript
```
var createHelloWorld = function(){
    return function(): string{
        return "Hello World";
    }
};
```

### Arrow Syntax

* Javascript
```
var createHelloWorld = function() {
    return () => "Hello World";
};
```

* Typescript
```
var createHelloWorld = function(){
    return () => "Hello World";
};
```

### Arrow Syntax + Rest Arguments

* Javascript 
```
var createHelloWorld = function(){
    return(...args) => "Hello World";
};
```

* TypeScript
```
var createHelloWorld = function(){
    return (...args:any[]) => "Hello World";
};
```

타입스크립트 맛있당
