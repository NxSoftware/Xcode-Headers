//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@protocol DVTSourceControlCancellable;

@interface IDESourceControlUI.CommitGeniusResultsFinder : IDEGeniusResultsFinder
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
