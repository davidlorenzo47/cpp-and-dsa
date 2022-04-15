public class regex {
    public static void main(String[] args) {
        // Remove extra spaces between words in a sentence 
        String str = "    sds sfrsfrd r  r rfrgdgdg     ergrdg wed ef f rg rg     gerdgv d g";
        System.out.println(str.replaceAll("\\s+", " ").trim());
    }
}