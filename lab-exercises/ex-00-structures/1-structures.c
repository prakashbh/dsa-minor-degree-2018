/// Rectify the syntax and data-type errors

struct bunk_class
{
	int sem;
	int no_of_students;
 	char reason;
	char punishment[20];
};


struct person details
{
	char name[30];
	char DOB[20];
	char sex[8];
	int age;
	int height;
	int weight;
	char unique_id[30];
	char permanent_address;
	char contact_id[30];
}


struct student
{
	char name[20];
	int roll;
	float exam1_marks;
	float exam2_marks;
	float exam3_marks;
	int avg_marks;
};


struct iPod
{
	char type[20];
	float cost;
	float memory;
	int id;
};


struct browser
{
	char name[20];
	char owner[20];
  	float version;
  	int add_ons[3][20];
};
