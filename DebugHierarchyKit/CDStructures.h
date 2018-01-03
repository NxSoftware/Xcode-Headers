//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

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

struct DBGEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

#pragma mark Named Unions

union _GLKMatrix2 {
    struct {
        float m00;
        float m01;
        float m10;
        float m11;
    } ;
    float m2[2][2];
    float m[4];
};

union _GLKMatrix3 {
    struct {
        float m00;
        float m01;
        float m02;
        float m10;
        float m11;
        float m12;
        float m20;
        float m21;
        float m22;
    } ;
    float m[9];
};

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector2 {
    struct {
        float x;
        float y;
    } ;
    struct {
        float s;
        float t;
    } ;
    float v[2];
};

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

union _GLKVector4 {
    struct {
        float x;
        float y;
        float z;
        float w;
    } ;
    struct {
        float r;
        float g;
        float b;
        float a;
    } ;
    struct {
        float s;
        float t;
        float p;
        float q;
    } ;
    float v[4];
};

