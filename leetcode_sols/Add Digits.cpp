//My recursive Solution
int addDigits(int num) {
    if (num / 10 == 0) return num;

    int sum = 0;
    while (num != 0) {
        sum += (num % 10);
        num /= 10;
    }
    return addDigits(sum);
}
//O(1) Solution, This is known as The Digital Root Solution
int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + (num - 1) % 9;
}
