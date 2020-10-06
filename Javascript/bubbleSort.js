function bubbleSort(array){
    for(let i = 0; i < array.length; i++){
        for(let j = 0; j < array.length - 1 - i; j++){
            if(array[j+1] < array[j]){
                const aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
    return array
}

const array = [5, 7, 4, 100, -1, -1000, 23, 24, 0]
console.log(bubbleSort(array))
