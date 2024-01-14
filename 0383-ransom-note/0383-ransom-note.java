class Solution {
    public boolean canConstruct(String r, String m) {
        HashMap<Character,Integer> mp=new HashMap<>();
        for(int i=0;i<m.length();i++)
        {
            int temp=1;
            if(mp.containsKey(m.charAt(i)))
            {
                temp=mp.get(m.charAt(i))+1;
            }
            mp.put(m.charAt(i),temp);
        }
        for(int i=0;i<r.length();i++)
        {
            if(mp.containsKey(r.charAt(i))&&mp.get(r.charAt(i))>0)
            {

                int temp=mp.get(r.charAt(i))-1;
                
                mp.put(r.charAt(i),temp);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}