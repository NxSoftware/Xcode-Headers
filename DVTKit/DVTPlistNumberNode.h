//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTPlistNode.h>

@class NSNumber;

@interface DVTPlistNumberNode : DVTPlistNode
{
    NSNumber *_value;
}

- (void).cxx_destruct;
- (id)stringForSearch;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (BOOL)isFloat;
- (void)setValueFromPlist:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

