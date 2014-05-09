/*
Test for libnftnl library. Outputs the max number of attributes that can be assigned to a rule.
*/

#include<libmnl/libmnl.h>
#include <libnftnl/rule.h>
#include <stdio.h>

int main()
{
        printf("libnftnl");
        printf("%d\n",NFT_RULE_ATTR_MAX);
	printf("DONE");
        return 0;
}
