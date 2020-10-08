func findDuplicates<T: Hashable>(_ values: [T]) -> [T] {
    let groups: Dictionary = Dictionary(grouping: values, by: {$0})
    let duplicates = groups.filter { $1.count > 1 }
    return Array(duplicates.keys)
}

let characters: [String] = ["a", "b", "c", "d", "m", "n", "n", "c"]
let numbers: [Int] = [1, 2, 3, 4, 5, 3, 1, 6]
let noDuplicates: [String] = ["a", "b", "c", "d", "m", "n"]

print("Duplicate of \(characters) = \(findDuplicates(characters))")
print("Duplicate of \(numbers) = \(findDuplicates(numbers))")
print("Duplicate of \(noDuplicates) = \(findDuplicates(noDuplicates))")
