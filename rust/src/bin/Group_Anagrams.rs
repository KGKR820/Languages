use std::collections::HashMap;
fn main() {}
pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
    let mut map: HashMap<String, Vec<String>> = HashMap::new();
    for x in strs {
        let mut chars: Vec<char> = x.chars().collect();
        chars.sort_unstable();
        let sorted_key: String = chars.iter().collect();
        map.entry(sorted_key).or_insert(vec![]).push(x);
    }
    map.into_values().collect()
}
