import java.util.*;
class colution{
public static void main(String args[]){
	
Scanner sc=new Scanner(System.in);
String s="";
for(int i=0;i<3;i++){
String k=sc.nextLine();
if(i==0){
for(int j=0;j<k.length();j++){
char a=k.charAt(j);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
	k=k.replace(a,'@');
}
}
s=s.concat(k);
continue;
}
if(i==1){
for(int j=0;j<k.length();j++){
char c=k.charAt(j);
if(c!='a'||c!='e'||c!='i'||c!='o'||c!='u'||c!='A'||c!='E'||c!='I'||c!='O'||c!='U'){
k=k.replace(c,'#');
}
}
s=s.concat(k);
continue;
}
if(i==2){
k=k.toUpperCase();
s=s.concat(k);
}
}
System.out.println(s);
}
}