//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLBehavioredClassifier-Protocol.h>

@class NSArray;
@protocol XDUMLClass;

@protocol XDUMLClass <XDUMLBehavioredClassifier>
- (void)setParentClass:(id <XDUMLClass>)arg1;
- (id <XDUMLClass>)parentClass;
- (NSArray *)superClasses;
- (NSArray *)ownedOperations;
- (NSArray *)ownedAttributes;
@end

