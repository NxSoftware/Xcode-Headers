//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AABB {
    struct CGPoint _field1;
    struct CGPoint _field2;
};

struct AnnotatedRenderBuffer;

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<AnnotatedRenderBuffer, std::__1::allocator<AnnotatedRenderBuffer>> {
    struct AnnotatedRenderBuffer *__begin_;
    struct AnnotatedRenderBuffer *__end_;
    struct __compressed_pair<AnnotatedRenderBuffer *, std::__1::allocator<AnnotatedRenderBuffer>> {
        struct AnnotatedRenderBuffer *__first_;
    } __end_cap_;
};

