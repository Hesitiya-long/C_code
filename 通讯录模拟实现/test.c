#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"





void menu()
{
	printf("********************************************\n");
	printf("*********  1. add       2. del    **********\n");
	printf("*********  3. search    4. modify **********\n");
	printf("*********  5. sort      6. show   **********\n");
	printf("*********  0.exst                 **********\n");
	printf("********************************************\n");

}




int main()
{
	int input = 0;
	CONTACT con;
	//初始化
	modify_contact(&con);

	create_contact(&con);

	read_contact(&con);
	do
	{
		menu();
		printf("请选择>>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case ADD:
			add(&con);
			break;
		case DEL:
			del(&con);
			break;
		case SEARCH:
			search(&con);
			break;
		case MODIFY:
			modify(&con);
			break;
		case SOURT:
			break;
		case SHOW:
			show(&con);
			break;
		case EXST:
			save_contact(&con);
			break;
		defaut:
			printf("输入错误，请重新输入");
			break;
		}
	}
	while(input);
	return 0;
}
