#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret= ret*i;
//		sum = sum + ret;
//	}
//	printf("%d",sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int n = 0;
//	int mid = 0;
//	scanf("%d", &n);
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//		return 0;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("********1.play**********\n");
//	printf("********0.exst**********\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int ret = rand()%100+1;
//	int num = 0;
//
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d",&num);
//		if (num > ret)
//		{
//			printf("猜大了");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//		printf("恭喜你，猜对了\n");
//		break;
//		}
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏退出\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//	}
//	}while (input);
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("请注意，你的电脑将在120秒后关机，如果输入‘我是猪’，就取消关机\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i < 200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	for (year = 1000;year <= 2000;year++)
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ", year);
//
//	return 0;
//}
//
//int seach(int x,int arry[],int lenth)
//{
//	int left = 0;
//	int right = lenth-1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (x < arry[mid])
//		{
//			right = mid-1;
//		}
//		else if (x > arry[mid])
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	if (left > right)
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, };
//	int k = 0;
//	scanf("%d", &k);
//	int flag = seach(k, arr,sizeof(arr)/sizeof(arr[0]));
//	if (flag == -1)
//	{
//		printf("没有找到");
//	}
//	else
//	{
//		printf("找到了，下标为%d", flag);
//	}
//
//	return 0;
//}

//int fac(int x)
//{
//	if (x > 1)
//	{
//		return x * fac(x- 1);
//	}
//	else if ( x<= 1)
//	{
//		return 1;
//	}
//}

//int fac(int n)
//{
//	int i = 1;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//		ret = ret * i;
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 1;
//		while(j <= i)
//		{
//			printf("%d * %d = %2d  ", j, i, j * i);
//			j++;
//			if (j > i)
//				printf("\n");
//
//		}
//	}
//
//	return 0;
//}

//void change(int arr[], int sz)  //要保证形参为int arr[]，不能缺少[]
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int map = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = map;
//
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,5,3,7,9,4,6, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)    //i<sz因为i是从0开始
//		printf("%d ", arr[i]);
//	return 0;
//}

//void unflower(char* arr)    //abcdef
//{
//	char tmp = *arr;
//	int len = strlen(arr);
//	*arr = *(arr + len - 1);
//	*(arr + len -1) = '\0';
//	if (strlen(arr+1) >= 2)
//	{
//		unflower(arr + 1);
//	}
//	* (arr + len - 1) = tmp;
//
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int len = 0;
//	char arr[] = "abcdef";
//	len = my_strlen(arr);
//	printf("%d",len);
//	return 0;
// 
// 
//}

//int digit(unsigned int n)//1234
//{
//	if (n/10 > 1)
//		return n % 10 + digit(n / 10);
//	else
//		return n;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = digit(n);
//	printf("%d", sum);
//	return 0;

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		arr[i] = 0;
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d", arr[i]);
//	printf("\n");
//}
//
//int reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr,sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}
#define ROW 7
#define LIN 7


//int is_win(char board[ROW][LIN], int row, int lin, char chess_piece)
//{
//	//行五子
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int max = 0;
//	for (i = 0;i < row; i++)
//	{
//		count = 0;
//		for (j = 0;j < lin; j++)
//		{
//			if (board[i][j] == chess_piece)
//				count++;
//			else
//			{
//				if (max < count)
//					max = count;
//				count = 0;
//			}
//		}
//		if (max < count)
//			max = count;
//	}
//	return max;
//}

//	return max;
//}
//int is_win(char board[ROW][LIN], int row, int lin, char chess_piece) 
//{
//    int i = 0, j = 0;
//    int count = 0, max = 0;
//    for (i = 0; i < row; i++)
//    {
//        count = 0;
//        for (j = 0; j < lin; j++)
//        {
//            if (board[i][j] == chess_piece)
//            {
//                count++;
//            }
//            else
//            {
//                if (count > max)
//                {
//                    max = count;
//                }
//                count = 0;
//            }
//        }
//        return max;
//    }
//    //    // 处理最后一段连续棋子
//    //    if (count > max) {
//    //        max = count;
//    //    }
//    //    if (max >= 5) {
//    //        return 1; // 有连续五个棋子，返回1表示胜利
//    //    }
//    //}
//    //return 0; // 没有连续五个棋子，返回0表示未胜利
//}

//int is_win(char board[ROW][LIN], int row, int lin, char chess_piece)
//{
//	int i = 0, j = 0;
//	int count = 0, max = 0;
//	//行判断
//	for (i = 0; i < row; i++)
//	{
//		count = 0;
//		for (j = 0; j < lin; j++)
//		{
//			if (board[i][j] == chess_piece)
//			{
//				count++;
//			}
//			else
//			{
//				if (count > max)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		// 处理最后一段连续棋子
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			printf("%d",max);
//
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//}


