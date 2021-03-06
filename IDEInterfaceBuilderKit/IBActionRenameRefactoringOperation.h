//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRefactoringOperation.h>

@class NSString;

@interface IBActionRenameRefactoringOperation : IBRefactoringOperation
{
    NSString *_oldActionName;
    NSString *_newActionName;
    NSString *_className;
}

@property(readonly) NSString *className; // @synthesize className=_className;
@property(readonly) NSString *newActionName; // @synthesize newActionName=_newActionName;
@property(readonly) NSString *oldActionName; // @synthesize oldActionName=_oldActionName;
- (void).cxx_destruct;
- (BOOL)refactorObject:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)initWithClassName:(id)arg1 oldActionName:(id)arg2 newActionName:(id)arg3;

@end

