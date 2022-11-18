#Compress String
Coding Problem  

Have the function StringChallenge(str) take the str parameter being passed and return a compressed version of the string using the Run-length encoding algorithm. This algorithm works by taking the occurrence of each repeating character and outputting that number along with a single character of the repeating sequence. For example: "wwwggopp" would return 3w2g1o2p. The string will not contain any numbers, punctuation, or symbols. 
Once your function is working, take the final output string and remove any characters(case-insensitive) from it that appear in your challenge Token. If the new final string is empty. return the EMPTY string.


For Example:
Input: "aabbcde"
Output: 2a2b1c1d1e
Final Output: 2a2bcde
