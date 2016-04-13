public class Solution {
  public boolean canWinNim(int n) {
    return !(n % 4 == 0);
  }

  public static void main(String[] args) {

    int[] testCase = {1, 2, 3, 4, 9, 12};
    Solution s = new Solution();
    for (int i=0; i<testCase.length; i++) {
      System.out.println("[" + testCase[i] + "]:" + 
          s.canWinNim(testCase[i]));
    }
  }
}

