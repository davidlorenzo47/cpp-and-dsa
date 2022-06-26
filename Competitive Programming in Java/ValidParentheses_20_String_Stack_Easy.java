import java.util.Scanner;

class Solution{
    public boolean isValid(String s) {
        java.util.Stack<Character> stack = new java.util.Stack<>();
        for(int i = 0; i < s.length(); i++) {
            char a = s.charAt(i);
            if(a == '(' || a == '[' || a == '{') stack.push(a);
            else if(stack.empty()) return false;
            else if(a == ')' && stack.pop() != '(') return false;
            else if(a == ']' && stack.pop() != '[') return false;
            else if(a == '}' && stack.pop() != '{') return false;
        }
        return stack.empty();
    }
}

public class aaaauxiliary {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String s;

        System.out.print("Enter the value of s: ");
        s = sc.nextLine();

        Solution soln = new Solution();
               
        sc.close();

        System.out.print("Answer is: "+soln.isValid(s));
    }
}