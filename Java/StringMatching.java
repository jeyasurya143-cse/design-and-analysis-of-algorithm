// String matching using brute force approach

import java.util.*;

public class StringMatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the text:");
        String text = sc.nextLine();
        System.out.print("enter the pattern to be searched:");
        String pattern = sc.nextLine();
        int index=0;
        int n= text.length();
        int m= pattern.length();
        for(int i=0;i<=n-m;i++){
            int j;
            for(j=0;j<m;j++){
                if(text.charAt(i+j)!=pattern.charAt(j)){
                    break;
                }
            }
            if(j==m){
                index=i;
            }
        }
        if(index!=0){
                System.out.println("pattern found at index :"+ index);
        }
        else{
           System.out.println("pattern not found ");
        }
    }
}
