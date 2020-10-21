const range = (s: number, e: number) => Array.from({ length: (e - s) }, (v, k) => k + s);

function fizzbuzz() {
    for (let i of range(1, 100)) {
        if (i % 15 == 0) {
            console.log("FizzBuzz");
        } else if (i % 3 == 0) {
            console.log("Fizz");
        } else if (i % 5 == 0) {
            console.log("Buzz");
        } else {
            console.log(i);
        }
    }
}

fizzbuzz();
