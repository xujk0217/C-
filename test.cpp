#include <iostream>
using namespace std;

int countCombinations(int amount, int index, int coins[], int coinCount) {
    if (amount == 0) {
        return 1; // 当金额为0时，只有一种组合，即不选择任何硬币
    }
    
    if (amount < 0 || index == coinCount) {
        return 0; // 当金额小于0或者已经遍历完所有硬币面额时，无法形成组合，返回0
    }

    // 递归计算不选择当前硬币和选择当前硬币两种情况的组合数之和
    return countCombinations(amount, index + 1, coins, coinCount) + 
           countCombinations(amount - coins[index], index, coins, coinCount);
}

int main() {
    int coins[] = {1, 5, 10, 50};
    int coinCount = sizeof(coins) / sizeof(coins[0]);
    int amount = 50; // 要换的金额

    int combinations = countCombinations(amount, 0, coins, coinCount);
    cout << "Number of combinations: " << combinations << endl;

    return 0;
}
