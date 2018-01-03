//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct DYShaderProfilerTiming {
    struct Statistics _field1;
    struct Statistics _field2;
    struct Statistics _field3;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct GPUMessageTraceActivity {
    double _startTime;
    double _endTime;
    char _inProgress;
};

struct NSArray {
    Class _field1;
};

struct Statistics {
    double _field1;
    double _field2;
    double _field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct shared_ptr<GPUTools::FD::Function> {
    struct Function *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct shared_ptr<GPUTools::FD::Function> {
    struct Function *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_2d3f6817;

