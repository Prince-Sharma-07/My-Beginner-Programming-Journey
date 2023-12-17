import java.util.Scanner;
public class Hackerrankifelse{
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);
        int n = myObj.nextInt();
        myObj.close();
        if(n%2!=0){
            System.out.println("Weird");
        }
            else if(n>=2 && n<=5 && n%2==0){
                    System.out.println("Not Weird");
            }
                else if(n>=6 && n<=20 && n%2==0){
                        System.out.println("Weird");
                }
                else if(n>20 && n%2==0){
                    System.out.println("Not Weird");
                }
            }
            }