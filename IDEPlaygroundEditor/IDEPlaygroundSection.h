//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPlaygroundEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEEditorDocument, NSString;
@protocol IDEPlaygroundHostingDocument;

@interface IDEPlaygroundSection : NSObject <DVTInvalidation>
{
    NSString *_identifier;
    IDEEditorDocument<IDEPlaygroundHostingDocument> *_playgroundDocument;
}

+ (id)contentPathsToPreserveOnSave;
+ (id)xmlElementName;
+ (void)initialize;
@property(readonly) IDEEditorDocument<IDEPlaygroundHostingDocument> *playgroundDocument; // @synthesize playgroundDocument=_playgroundDocument;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)resetPlaygroundSection;
- (void)enableAllowsReset;
- (id)stringConstructingFileWrapper:(id)arg1;
- (id)xmlElementConstructingFileWrapper:(id)arg1;
- (id)viewControllerForDisplayingPlaygroundSectionInEditor:(id)arg1;
- (id)initWithXMLElement:(id)arg1 enclosingFileWrapper:(id)arg2 inPlaygroundDocument:(id)arg3;
- (id)initWithIdentifier:(id)arg1 inPlaygroundDocument:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
