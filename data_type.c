#include<stdio.h>

int main(){
//1..Data type--------------Memory---------------range--------------------------Specifier
//1. integer-------4 bytes(32bits)-------- -2,147,483,648 to 2,147,483,647---------%d 
int number =-12;
printf("This is integer %d\n", number);

//2. unsignedInteger -----4 bytes(32bits)----0 to 4,294,967,295 ----------------%u
unsigned int num2=34532;
printf("This is unsigend int: %u\n",num2);

//3. short int------------2 bytes(16 bits)----- -32,768 to 32,767---------------%hd
short int num3=-3343;
printf("This is short int %hd\n", num3); 

//3. unsigned short int------------2 bytes(16 bits)----- -0 to 65,535 ---------------%hu
unsigned short int num4=3343;
printf("This is unsigned short int %hu\n", num4); 
 
////4. long int------------ 4bytes(32 bits)----- -2,147,483,648 to 2,147,483,647 ---------------%ld(long int is almost similar of int)
long int num5=34354;
printf("This is long int %ld\n", num5);
 
 ////5. unsigned long int------------ 4bytes(32 bits)----- 0 to 4,294,967,295 ---------------%lu
unsigned long int num6=34354;
printf("This is unsigned long int %lu\n", num6);


//6. long long int------------ 8 bytes(64 bits)----- -(2^63) to (2^63)-1 ---------------%lld
long long int num7=-43345;
printf("This is long long int %lld\n", num7);


///7. unsigned long long int------------ 8 bytes(64 bits)----- 0 to 18,446,744,073,709,551,615  ---------------%llu

unsigned long long int num8=9999999999803;
printf("This is unsigned long long int %llu\n", num8);

//8. char------------ 1 bytes(8 bits)----- -128 to 127   ---------------%c
char a='A';
printf("This is character %c\n",a);
//8. unsigned char------------ 1 bytes(8 bits)----- 0 to 256   ---------------%c
unsigned char b='B';
printf("This is nusigned Character %c\n",b);

//9. float------------ 4 bytes(32 bits)-----  ---------------%f
float float_number=233.44;
printf("This is float Number %f\n",float_number);


//10. double------------ 8 bytes(64 bits)-----   ---------------%lf

double double_num=32433323;
printf("This is double Number %lf\n",double_num);


//11. long double------------ 16 bytes(128 bits)-----   ---------------%Lf

long double last=44342333333334;
printf("This is long double %lf\n",last);
printf("Size of long double %l f", sizeof(double_num));

return 0;
};
