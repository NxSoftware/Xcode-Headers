//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@protocol DVTSourceControlCancellable;

@interface _TtC18IDESourceControlUI25CommitGeniusResultsFinder : IDEGeniusResultsFinder
{
    // Error parsing type: , name: completeLogItemToken
}

+ (Class)editorDocumentClass;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)primitiveInvalidate;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (void)updateGeniusResultsForCommitLocations:(id)arg1 logItem:(id)arg2 workingCopy:(id)arg3;
@property(nonatomic, retain) id <DVTSourceControlCancellable> completeLogItemToken; // @synthesize completeLogItemToken;

@end

