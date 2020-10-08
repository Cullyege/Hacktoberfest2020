func fib(_ n: Int) -> Int {
    var a = 1
    var b = 1
    guard n > 1 else { return a }
    
    (2...n).forEach { _ in
        (a, b) = (a + b, a)
    }
    return a
}

for i in 0...10 {
    print("Fibonnaci of \(i) is \(fib(i))")
}
