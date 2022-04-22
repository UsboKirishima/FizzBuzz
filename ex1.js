let s = "";

for (let i = 1; i <= 100; i++) {
    let r = ""
    if (i % 3 == 0) {
        r += "Fizz"
    }
    if (i % 5 == 0) {
        r += "Buzz"
    }
    if (i % 3 != 0 && i % 5 != 0) {
        r = i
    }
    console.log(r)
}