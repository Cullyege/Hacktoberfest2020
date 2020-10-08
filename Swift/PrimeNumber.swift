import Foundation

func isPrime(_ n: Int) -> Bool {
    guard n >= 2 else { return false }
    guard n != 2 else { return true }
    guard n % 2 != 0 else { return false }
    return !stride(from: 3, through: Int(sqrt(Double(n))), by: 2).contains { n % $0 == 0 }
}

for i in 0...20 {
    print("\(i) is prime: \(isPrime(i))")
}

