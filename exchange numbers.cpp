//There are many methods to exchange numbers in different variables.

//Temp variable method
void Method1(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}

//Add substract method
void Method2(int &a,int &b){
  a=a-b;
  b=b-a; //-->b now become  b-(a-b) since a is a-b, so b becomes a.
  a=b-a; //-->since b=a and a =a-b so b-a is a-(a-b) which is b.
}

//Xor method, fastest and safest
void Method3(int &a,int &b){
  a=a^b;
  b=b^a; //-->This is b^(a^b) and we know x^x=0 and 0^y=y,hence this becomes a.
  a=a^b; //-->Similarly a becomes b.
}
