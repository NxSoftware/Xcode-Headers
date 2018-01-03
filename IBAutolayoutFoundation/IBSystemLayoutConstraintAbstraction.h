//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class IBLayoutConstraint;

@interface IBSystemLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    IBLayoutConstraint *_layoutConstraintBetweenViewsInDocument;
}

@property(retain, nonatomic) IBLayoutConstraint *layoutConstraintBetweenViewsInDocument; // @synthesize layoutConstraintBetweenViewsInDocument=_layoutConstraintBetweenViewsInDocument;
- (void).cxx_destruct;
- (double)priority;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (id)constraintInDocument;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithLayoutConstraintBetweenViewsInDocument:(id)arg1;

@end

