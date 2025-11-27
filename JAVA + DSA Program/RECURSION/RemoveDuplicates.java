public class RemoveDuplicates {
    public static void removeDuplicates(String str,int idx, StringBuilder newstr, boolean map[] ) {
        if(idx == str.length()){
            System.out.println(newstr);
            return;
        }

        char currchar = str.charAt(idx);
        if(map[currchar - 'a'] == true){
            //duplicste find
            removeDuplicates(str,idx+1 , newstr, map);
        }
        else{
            map[currchar - 'a'] = true;
            removeDuplicates(str, idx+1, newstr.append(currchar), map);
        }


    }
    public static void main(String[] args) {
        String str = "aabbccddeeff";
        removeDuplicates(str,0,new StringBuilder(""), new boolean[26]);
        
    }
}
