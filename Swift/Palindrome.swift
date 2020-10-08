print("Input text: ")
if let input = readLine() {
    print(isPalindrome(input))
}

func isPalindrome(_ value: String) -> Bool {
    if value == String(value.reversed()) {
        return true
    }
    return false
}
