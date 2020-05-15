#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef enum Status
{
	success,
	fail,
	fatal,
	range_error
}Status;
typedef int ElemType;
typedef struct Node
{
	ElemType elem;
	struct Node* next;
}Node, *Ptr;
typedef Ptr* SqlistPtr;

Status List_init(SqlistPtr L);
void List_Destory(SqlistPtr L);
void List_Clear(SqlistPtr L);
int List_Empty(SqlistPtr L);
int List_size(SqlistPtr L);
Status List_Create(SqlistPtr L, ElemType arr[], int len);
Status List_Retrival(SqlistPtr L, int pos, ElemType *elem);
Status List_Locate(SqlistPtr L, ElemType elem, int *pos);
Status List_insert(SqlistPtr L, int pos, ElemType elem);
Status List_delete(SqlistPtr L, int pos);
Status List_prior(SqlistPtr L, int pos, ElemType* elem);
Status List_Next(SqlistPtr L, int pos, ElemType* elem);
void List_Print(SqlistPtr L);