impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        let mut max = std::i32::MIN;
        let mut sum = 0;
        for num in nums{
            if sum < 0 {
                sum = 0;
            }
            sum += num;
            if max < sum{
                max = sum;
            }
        }
        max
    }
}