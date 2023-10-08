#include <stdio.h>
#include <string.h>

int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else {
        return recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int n, pal;
    char str[1001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cnt = 0;
        scanf("%s", &str);
        pal = isPalindrome(str);
        printf("%d %d\n", pal, cnt);
    }

}