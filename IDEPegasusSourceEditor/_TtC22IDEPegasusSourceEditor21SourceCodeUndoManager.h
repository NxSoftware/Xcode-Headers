//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__T012SourceEditor0aB11UndoManagerCN.h"

#import <IDEPegasusSourceEditor/DVTUndo-Protocol.h>

@protocol DVTUndoManagerDelegate;

@interface _TtC22IDEPegasusSourceEditor21SourceCodeUndoManager : __T012SourceEditor0aB11UndoManagerCN <DVTUndo>
{
    // Error parsing type: , name: willAutomaticallyUndoNextChangeGroup
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidate;
- (void)automaticallyUndoNextChangeGroup;
- (id)init;
@property(nonatomic, retain) id <DVTUndoManagerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL willAutomaticallyUndoNextChangeGroup; // @synthesize willAutomaticallyUndoNextChangeGroup;

@end

