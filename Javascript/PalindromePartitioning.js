/*
131. Palindrome Partitioning

Given a string s, partition s such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of s.

For example, given s = "aab",
Return

[
  ["aa","b"],
  ["a","a","b"]
]
Hide Company Tags Bloomberg
Hide Tags Backtracking
Hide Similar Problems (H) Palindrome Partitioning II
*/

/**
 * @param {string} s
 * @return {string[][]}
 */
 
    //Trans:
// DFS! This question is like subsest (digital version) replaced by string version
var partition = function(s) {
    let results = [];
    if (s === null || s.length === 0) {
        return results;
    }
    
    // traverse!!
    let partition = [];
    dfs(s, 0, partition, results);
    
    return results;
}

 console.log("\n\n partition-->",partition('aab'))

function dfs(s, startIndex, partition, results) {
	// when to exit
    if (startIndex === s.length) {
        // deep copy
        results.push(partition.slice());
        return;
    }
    
    // traverse all possibilities on this level
    for (let i = startIndex; i < s.length; i++) {
        // PM transalte:  Equivalent to adding a | separator to i, and subset is the number that takes i
        let subStr = s.slice(startIndex, i + 1);
        // end should be i, not i + 1!
        // if (!isPalindrome(s, startIndex, i)) {
        if (!isPalindrome(subStr)) {
            continue;
        }
        partition.push(subStr);
        dfs(s, i + 1, partition, results);
        partition.pop();
    }
}

// two pointers together
function isPalindrome(str) {
    for (let i = 0, j = str.length - 1; i < j; i++, j--) {
        // charAt is faster than str[i]
        if (str.charAt(i) !== str.charAt(j)) {
            return false;
        }
    }
    return true;
}


// two pointers 2
// function isPalindrome(str, start, end) {
//     // no need to check if start === end
//     while (start < end) {
//         if (str[start] !== str[end]) {
//             return false;
//         } else {
//             // remember to add and substract!!!
//             start++;
//             end--;
//         }
//     }
//     return true;
// }

// var partition = function(s) {
//     var result = [];
    
//     generate(s, 0, [], result);
    
//     return result;
// };

// var generate = function(s, index, output, result) {
//     if(index === s.length){
//         result.push(output.slice());
//         return;
//     }
    
    
//     for(var i = index; i < s.length; i++) {
//         var str = s.substring(index, i);
        
//         if(isPalindrome(s, index, i)){
//             output.push(s.substring(index, i + 1));
//             generate(s, i + 1, output, result);
//             output.pop();
//         }
//     }
// }

// var isPalindrome = function(s, head, tail) {
//     while(head < tail) {
//         if(s[head] !== s[tail]) {
//             return false;
//         }
        
//         head++;
//         tail--;
//     }
    
//     return true;
// };

