//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTUndoManager.h>

@class IBDocument;

@interface IBDocumentUndoManager : DVTUndoManager
{
    IBDocument *_document;
}

@property(readonly, nonatomic) __weak IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

@end

