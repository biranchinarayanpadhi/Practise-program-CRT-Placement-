import java.util.*;
class Encapsulation
{
	private String name;
	private int roll;
	public void setName(String name){
	this.name=name;
	}
	public void setRoll(int Roll){
	this.roll=Roll;
	}
	public void getName(){
	System.out.println(this.name);
	}
	public void getRoll(){
	System.out.println(this.roll);
	}
}
class solution
{
	public static void main(String args[]){
	Encapsulation es=new Encapsulation();
	es.setName("kalia");
	es.setRoll(12345);
	es.getName();
	es.getRoll();
	}
}