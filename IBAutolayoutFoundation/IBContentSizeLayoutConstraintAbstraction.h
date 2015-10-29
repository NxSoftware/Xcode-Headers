//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class NSObject<IBAutolayoutItem>;

@interface IBContentSizeLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    NSObject<IBAutolayoutItem> *_view;
    double _contentSize;
    unsigned long long _attribute;
}

@property(nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(nonatomic) double contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)constraintInDocument;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithView:(id)arg1 contentSize:(double)arg2 attribute:(unsigned long long)arg3;

@end

