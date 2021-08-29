import java.io.IOException;
    import java.util.ArrayList;
    import java.util.List;
    import java.util.Scanner;
    import java.util.Stack;
    public class BalancedParenthesisWithStack {

    /*This is purely Java Stack based solutions without using additonal 
      data structure like array/Map */

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        /*Take list of String inputs (parenthesis expressions both valid and 
         invalid from console*/

        List<String> inputs=new ArrayList<>();
        while (sc.hasNext()) {

            String input=sc.next();
            inputs.add(input);

        }

        //For every input in above list display whether it is valid or 
         //invalid parenthesis expression

        for(String input:inputs){



        System.out.println("\nisBalancedParenthesis:"+isBalancedParenthesis
        (input));
        }
    }

    //This method identifies whether expression is valid parenthesis or not

    public static boolean isBalancedParenthesis(String expression){

        //sequence of opening parenthesis according to its precedence
         //i.e. '[' has higher precedence than '{' or '('
        String openingParenthesis="[{(";

        //sequence of closing parenthesis according to its precedence
        String closingParenthesis=")}]";

        //Stack will be pushed on opening parenthesis and popped on closing.
        Stack<Character> parenthesisStack=new Stack<>();


          /*For expression to be valid :
          CHECK :
          1. it must start with opening parenthesis [()...
          2. precedence of parenthesis  should be proper (eg. "{[" invalid  
                                                              "[{(" valid  ) 


          3. matching pair if(  '(' => ')')  i.e. [{()}(())] ->valid [{)]not 
          */
         if(closingParenthesis.contains
         (((Character)expression.charAt(0)).toString())){
            return false;
        }else{
        for(int i=0;i<expression.length();i++){

        char ch= (Character)expression.charAt(i);

        //if parenthesis is opening(ie any of '[','{','(') push on stack
        if(openingParenthesis.contains(ch.toString())){
                parenthesisStack.push(ch);
            }else if(closingParenthesis.contains(ch.toString())){
        //if parenthesis is closing (ie any of ']','}',')') pop stack
        //depending upon check-3 
                if(parenthesisStack.peek()=='(' && (ch==')') || 
                    parenthesisStack.peek()=='{' && (ch=='}') ||    
                    parenthesisStack.peek()=='[' && (ch==']')
                        ){
                parenthesisStack.pop();
                }
            }
        }

        return (parenthesisStack.isEmpty())? true : false;
        }
    }
															  }