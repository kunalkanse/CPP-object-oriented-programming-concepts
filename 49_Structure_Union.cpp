# include<stdio.h>
#include<stdlib.h>

int main()
{
	// Structure is collection of premitive , user defined and derived data types

////////////////////////////////////////////////////////////////////////

	// Structure which contains Premitive data types
	struct demo1
	{
		int i;
		char c;
		float f;
		double d;
	};

////////////////////////////////////////////////////////////////////////

	// Structure which contains Derived data types
	struct demo2
	{
		int arr[10];
		char brr[10];
	};

////////////////////////////////////////////////////////////////////////

	// Structure which contains User defined data types
	struct demo3
	{
		struct demo4
		{
			int i;
		};
	};
////////////////////////////////////////////////////////////////////////

	// We can create array if structure variables as

	struct temp
	{
		int i;
	}tobj[10];

	// In this case tobj is array of 10 element and each member is 
	// of type struct temp

////////////////////////////////////////////////////////////////////////

	// Accessing structure members
		
	// Direct accessing
	struct demo4
	{
		int i;
	};

	// obj4 is a variable of type struct demo4
	struct demo4 obj4;

	// Assigning value of i
	// . operator used for direct accessing
	obj4.i = 4;

	printf("Value of i through direct accessing is %d\n",obj4.i);

////////////////////////////////////////////////////////////////////////

	// Indirect accessing
	struct demo5
	{
		int i;
	};
	struct demo5 obj5;

	// ptr5 is a pointer which stores address of struct demo5
	struct demo5 *ptr5;

	ptr5 = &obj5;
	// -> operator used for indirect accessing
	ptr5 -> i = 10;

	printf("Value of i through indirect accessing is %d\n",ptr5->i);

////////////////////////////////////////////////////////////////////////

	// We can allocate memory for structure dynamically by using malloc or calloc

	struct hello
	{
		int i,j;
	};

	struct hello *p = (struct hello*)malloc(sizeof(struct hello));
	if(p == NULL)
	{
		printf("Unable to allocate memory\n");
	}

////////////////////////////////////////////////////////////////////////

	// Initializing the structure at the time of definig variable by using
	// member initialisation list

	struct demo6
	{
		int i;
		char c;
		float f;
	};

	// This is called as member initialisation list
	struct demo6 obj6 = {10,'A',3.12f};

////////////////////////////////////////////////////////////////////////

	// We can not initialise structre while declaring the structure
	// Because at that time memory is not allocated

	struct demo7
	{
	//	int i = 12;	//Error
	};

////////////////////////////////////////////////////////////////////////

	// Nested structure : Means defining structure inside another structure

	// inner1 is a inner structure inside outer1 structure
	struct outer1
	{
		int i;	
		struct inner1
		{
			int j;
		}iobj1;
	}oobj1;
	
	// To access member j we can use statement as

	oobj1.iobj1.j = 10;

////////////////////////////////////////////////////////////////////////

	// Nested structure

	// If the inner structure defined inside the outer structure then
	// we have to create object of that structure at the time of defination
	// Because after that we can not create object outside

	struct outer5
	{
		int i;	
		struct inner5
		{
			int j;
		};
	}oobj5;
	
	// In this case there is no error but memory for inner5 structure is
	// not allocated

////////////////////////////////////////////////////////////////////////
	
	// Nested structure

	// In this case inner structure is defined outside the outer structure
	struct inner2
	{
		int j;
	};

	struct outer2
	{
		int i;
		struct inner2 iobj2;
	};

	struct outer2 oobj2;
	
	// We can access member j in same manner as above
	oobj2.iobj2.j = 10;

////////////////////////////////////////////////////////////////////////	

	// We can not use object of same structure as member of itself
	// Because at that time compiler unable to decide size of the structure

	struct outer3
	{
		int i;
	//	struct outer3 obj;		//Error
	};

////////////////////////////////////////////////////////////////////////	

	// Self referential structure
	// It is a tructure which contains pointer which stores address of itself
	// This consept is allowed because in any case pointer requires 4 bytes

	struct outer4
	{
		int i;
		struct outer3 *ptr;
	};

////////////////////////////////////////////////////////////////////////	

	// We can use typedef for creating our new data type for the structure

	typedef struct demo8
	{
		int i;
	}newtype1;

	// To create variable of struct demo7 we can use syntax as
	newtype1 obj7;

	// We can use typedef in this way also
	typedef struct demo8 newtype2;

////////////////////////////////////////////////////////////////////////	

	// If structure contians N members and we initialise M members (N > M)
	// Then remaining members contains garbage.

	struct demo9
	{
		int i;
		int j;
		int k;
	}obj9;

	obj9.i = 10;
	obj9.j = 20;
	// obj9.k contains some garbage values

////////////////////////////////////////////////////////////////////////	

	// We can use enum as a member of structure

	enum hello3 {a, b, c};

	struct demo10
	{
		int i;
		enum hello3 obj;
	}obj10;

	// We can initialise this enum variable as
	obj10.obj = a;

////////////////////////////////////////////////////////////////////////	

	// We can check size of the structure by using sizeof operator

	struct demo11
	{
		int i;
		int j;
	};

	printf("Size of struct demo11 is %d\n",sizeof(demo11));	// size  = 8

////////////////////////////////////////////////////////////////////////

	// If structure only contains characters then memory is allocated
	// in one byte ata atime

	struct demo14
	{
		char c;
		char d;
		char e;
	}obj14;

	printf("\n\nSize of structure is %d\n",sizeof(demo14));

////////////////////////////////////////////////////////////////////////	

	// In 32 bit processor memory is allocated in 1 WORD (4 bytes)size alignment
	// If size of data member is less than 4 bytes then remaining bytes are\
	// considered as a padding.

	struct demo12
	{
		int id1;
		int id2;
		char name;
		char c;
		float percentage;
	};
	 
	struct demo13 
	{
		int id1;
		char name;
		int id2;
		char c;
		float percentage;                      
	};

    struct demo12 a1;
    struct demo13 b1;
 
    printf("\n\nsize of demo12 in bytes : %d\n",sizeof(a1));
    printf ( "\n   Address of id1        = %u", &a1.id1 );
    printf ( "\n   Address of id2        = %u", &a1.id2 );
    printf ( "\n   Address of name       = %u", &a1.name );
    printf ( "\n   Address of c          = %u", &a1.c );
    printf ( "\n   Address of percentage = %u",&a1.percentage );
 
    printf("   \n\nsize of demo13 in bytes : %d\n",sizeof(b1));
    printf ( "\n   Address of id1        = %u", &b1.id1 );
    printf ( "\n   Address of name       = %u", &b1.name );
    printf ( "\n   Address of id2        = %u", &b1.id2 );
    printf ( "\n   Address of c          = %u", &b1.c );
    printf ( "\n   Address of percentage = %u",&b1.percentage );

////////////////////////////////////////////////////////////////////////

	// We can avoid the memory allocated for padding byusing 
	// # pragma pack()

	#pragma pack(1)
	struct demo15 
	{
		int id1;
		int id2;
		char name;
		char c;
		float percentage;
	};

	#pragma pack(1)
	struct demo16 
	{
		int id1;
		char name;
		int id2;
		char c;
		float percentage;                      
	};
 
    struct demo15 a2;
    struct demo16 b2;
 
    printf("\n\nsize of demo15 in bytes : %d\n",sizeof(a2));
    printf ( "\n   Address of id1        = %u", &a2.id1 );
    printf ( "\n   Address of id2        = %u", &a2.id2 );
    printf ( "\n   Address of name       = %u", &a2.name );
    printf ( "\n   Address of c          = %u", &a2.c );
    printf ( "\n   Address of percentage = %u", &a2.percentage );
 
    printf("   \n\nsize of demo16 in bytes : %d\n", sizeof(b2));
    printf ( "\n   Address of id1        = %u", &b2.id1 );
    printf ( "\n   Address of name       = %u", &b2.name );
    printf ( "\n   Address of id2        = %u", &b2.id2 );
    printf ( "\n   Address of c          = %u", &b2.c );
    printf ( "\n   Address of percentage = %u", &b2.percentage );

////////////////////////////////////////////////////////////////////////

	// To avoid memory westage we can use the consept of bitfield

	struct demo17
	{
		int i:1;
		int c:4;
		int f:5;
		int k:3;
	};

	printf("\n\nSize of structure in case of bitfield is %d\n",sizeof(demo17));

////////////////////////////////////////////////////////////////////////

	// If the structure contains the bifield then we can not create a pointer
	// which points to its members
	// Means we can not use & operator on bitfield

	struct demo18
	{
		int i:1;
		int c:4;
	}obj18;

	int *p18;
	//p18 = &obj18.i;	// Error

////////////////////////////////////////////////////////////////////////
	// We can not set value of the bitfield grater than size of the 
	// perticular data type

	struct demo19
	{
	//	char c:9;	// Error
	};

////////////////////////////////////////////////////////////////////////

	// We can not use bitfield for the array which is member of the structure

	struct demo20
	{
	//	int arr[10]:4;	// Error
	};

////////////////////////////////////////////////////////////////////////

	// We can not use bitfield for float,double
	// We can use bitfield for char ,int only

	struct demo21
	{
	//	float f:10;		// Error
	};

////////////////////////////////////////////////////////////////////////

	// union is similar as structure but memory allocated for the union
	// is same as size of the largest member of that union

	// In this case size of union is 8 because sizeof largest data member
	// in this union is 8
	union demo22
	{
		int i;
		char c;
		double d;
	};

	printf("\n\nSizeof union is %d\n",sizeof(demo22));

////////////////////////////////////////////////////////////////////////

	// In case of union we can access single member at a time because
	// memory is shared between all the members

	union demo23
	{
		int i;
		char c;
	}obj23;

	obj23.i = 97;
	printf("\nValue of character is %c \n",obj23.c);
	printf("Value of character is %d \n",obj23.i);
	
////////////////////////////////////////////////////////////////////////

	// We can create nested union in same way like structure

	union outer24
	{
		int i;
		char c;
		union inner24
		{
			int k;
		};
	};

	// We can create a structure inside union as

	union outer25
	{
		int i;
		struct inner25
		{
			int k;
			double l;
		}obj;
	};

	printf("\n\nSizeof union is %d\n",sizeof(outer25));

////////////////////////////////////////////////////////////////////////

	// We can use bitfield in union in same way as structure
	union demo26
	{
		int t:5;
	};

////////////////////////////////////////////////////////////////////////

	// We can use assignment operator for structure variable
	// which performs shallow copy of one structure variable
	// to another structure variable

	struct demo27
	{
		int i;
	}x,y;

	x.i = 10;
	y = x;	
	printf("\n\nValue of variable is %d\n",y.i);	// 10

////////////////////////////////////////////////////////////////////////

	// We can not use comparision operators like <,> on structure variables
	/*
	if(x > y)	// Error
	{
		printf("X is less than Y");
	}
	*/

////////////////////////////////////////////////////////////////////////

	// We can not compaire variables of structure using == or != operator
	// To get desired effect we have to compaire it memberwise

	struct demo29
	{
		int i;
		int j;
	}var1={10,20},var2={10,20};

	/*
	if(var1 == var2)		// Error
	{
		printf("Both the variables are equal\n");
	}
	*/

	// This is the proper way of comparision
	if((var1.i == var2.i)&&(var1.j == var2.j))
	{
		printf("Both the variables are equal\n");
	}
	else
	{
		printf("Both the variables are not equal\n");	
	}

////////////////////////////////////////////////////////////////////////

	return 0;
}








