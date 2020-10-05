enum class Tower(val title: String) {
  LEFT("left"),
  RIGHT("right"),
  MIDDLE("middle")
}

fun moveDisk(source: Tower, destination: Tower) =
    println("Move ${source.title}'s top disk to ${destination.title}")

fun hanoi(size: Int, source: Tower, destination: Tower) {
  //Only do this when tower is non-empty.
  if (size > 0) {
    val tmp = (Tower.values().toList() - source - destination).first()
    hanoi(size - 1, source, tmp)
    moveDisk(source, destination)
    hanoi(size - 1, tmp, destination)
  }
}enum class Tower(val title: String) {
  LEFT("left"),
  MIDDLE("middle"),
  RIGHT("right")
}

fun moveDisk(source: Tower, destination: Tower) =
    println("Move ${source.title}'s top disk to ${destination.title}")

fun solveHanoi(size: Int, source: Tower, destination: Tower) {
  if (size > 0) {
    val tmp = (Tower.values().toList() - source - destination).first()
    solveHanoi(size - 1, source, tmp)
    moveDisk(source, destination)
    solveHanoi(size - 1, tmp, destination)
  }
