//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLDataType-Protocol.h>

@class NSArray, NSString;
@protocol XDUMLNamedElement;

@protocol XDUMLEnumeration <XDUMLDataType>
- (id <XDUMLNamedElement>)newLiteralWithName:(NSString *)arg1;
- (NSArray *)ownedLiterals;
@end

