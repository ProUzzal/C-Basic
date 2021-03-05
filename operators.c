#include<stdio.h>\

int main(){

//Operators in C

//1. Arithmetic Operators: (+, -, *, /, %, ++, --);

int sum=0, sub, multiple, division, modulus, a, b, x=9;
scanf("%d %d", &a, &b);

printf("Summation of Sum = %d\n", a+b);
printf("Summation of Sub = %d\n", a-b);
printf("Summation of Multiplication = %d\n", a*b);
printf("Summation of Division = %d\n", a/b);
printf("Summation of Modulus = %d\n", a%b);
printf("Increment operator %d\n",x++);
printf("Decrement operator %d\n",x--);

//2. Assignment Operators:( =, +=, -=, *=, /=, %=);
printf("%d\n", sum+=a);//Every assignment operators work in this way

//3. Relational Operators :(<, , <=, >,>=,  ==, )- Relational operators is used to make a conditional statement. 

if (a>b)
{
    printf(" yes it is true\n");
}
else
{
    printf("It is false\n");
}
printf("Result %d\n",a>b);

//All the operators work like this way.

//4. Logical Operators ( &&, || , !)
//Logical &&(and ) works or return boolean type data (true=1 , false=0) if both operands are true. 
int p=5,q=4, result;

result=((p==q)&&(q<p));
printf("%d\n",result);
result=((p!=q)&&(q<p));
printf("%d\n",result);

result=!((p!=q)&&(q<p));
printf("%d\n",result);

//5. Bitwise Operator(&, |, `, >>, <<):

// Logical &(and): Logical and only receive 1 if both binary value is 1
//Bitwise |(Or): Bitwise or only recive 1 if any of operand value is 1.
// Xor (` - Exclusive or): It only receive 1 if two operands are oposite.
//>>(Right Shift): Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.
//<< (Left Shift): Left shift operator shifts all bits towards left by a certain number of specified bits. The bit positions that have been vacated by the left shift operator are filled with 0. The symbol of the left shift operator is <<.

// To know more about bitwise operaotrs . Just visit the web page: https://www.program
//Increment and decrement Operators
printf("Increment + Operator %d\n",a++);
printf("Increment - Operator %d\n",a--);
printf("Increment - Operator %d\n",a);
printf("Increment + Operator %d\n",++a);
printf("Increment - Operator %d\n",--a);
printf("Increment - Operator %d",a);
    return 0;
}