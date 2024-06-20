#include <iostream>

// Function to calculate the sum of digits for a given number
int digitSum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// Function to calculate the sum of digits for numbers from 1 to n
long long sumOfDigitsUpToN(int n)
{
    long long totalSum = 0;
    int multiplier = 1;

    while (n > 0)
    {
        int lastDigit = n % 10;
        totalSum += (long long)digitSum(lastDigit * multiplier) * ((n + 1) / 10) * 10 + digitSum(lastDigit * multiplier);
        multiplier *= 10;
        n /= 10;
    }

    return totalSum;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        long long result = sumOfDigitsUpToN(n);
        std::cout << result << std::endl;
    }

    return 0;
}
