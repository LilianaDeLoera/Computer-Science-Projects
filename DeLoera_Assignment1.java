/*
 * Author: Liliana De Loera 
 * File: DeLoera_Assignment1.java
 * Description: Helps investors to purchase stocks 
 */
import java.util.Scanner;
public class DeLoera_Assignment1 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		//Taking amount of money to invest and stock ticker from user, displaying error if invalid ticker
		System.out.println("Welcome to the Stock Picker App!");
	    double amount=0;
	    System.out.println("Enter the Total Amount of Money you are Willing to Invest: ");
	    amount=sc.nextDouble();
	    String ticker;
	    System.out.println("Enter the Stock Ticker: ");
	    ticker=sc.next();
	    if(ticker.length()>5){
	        System.out.println("Invalid Input. Try again");
	        System.out.println("Enter the Stock Ticker: ");
	        ticker=sc.next();
	    }
	    //Checking if price is correct, if not displaying error
	    double price=0;
	    System.out.println("Enter the Price: ");
	    price=sc.nextDouble();
	    if(price<0.01){
	        System.out.println("Invalid Input. Try again");
	         System.out.println("Enter the price: ");
	        
	        price=sc.nextDouble();
	    }
	    //Function to take P/E ration from user
	    double PEratio=0;
	    System.out.println("Enter the P/E Ratio: ");
	    PEratio=sc.nextDouble();
	    
	    //Displaying results and warning user
	    System.out.println("Below are your Results:");
	    System.out.println("Stock: " + ticker );
	    System.out.println("Price: " + price );
	     if(PEratio>60){
	        System.out.println("WARNING:This Company may be Overvalued");
	    }
	    //Function to calculate the number of shares able to purchase
	    System.out.println("P/E Ratio: " + PEratio );
	    int number=(int)(amount/price);
	    System.out.println("# of Shares Able to Purchase: " + number  );  
	}
}