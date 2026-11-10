class Solution {
    public List<List<String>> findMismatchedSegments(String s1, String s2) {
        List<List<String>> ans = new ArrayList<>();
        int n = s1.length();
        int i = 0;
        while (i < n) {
            if (s1.charAt(i) == s2.charAt(i)) 
            {
                i++;
                continue;
            }
            int st = i;
            while (i < n && s1.charAt(i) != s2.charAt(i))  i++;
            String st1 = s1.substring(st, i);
            String st2 = s2.substring(st, i);
            ans.add(Arrays.asList(st1, st2));
        }
        return ans;
    }
}
