public class string_opertion {
    public static void main(String[] args) {
        String s = "Hello, my namae is manav merja my id no. is 24DCE074!";

       // System.out.println(s.length());

       System.out.println(s.charAt(2));

        System.out.println(s.substring(0,16));

        System.out.println(s.trim());

        String s1 ="test";
        String s2 = "test";

        System.out.println(s1.equals(s2));


        System.out.println(s.trim());


        s1.equals(s2);

        s1.equalsIgnoreCase(s2);

        s.contains("manav");

        s.startsWith("me");

        s.endsWith("id");


        System.out.println(s.indexOf('m'));

        System.out.println(s.lastIndexOf('m'));

       // System.out.println(s.replace(0));

       //  System.out.println(s.replaceAll(''));


          String s3 = "apple,banana,cherry";
        String[] fruits = s3.split(",");
        for (int i = 0; i < fruits.length; i++) {
            System.out.println(fruits[i]);
        }

        String s4 = "Hello";  // Define s before using it in s.toCharArray()
        char[] arr = s4.toCharArray();
        for (char c : arr) {
            System.out.println(c + " ");
        }

        int num = 123;
        String so = String.valueOf(num);
        System.out.println(so + "45"); // prints 12345
    }
}
