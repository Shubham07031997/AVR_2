#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int main(void)
{
  unsigned char mylist[]="012345ABCD";
unsigned char z;
DDRB=0xFF;
while(1)
{
for(z=0;z<10;z++)
{
 PORTB=mylist[z];
 _delay_ms(50);//send a char to portb
 }
}
 return 0;
 }