//int is_win(char board[ROW][LIN], int row, int lin, char chess_piece) {
//    int i, j;
//    int count, max;
//    // 行判断
//    max = 0;
//    for (i = 0; i < row; i++) {
//        count = 0;
//        for (j = 0; j < lin; j++) {
//            if (board[i][j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    if (max >= 5) {
//        return 1;
//    }
//
//    // 列判断
//    max = 0;
//    for (j = 0; j < lin; j++) {
//        count = 0;
//        for (i = 0; i < row; i++) {
//            if (board[i][j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    if (max >= 5) {
//        return 1;
//    }
//
//    // 斜上判断
//    max = 0;
//    // 处理从左上方开始的斜向
//    for (i = 0; i < row; i++) {
//        count = 0;
//        int start_j = 0;
//        int current_i = i;
//        int current_j = start_j;
//        while (current_i >= 0 && current_i < row && current_j >= 0 && current_j < lin) {
//            if (board[current_i][current_j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//            current_i++;
//            current_j++;
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    // 处理从上方开始的斜向
//    for (j = 1; j < lin; j++) {
//        count = 0;
//        int start_i = 0;
//        int current_i = start_i;
//        int current_j = j;
//        while (current_i >= 0 && current_i < row && current_j >= 0 && current_j < lin) {
//            if (board[current_i][current_j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//            current_i++;
//            current_j++;
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    if (max >= 5) {
//        return 1;
//    }
//
//    // 斜下判断
//    max = 0;
//    // 处理从右上方开始的斜向
//    for (i = 0; i < row; i++) {
//        count = 0;
//        int start_j = lin - 1;
//        int current_i = i;
//        int current_j = start_j;
//        while (current_i >= 0 && current_i < row && current_j >= 0 && current_j < lin) {
//            if (board[current_i][current_j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//            current_i++;
//            current_j--;
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    // 处理从右方开始的斜向
//    for (j = lin - 2; j >= 0; j--) {
//        count = 0;
//        int start_i = 0;
//        int current_i = start_i;
//        int current_j = j;
//        while (current_i >= 0 && current_i < row && current_j >= 0 && current_j < lin) {
//            if (board[current_i][current_j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//            current_i++;
//            current_j--;
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    if (max >= 5) {
//        return 1;
//    }
//
//    // 反斜下判断
//    max = 0;
//    for (i = 0; i < row; i++) {
//        count = 0;
//        for (j = lin - 1; j >= 0; j--) {
//            if (board[i][j] == chess_piece) {
//                count++;
//            }
//            else {
//                if (count > max) {
//                    max = count;
//                }
//                count = 0;
//            }
//        }
//        if (count > max) {
//            max = count;
//        }
//    }
//    if (max >= 5) {
//        return 1;
//    }
//
//    // 反斜上判断
//    max = 0;
//    for (j = lin - 1; j >= 0; j--)
//    {
//        count = 0;
//        for (i = 0; i < row; i++)
//        {
//            if (board[i][j] == chess_piece)
//            {
//                count++;
//            }
//            else
//            {
//                if (count > max)
//                {
//                    max = count;
//                }
//                count = 0;
//            }
//        }
//        if (count > max)
//        {
//            max = count;
//        }
//    }
//    if (max >= 5)
//    {
//        return 1;
//    }
//
//    return 0;
//}
//
//int is_win(char board[ROW][LIN], int row, int lin, char chess_piece)
//{
//	int i = 0, j = 0;
//	int count = 0, max = 0;
//	//行判断
//	for (i = 0; i < row; i++) 
//	{
//		count = 0;
//		for (j = 0; j < lin; j++)
//		{
//			if (board[i][j] == chess_piece) 
//			{
//				count++;
//			}
//			else
//			{
//				if (count > max)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		// 处理最后一段连续棋子
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//	//列判断
//	for (j = 0; j < lin; j++)
//	{
//		count = 0;
//		for (i = 0; i < row; i++)
//		{
//			if (board[i][j] == chess_piece)
//			{
//				count++;
//			}
//			else
//			{
//				if (count > max)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		// 处理最后一段连续棋子
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//	//斜上判断
//	for (j = 0;j < lin;j++)
//	{
//		for (i = 0;i < row && j < lin;i++ , j++)
//		{
//			count = 0;
//			if (board[i][j] == chess_piece)
//			{
//				count++;
//			}
//			else
//			{
//				if (max < count)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//	//斜下判断
//	for (i = 0;i < row;i++)
//	{
//		for (j = 0;j < lin && i < row;i++ , j++)
//		{
//			count = 0;
//			if (board[i][j] == chess_piece)
//			{
//				count++;
//			}
//			else
//			{
//				if (max < count)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//	//反斜下判断
//	for (i = 0;i < row;i++)
//	{
//		for (j = LIN-1;j >= 0 && i < row;i++ , j--)
//		{ 
//			count = 0;
//			if (board[i][j] == chess_piece)
//			{
//				count++;
//			}
//			else
//			{
//				if (max < count)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//	//反斜上判断
//	for (j = LIN-1;j >=0;j--)
//	{
//		for (i=0;i<ROW && j>=0;i++ , j--)
//		{
//			count = 0;
//			if (board[i][j] == chess_piece)
//			{
//				count++;
//			}
//			else
//			{
//				if (max < count)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//		if (max >= 5)
//		{
//			return 1; // 有连续五个棋子，返回1表示胜利
//		}
//	}
//	return 0;//没有连续五个棋子，返回0表示未胜利
//}
//
//
//
//int main()
//{
//	int row = 7;
//	int lin = 7;
//	char play_piece = '*';
//    char board[ROW][LIN] = { ' ','*',' ',' ',' ',' ',' ',
//                             ' ','*',' ',' ',' ',' ',' ',
//                             ' ','*','*',' ',' ',' ',' ',
//                             ' ','*',' ','*',' ',' ',' ',
//                             ' ','*',' ',' ','*',' ',' ',
//                             ' ',' ',' ',' ',' ','*',' ',
//                             ' ',' ',' ',' ',' ',' ',' '};
//	int ret = is_win(board, row, lin, play_piece);
//	printf("%d", ret);
//
//	return 0;
//}
//int main()
//{
//	int a = 12;
//	a -= a += a * a;
//	printf("%d", a);
//
//	return 0;
//}

//
//
//int main()
//{
//	char arr = '0';
//	scanf("%c", &arr);
//	printf("%c\n", arr);
//	if ('A' <= arr && arr < 'Z')
//		arr = arr + 32;
//	if ('a' <= arr && arr < 'z')
//		arr = arr - 32;
//	printf("%c\n", arr);
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* px[3] = { arr1,arr2,arr3 };//      int* px[]表示指针数组，储存arri的首元素地址
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d", px[i][j]);//      px[i]表示*(px+i)即px地址向后i位后解引用，如px[1] --> arr1,  px[1][2] --> arr1[2]
//		}
//		printf("\n");
//
//	}
//
//
//
//	return 0;
//}

//int my_strlen(char* ch)//传入的ch为首地址，可以用指针char* ch或者用char ch[]接收
//{
//	if (*ch != '\0')//*表示解引用，*ch表示ch地址里面的内容
//	{
//		return my_strlen(ch + 1) + 1;//ch是地址，ch+1表示该地址向下一位读取
//	}
//	else
//		return 0;
//}


//int func(int x)
//{
//	int count = 0;
//	while (x) {
//		count++;
//		x = x & (x - 1);//与运算
//	}
//	return count;
//}
//int main()
//{
//	//char ch[] = "ahfjskaf";//使用字符串要用字符数组即cahr ch[]，而char ch是单个字符
//	//int len = my_strlen(ch);//ch作为字符串，传入函数中的是ch的首元素地址，不需要使用&
//	//printf("%d", len);
//	int x = 9999;
//	int y = func(x);
//	printf("%d", y);
//	return 0;
//}
//
//int fun(int a)
//{
//	if (a >= 1)
//		return a * fun(a - 1);
//	
//}
//
//
//
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	for (i = 1;i <=z a;i++)
//		sum = sum+fun(i);
//	printf("%d",sum);
//	return 0;
//}

//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*(str++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char arr[] = "skdjfshf";
//	int num = my_strlen(arr);
//	printf("%d", num);
//
//	return 0;
//}
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d %d",&a,&n);
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		int ret = 0;
//		for (j = 0;j < i; j++)
//		{
//			ret = ret + a * (int)pow(10, j);
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}






int main()
{
	int a = 0;
	int* pa = &a;
	int** pp;
	pp = &pa;
	printf("%p\n", &a);
	printf("%p\n", pa);
	printf("%p\n", &pa);
	printf("%p\n", pp);

	return 0;
}


int i, j, temp;
for (i = 0; i < n - 1; i++)
{
	for (j = 0; j < n - i - 1; j++)
	{
		if (arr[j] > arr[j + 1]) 
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
}










