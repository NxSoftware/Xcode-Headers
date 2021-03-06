//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <IDEQuickLookEditor/IDEDocumentStructureProviding-Protocol.h>

@class NSArray, NSString;

@interface IDEQuickLookDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    unsigned long long _numberOfPages;
}

+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
@property unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (id)diffDataSource;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)canSave;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

