#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n;
    for(int i = 1; i <= t; ++i){
        scanf("%d", &n);
    
    int count = 0;
    for(int b = 1; b < n; ++b){
       int a = n-b;
        
        if(a > 0){
            count++;
           
        }
    }
    printf("%d\n", count);
}
   
    return 0;

}


/* -------Kotlin-------
 fun main() {
    val t = readLine()!!.toInt() // Read number of test cases

    repeat(t) { // Loop through test cases
        val n = readLine()!!.toInt() // Read n for each test case

        var count = 0 // Initialize count
        for (b in 1 until n) { // Loop through values of b
            val a = n - b
            if (a > 0) {
                count++
            }
        }

        println(count) // Print the count for the current test case
    }
}*/
