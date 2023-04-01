#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
    ArrayList * listaNueva = (ArrayList *) malloc(sizeof(ArrayList));

    listaNueva -> data =  malloc(sizeof(void) * listaNueva->capacity); 
    listaNueva -> capacity = 2; 
    listaNueva -> size = 0;

    return listaNueva;
}


// xd 
void append(ArrayList *l, void *data) {

    if (l -> capacity == l -> size) {
        l -> capacity *= 2;
        l -> data = realloc(l -> data, sizeof(void*) * l->capacity);
    }
    
    l -> data [l -> size++] = data;
}


void push(ArrayList *l, void *data, int i) {
    
    if(i > l -> size)
    { 
        return; //XD
    }

    if(l -> size == l -> capacity)
    {
        l -> capacity *= 2;
        l -> data = realloc(l->data, sizeof(void*) * l -> capacity);
    }

    for(int j = l->size; j > i; j--)
    {
        l->data[j] = l -> data[j - 1];
    }

    l -> data[i] = data;
    l -> size++;
}


void* pop(ArrayList* l, int i) {
    if (l -> size == 0)
    {
        return NULL;
    }

    void* elim = 0;

    if (i < 0)
    {
        i = l -> size + i;
    }
    if (i >= 0) 
        {
            
        for (int k = i; k < l -> size - 1; k++)
        {
            l->data[k] = l -> data[k + 1];
        }
        elim = l -> data[i];
    } 
    else 
    {
        elim = l -> data[(l->size) + 1];
    }
    
    l->size--;
    return elim;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
