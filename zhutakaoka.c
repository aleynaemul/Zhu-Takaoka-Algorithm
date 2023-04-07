#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Maksimum string uzunluğu

// Zhu-Takaoka algoritması
int zhu_takaoka(char *s1, char *s2) {
    int n = strlen(s1);
    int m = strlen(s2);
    int d[n+1][m+1];
    int i, j, cost;
    for (i = 0; i <= n; i++) {
        d[i][0] = i;
    }
    for (j = 0; j <= m; j++) {
        d[0][j] = j;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1]) {
                cost = 0;
            }
            else {
                cost = 1;
            }
            d[i][j] = minimum(d[i-1][j] + 1,       // Silme işlemi
                              d[i][j-1] + 1,       // Ekleme işlemi
                              d[i-1][j-1] + cost); // Değiştirme işlemi
        }
    }
    return d[n][m];
}

// Minimum değeri bulur
int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    char s1[MAX_LEN] = "merhaba";
    char s2[MAX_LEN] = "merhabalar";
    int distance = zhu_takaoka(s1, s2);
    printf("Distance between %s and %s is %d\n", s1, s2, distance);//kelimeler arasındaki mesafeyi hesaplıyor 
    return 0;
}