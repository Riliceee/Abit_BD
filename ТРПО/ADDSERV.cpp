#include "AbiBaseInput.h"
#include "AbiBaseView.h"
#include "AbiBaseUnit.h"
int ADDSERV()
{
	int summand1, summand2, s;
	AbiBaseInput(&summand1, &summand2);	
	s = sum(summand1, summand2); 
	AbiBaseView();
	return 0;
}

