

long decitobinary(long num) {
{
	long dnum, rem, base = 1, bin = 0, no_of_1s = 0;
	dnum = num;
	while( num > 0 )
 	{
		rem = num % 2;
		if ( rem == 1 )  {
			no_of_1s++;
		}
		bin = bin + rem * base;
		num = num / 2 ;
		base = base * 10;
  	}
return bin;
}
 /*Write a C function to convert the given binary number into decimal */

long btodeci(long num) {
	long bnum, dec = 0, base = 1, rem ;
	bnum = num;
	while( num > 0){
		rem = num % 10;
		dec = dec + rem * base;
		num = num / 10 ;
		base = base * 2;
	}   
	return dec;

}

