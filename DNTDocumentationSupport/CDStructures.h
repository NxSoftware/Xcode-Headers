//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct MDCredential;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _SIIndexCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    void *_field17;
};

struct fsid {
    int _field1[2];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
    int _field6;
    int _field7;
    short _field8;
    struct fsid _field9;
    union {
        unsigned int _field1;
        struct {
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
        } _field2;
    } _field10;
    struct MDCredential *_field11;
    unsigned long long _field12;
} CDStruct_83f2d902;

