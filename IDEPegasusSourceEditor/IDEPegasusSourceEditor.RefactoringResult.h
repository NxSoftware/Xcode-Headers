//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTFindResult.h>

@class NSString;

@interface IDEPegasusSourceEditor.RefactoringResult : DVTFindResult
{
    // Error parsing type: , name: replacement
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithFoundLocation:(id)arg1 withRange:(struct _NSRange)arg2 inContext:(id)arg3;
- (id)stringForReplacementString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWith:(id)arg1 replacement:(id)arg2;
@property(nonatomic, copy) NSString *replacement; // @synthesize replacement;

@end
