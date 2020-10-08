func fib(_ n: Int) -> Int {
    guard n > 1 else { return n }
    return fib(n-1) + fib(n-2)
}

for i in 0...10 {
    print("Fibonnaci of \(i) is \(fib(i))")
}
