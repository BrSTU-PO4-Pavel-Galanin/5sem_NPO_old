/*
     ��ࠦ����� 9 (fio_09i). �ᯮ�짮����� #include ���짮��⥫�.
     �������筮 �ࠦ����� 8, ��  ��।������ ��������  � ࠧ��୮��� ���ᨢ� 
�뭥ᥭ� � #include ���짮��⥫�.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "gpi_09i.h"

void gpi__set_gpi_n(struct gpi_Struct* gpi_struct);
void gpi__set_gpi_c(struct gpi_Struct* gpi_struct);
void gpi__set_gpi_k(struct gpi_Struct* gpi_struct);
void gpi__set_gpi_s(struct gpi_Struct* gpi_struct);	
void gpi__print_info(struct gpi_Struct* gpi_struct);
void gpi__print_table(const int gpi_length, struct gpi_Struct* gpi_arr);

int main()
	{
    const int gpi_length = GPI_ARRAY_LENGTH;
	struct gpi_Struct gpi_arr[GPI_ARRAY_LENGTH];
	/* --------------------------------------------------------- */	
	
	system("chcp 866");
	
	printf(" =������� �.�.=     =gpi_07ms= \n");
	printf(" ��ࠦ����� 7 (fio_07ms). ����� � ���ᨢ�� ������� � 横��. \n\n");

    int gpi_i = 0;
    while(gpi_i < gpi_length)
        {
        printf(" { \n");
        gpi__set_gpi_n(&gpi_arr[gpi_i]);
        
        if(gpi_arr[gpi_i].gpi_n[0] == '*')
            {
            printf(" ��室 �� 横�� \n");
            printf(" } \n");
            break;
            }
        
        gpi__set_gpi_c(&gpi_arr[gpi_i]);
        gpi__set_gpi_k(&gpi_arr[gpi_i]);
        gpi__set_gpi_s(&gpi_arr[gpi_i]);
        gpi__print_info(&gpi_arr[gpi_i]);
        printf(" } \n");
        ++gpi_i;
        }
        
    gpi__print_table(gpi_i, gpi_arr);
	
	printf(" \n press any key \n");
	getch();

	return(0);
	}

void gpi__set_gpi_n(struct gpi_Struct* gpi_struct)
	{
	printf(" gpi_06s �������� ���ਠ�� ");
	scanf("%s", gpi_struct->gpi_n);
	}
	
void gpi__set_gpi_c(struct gpi_Struct* gpi_struct)
	{
	printf(" gpi_06s ���� ");
	scanf("%d", &(gpi_struct->gpi_c));
	}
	
void gpi__set_gpi_k(struct gpi_Struct* gpi_struct)
	{
	printf(" gpi_06s ������⢮ ");
	scanf("%d", &(gpi_struct->gpi_k));
	}
	
void gpi__set_gpi_s(struct gpi_Struct* gpi_struct)
	{
	gpi_struct->gpi_s = gpi_struct->gpi_c * gpi_struct->gpi_k;
	}
	
void gpi__print_info(struct gpi_Struct* gpi_struct)
	{
	printf(" ���ਠ� \"%s\" �⮨����� = 業� * ������⢮ = %d * %d = %d \n",
		gpi_struct->gpi_n,
		gpi_struct->gpi_c,
		gpi_struct->gpi_k,
		gpi_struct->gpi_s
		);
	}

void gpi__print_table(const int gpi_length, struct gpi_Struct* gpi_arr)
    {
    printf(" \n");
        
    printf(" | %4s | %12s | %12s | %12s | %12s | \n",
        " ID ",
        "������������",
        "    ����    ",
        " ������⢮ ",
        " �⮨�����  "
        );
        
    printf(" | %4s | %12s | %12s | %12s | %12s | \n",
        "----",
        "------------",
        "------------",
        "------------",
        "------------"
        );
        
    int gpi_i = 0;
    while(gpi_i < gpi_length)
        {
        printf(" | %4d | %12s | %12d | %12d | %12d | \n",
            gpi_i,
            gpi_arr[gpi_i].gpi_n,
            gpi_arr[gpi_i].gpi_c,
            gpi_arr[gpi_i].gpi_k,
            gpi_arr[gpi_i].gpi_s
            );
        ++gpi_i;
        }
    printf(" \n");
    }
