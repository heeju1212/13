#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
		int ID;
		char name[100];
		float score;
	};
	
int main(int argc, char *argv[]) {
	struct student s1 = {2311111,"ARidl",4.3};
	
	s1.ID = 2344444;
	s1.name[0] = 'c';
	s1.score = 4.0;
	
	printf("ID : %d\n",s1.ID);
	printf("name : %s\n",s1.name);
	printf("score : %d\n",s1.score);
	
	
	
	
	
	
	system("PAUSE");
	return 0;
}
