// C++ program for the above approach 
#include <bits/stdc++.h> 

using namespace std; 

  
// MUltiply the number x with the number 
// represented by res array 

vector<int> multiply(long int n, vector<int> digits) 
{ 

  

    // Initialize carry 

    long int carry = 0; 

  

    // One by one multiply n with 

    // individual digits of res[] 

    for (long int i = 0; i < digits.size(); i++) { 

        long int result  

          = digits[i] * n + carry; 

  

        // Store last digit of 'prod' in res[] 

        digits[i] = result % 10; 

  

        // Put rest in carry 

        carry = result / 10; 

    } 

  

    // Put carry in res and increase result size 

    while (carry) { 

        digits.push_back(carry % 10); 

        carry = carry / 10; 

    } 

  

    return digits; 
} 

  
// Function to recursively calculate the 
// factorial of a large number 

vector<int> factorialRecursiveAlgorithm( 

  long int n) 
{ 

    if (n <= 2) { 

        return multiply(n, { 1 }); 

    } 

  

    return multiply( 

      n, factorialRecursiveAlgorithm(n - 1)); 
} 

  
// Driver Code 

int main() 
{ 

    long int n = 50; 

  

    vector<int> result  

      = factorialRecursiveAlgorithm(n); 

  

    for (long int i = result.size() - 1; i >= 0; i--) { 

        cout << result[i]; 

    } 

  

    cout << "\n"; 

  

    return 0; 
}