fn main() {
    println!("{}", zig_zag_arrays(3, 4, 6));

    /*
     * Zig Zag -> Up,Down,Up,Down.....{Ex:5,4,6}
     * dp[j] => ending with range[j](4,5,6) via up(i -> odd) or down (i -> even)
     *
     *       4 5 6
     * 0 -> [1 1 1] Initial case
     * 1 -> [0 1 2] Up so normal prefix sum
     * 2 -> [3 2 0] Down reverse prefix sum(suffix sum)
     * 2 -> [0 3 5] Up ....
     */
}
pub fn zig_zag_arrays(n: i32, l: i32, r: i32) -> i32 {
    const MOD: i32 = 1000000007;

    // No.of ele in range and init dp with all 1
    let m: usize = (r - l + 1) as usize;
    let mut dp: Vec<i32> = vec![1; m];

    for i in 1..n as usize {
        let mut ps = 0;
        if i % 2 == 0 {
            // Even index suffix sum (DOWN)
            for j in (0..m).rev() {
                let temp = dp[j];
                dp[j] = ps;
                ps = (ps + temp) % MOD;
            }
        } else {
            // Odd index prefix sum (UP)
            for j in 0..m {
                let temp = dp[j];
                dp[j] = ps;
                ps = (ps + temp) % MOD;
            }
        }
    }
    let mut out: i32 = 0;
    for i in 0..m {
        out = (out + dp[i]) % MOD;
    }
    return (out * 2) % MOD;
}
