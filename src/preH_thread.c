#include <preh_thread.h>
#include <pthread.h>
#include <iostream>

void* block_func(void*){
    while(1) std::cout << "create sucess" << std::endl;
}
preh_thread::preh_thread(){
    if(pthread_create(NULL, NULL, block_func, NULL)){
        
    }
}

//preh_thread::preh_thread(){
//}
//
//preh_thread::preh_thread(){
//}
//
//preh_thread::~preh_thread(){
//}
