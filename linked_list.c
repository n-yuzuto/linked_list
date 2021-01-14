#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Cell *head = NULL;

void insert_cell(Cell *p, int d) {
    Cell *new_cell = (Cell*)malloc(sizeof(Cell));
    new_cell->data = d;
    new_cell->next = p->next;
    p->next = new_cell;
}

void insert_cell_top(int d) {
  Cell *new_cell = (Cell*)malloc(sizeof(Cell));
  new_cell->data = d;
  new_cell->next = head;
  head = new_cell;
}

void delete_cell(Cell *p) {
  Cell *q = p;
  q = p->next;
  p->next = q->next;
  free(q);
}

void delete_cell_top(void) {
  Cell *q = head;
  head = q->next;
  free(q);
}

void display(void) {
  Cell *temp;
  temp = head;
  while (temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp -> next;
  }
  printf("\n");
}
