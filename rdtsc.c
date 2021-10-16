#include <stdio.h>
int main(int argc,char **argv){
	
	unsigned long msr;

	asm volatile("rdtsc\n\t"
		"shl $32, %%rdx\n\t"
		"or %%RAX, %%rdx\n\t"
		"mov %%rdx,%0"
		:"=m"(msr)
		:
		:"rdx");
	printf("msr: %lx\n",msr);



}

