// You are given a sequence of integers a1,a2,...,aN. An element ak is said to be an average element if there are indices i,j (with i≠j) such that ak=ai+aj2.

// In the sequence

// 3710221715
// for i=1,j=5 and k=3, we get ak=ai+aj2. Thus a3=10 is an average element in this sequence. You can check that a3 is the only average element in this sequence.

// Consider the sequence

// 3710318
// With i=1,j=4 and k=1 we get ak=ai+aj2. Thus a1=3 is an average element. We could also choose i=1,j=4 and k=4 and get ak=ai+aj2. You can check that a1 and a4 are the only average elements of this sequence.

// On the other hand, the sequence

// 38111730
// has no average elements.

// Your task is to count the number of average elements in the given sequence.

// Input:
// The first line contains a single integer N indicating the number of elements in the sequence. This is followed by N lines containing one integer each (Line i+1 contains ai). (You may assume that ai+aj would not exceed MAXINT for any i and j).

// Output:
// The output must consist of a single line containing a single integer k indicating the number of average elements in the given sequence.

// Constraints:
// You may assume that 1≤N≤10000.
// In 30% of the inputs 1≤N≤200.
// In 60% of the inputs 1≤N≤5000.
// Sample Input 1:
// 6
// 3
// 7
// 10
// 17
// 22
// 15
// Sample Output 1:
// 1
// Sample Input 2:
// 5
// 3
// 7
// 10
// 3
// 18
// Sample Output 2:
// 2
// Sample Input 3;
// 5
// 3
// 8
// 11
// 17
// 30
// Sample Output 3:
// 0
// All submissions for this problem are available.
// Author:	admin2
// Date Added:	17-09-2018
// Time Limit:	2 secs
// Source Limit:	50000 Bytes
// Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, CAML, rust, ASM, FORT, FS, LISP clisp, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM





























#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<bits/stdc++.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
};
int main() 
{
    int i,t;
    long int n;
    int count = 0;
    scanf("%ld",&n);
    int p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    qsort(p,n,sizeof(int),cmpfunc);
    for(i=0;i<n;i++)
    {
        int a = 2*p[i];
        int x =0; int y = n-1;
        while(x<y)
        {
            t = p[x]+p[y];
            if(a == t)
            {
            printf("%d  ",a);
                count++;
                break;
            }
            else if(t>a)
            {
                y--;
            }
            else
            {
                x++;
            }
        }
        
        
    }
    printf("%d ",count);
return 0;
}



