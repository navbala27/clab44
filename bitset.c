#include <stdio.h>
#define SIZE_44 9
int a_44[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
int b_44[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

void insert_44();
void output_44(int s[]);
void union_44();
void intersection_44();
void difference_44();

void main(){
	int choice_44 = 0;
	
	while(choice_44 != 5){
		printf("\n\nEnter your choice : \n1.Insert\n2.Union\n3.Intersection\n4.Difference\n5.Exit\nYour choice : ");
		scanf("%d", &choice_44);
		
		switch(choice_44){
			case 1: insert_44();
				  break;
			case 2: union_44();
				  break;
			case 3: intersection_44();
				  break;
			case 4: difference_44();
				  break;
			case 5:
				  break;
				  
			default: printf("\nInvalid choice");
		}
	}
}

void insert_44(){
	for(int i_44 = 0; i_44 < 9; i_44++){
		a_44[i_44] = 0;
		b_44[i_44] = 0;
	}


	int size_44, x_44;
	printf("\nEnter size of first set: ");
	scanf("%d", &size_44);
	printf("\nEnter elements to first set\n");
	for(int i_44 = 0; i_44 < size_44; i_44++){
		printf("\nEnter element %d : ", i_44 + 1);
		scanf("%d", &x_44);
		a_44[x_44-1] = 1;
	}
	
	printf("\nEnter size of second set: ");
	scanf("%d", &size_44);
	printf("\nEnter elements to second set");
	for(int i_44 = 0; i_44 < size_44; i_44++){
		printf("\nEnter element %d : ", i_44 + 1);
		scanf("%d", &x_44);
		b_44[x_44-1] = 1;
	}
	
}

void output_44(int s_44[]){
	printf("\n{ ");
	for(int i_44 = 0; i_44 < SIZE_44; i_44++){
		if(s_44[i_44] == 1){
			printf("%d, ", i_44+1);
		}
	}
	printf("}");	
}

void union_44(){
	int uni_44[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	for(int i_44 = 0; i_44 < SIZE_44; i_44++){
		if(a_44[i_44] == 1 || b_44[i_44] == 1){
			uni_44[i_44] = 1;
		}
	}
	printf("\nUnion of sets..\n\n");
	output_44(uni_44);
}

void intersection_44(){
	int inter_44[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	for(int i_44 = 0; i_44 < SIZE_44; i_44++){
		if(a_44[i_44] == 1 && b_44[i_44] == 1){
			inter_44[i_44] = 1;
		}
	}
	printf("\nIntersection of both sets..\n");
	output_44(inter_44);	
}

void difference_44(){
	int diff_44[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	for(int i_44 = 0; i_44 < SIZE_44; i_44++){
		diff_44[i_44] = a_44[i_44];
		if(a_44[i_44] == 1 && b_44[i_44] == 1){
			diff_44[i_44] = 0;
		}

	}
	printf("\nSet 1 - Set 2\n\n");
	output_44(diff_44);
}