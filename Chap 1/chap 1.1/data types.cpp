/*
integer= 4 bytes
long= 8 bytes
float= 4 bytes
double= 8 bytes
character= 1 byte
sizeof(data type) can be used to return size of the data type directly; */

int dataTypes(string s) {
	if(s=="Integer")
	{
		return sizeof(int);
	}
	else if(s=="Long")
	{
		return sizeof(double);
	}
	else if(s=="Float")
	{
		return sizeof(float);
	}
	else if(s=="Double")
	{
		return sizeof(double);
	}
	else if(s=="Character")
	{
		return sizeof(char);
	}
}

/* Input: Long
   Output: 8 */
