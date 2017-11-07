//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSNumber, NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct DrawCallStatistics {
    NSString *drawcallTypeName;
    NSNumber *maximum;
    NSArray *types;
    NSArray *total;
    NSArray *diffTotal;
    NSArray *base;
    NSArray *current;
    NSArray *apiItems;
};

struct NSDictionary {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

