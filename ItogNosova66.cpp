int sum_of_naturals(int m, int n) {
if (m == n) {
        return m;
    } else {
        return m + sum_of_naturals(m+1, n);
    }
}

int main() {
    int m; 
    int n; 
    scanf("%d", &m);
    scanf("%d", &n);

    int sum = sum_of_naturals(m, n);
    printf("Sum of natural numbers from %d to %d is %d\n", m, n, sum);

    return 0;
}
