import Util.MoneyUtil;
public class Main {
	public static void main(String[] args) { 
	      String number = "54452";//������ֵ
	      MoneyUtil moneyUtil=new MoneyUtil();
	      System.out.println(number + " " + moneyUtil.toChinese(number));//��ʾת�����
	      number = "30200"; 
	      System.out.println(number + " " + moneyUtil.toChinese(number));//��ʾת����� 
	      number = "30000.05"; 
	      System.out.println(number + " " + moneyUtil.toChinese(number));//��ʾת�����
	      number = "30000.00"; 
	      System.out.println(number + " " + moneyUtil.toChinese(number));//��ʾת�����   
	    } 
}
