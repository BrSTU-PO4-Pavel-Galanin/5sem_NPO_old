/*
     ��ࠦ����� 4 (fio_04m). ����� � ���ᨢ��� � 横��
     ��� ���㪠������ ��६����� ����� ���ᨢ� �� 100 ������⮢ � ��ࠡ���� 
�� ���� ��室 ���� � ���᮫� � ���ᨢ, ���᫥��� �⮨���� � �뢮� �� ���᮫� 
�� ���ᨢ� ���� �� �㤥� ������� � �������� ���ਠ�� ��ࢠ� *
*/

#include <stdio.h>  /* printf() */
#include <conio.h>  /* getch() */
#include <stdlib.h> /* system() */

void gpi__press_any_key();
void gpi__set_n(char* gpi_n);
void gpi__set_c(int* gpi_c);
void gpi__set_k(int* gpi_k);
void gpi__set_s(int* gpi_s, const int gpi_c, const int gpi_k);	
void gpi__print_info(const char* gpi_n, const int gpi_c, const int gpi_k, const int gpi_s);

int main()
	{
	char	gpi_n[10][100];     /* ������������ */
	int		gpi_c[100];			/* ���� */
	int		gpi_k[100];			/* ������⢮ */
	int		gpi_s[100];			/* �⮨����� */

	/* ------------------------------------------------ */	
	
	system("chcp 866");
	
    printf(" %-32s %32s \n",
        "=������� �. �.=",
        "=gpi_04m="
        );
    printf(" %s \n \n",
        "��ࠦ����� 4 (fio_04m). ����� � ���ᨢ��� � 横��"
        );

    int i = 0;
    while(i < 100)
        {
        printf(" { \n");
        gpi__set_n(gpi_n[i]);
        if (gpi_n[i][0] == '*')
            {
            break;
            }
        gpi__set_c(&gpi_c[i]);
        gpi__set_k(&gpi_k[i]);
        gpi__set_s(&gpi_s[i], gpi_c[i], gpi_k[i]);
        gpi__print_info(gpi_n[i], gpi_c[i], gpi_k[i], gpi_s[i]);
        printf(" } \n");
        ++i;
        }

	gpi__press_any_key();

	return(0);
	}

void gpi__press_any_key()
    {
    printf(" \n %s \n",
        "Press any key..."
        );
    getch();
    }

void gpi__set_n(char* gpi_n)
	{
	printf(" gpi_02op �������� ���ਠ�� ");
	scanf("%s", gpi_n);
	}
	
void gpi__set_c(int* gpi_c)
	{
	printf(" gpi_02op ���� ");
	scanf("%d", gpi_c);
	}
	
void gpi__set_k(int* gpi_k)
	{
	printf(" gpi_02op ������⢮ ");
	scanf("%d", gpi_k);
	}
	
void gpi__set_s(int* gpi_s, const int gpi_c, const int gpi_k)
	{
	(*gpi_s) = gpi_c * gpi_k;
	}
	
void gpi__print_info(const char* gpi_n, const int gpi_c, const int gpi_k, const int gpi_s)
	{
	printf(" ���ਠ� \"%s\" �⮨����� = 業� * ������⢮ = %d * %d = %d \n",
		gpi_n, gpi_c, gpi_k, gpi_s
		);
	}