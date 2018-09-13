import java.util.*;
class Animal{
	public void legs(){
	System.out.println("Animal has four legs"); 
	}
public void fun(){
System.out.println("Lets have some more fun");
}

}
class kangaroo extends Animal{
public void legs(){
	System.out.println("But Kangaroo has two legs");
}
public void fun1(){
System.out.println("Lets have some more fun");
}
public static void main(String args[]){

	Animal ani=new kangaroo();
	ani.legs();
	kangaroo kaa=(kangaroo)new Animal();
	kaa.legs();
	kaa.fun();	
}
}