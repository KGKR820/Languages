fn main() {}
pub fn coin_change(coins: Vec<i32>, amount: i32) -> i32 {
    let mut dp = vec![amount + 1; (amount + 1) as usize];
    dp[0] = 0;
    for coin in coins {
        for i in coin..amount + 1 {
            dp[i as usize] = dp[i as usize].min(dp[(i - coin) as usize] + 1);
        }
    }
    if dp[amount as usize] > amount {
        return -1;
    }
    return dp[amount as usize];
}
