fn main() {}
pub fn map_word_weights(words: Vec<String>, weights: Vec<i32>) -> String {
    let mut res: String = "".to_string();
    for i in 0..words.len() {
        let mut sum = 0;
        let word_bytes = words[i].as_bytes();

        for j in 0..word_bytes.len() {
            let index = (word_bytes[j] % 97) as usize;
            sum += weights[index];
        }
        res.push(((122 - sum % 26) as u8) as char);
    }
    return res;
}
