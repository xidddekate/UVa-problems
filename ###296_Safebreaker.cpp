// We are observing someone playing the game of Mastermind. The object of this game is to find a secret
// code by intelligent guess work, assisted by some clues. In this case the secret code is a 4-digit number
// in the inclusive range from 0000 to 9999, say “3321”. The player makes a first random guess, say “1223”
// and then, as for each of the future guesses, gets a clue telling him how good his guess is. A clue consists
// of two numbers: the number of correct digits (in this case 1: the “2” at the third position) and the
// additional number of digits guessed correctly but in the wrong place (in this case 2: the “1” and the
// “3”). The clue would in this case be: “1/2”.
// Write a program that given a set of guesses and corresponding clues, tries to find the secret code.

// Input
// The first line of input specifies the number of test cases (N) your program has to process. Each test
// case consists of a first line containing the number of guesses G (0 ≤ G ≤ 10), and G subsequent lines
// consisting of exactly 8 characters: a code of four digits, a blank, a digit indicating the number of correct
// digits, a ‘/’ and a digit indicating the number of correct but misplaced digits.

// Output
// For each test case, the output contains a single line saying either:
// • impossible if there is no code consistent with all guesses.
// • the secret code if there is exactly one code consistent with all guesses.
// • indeterminate if there is more than one code which is consistent with all guesses.







#include <stdio.h>

int main() {
    int t, n, i, j, k;
    scanf("%d", &t);
    char f[10000][5];
    for(i = 0; i <= 9999; i++)
        sprintf(f[i], "%04d", i);
    while(t--) {
        scanf("%d", &n);
        char G[100][5], A[100], B[100];
        for(i = 0; i < n; i++) {
            scanf("%s %d/%d", G[i], &A[i], &B[i]);
        }
        int cnt = 0, ans;
        char s[5];
        for(i = 0; i <= 9999; i++) {
            s[0] = f[i][0];
            s[1] = f[i][1];
            s[2] = f[i][2];
            s[3] = f[i][3];
            for(j = 0; j < n; j++) {
                int num[10] = {}, a = 0, b = 0;
                for(k = 0; k < 4; k++) {
                    num[G[j][k]-'0']++;
                }
                for(k = 0; k < 4; k++) {
                    if(num[s[k]-'0'] > 0)
                        b++, num[s[k]-'0']--;
                }
                for(k = 0; k < 4; k++) {
                    if(s[k] == G[j][k])
                        a++, b--;
                }
                if(A[j] == a && B[j] == b)
                    continue;
                else
                    break;
            }
            if(j == n) {
                cnt++;
                ans = i;
                if(cnt == 2)
                    break;
            }
        }
        if(cnt == 1)
            printf("%04d\n", ans);
        else if(cnt == 0)
            puts("impossible");
        else
            puts("indeterminate");
    }
    return 0;
}