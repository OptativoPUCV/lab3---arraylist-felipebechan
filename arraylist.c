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


void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
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
