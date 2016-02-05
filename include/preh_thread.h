#ifndef PREH_THREAD_H
#define PREH_THREAD_H

class preh_thread{
    public:
        preh_thread();
        ~preh_thread();
    private:
        preh_thread(const preh_thread& that);
        preh_thread operator=(const preh_thread& assign);
};

extern void* block_func();
