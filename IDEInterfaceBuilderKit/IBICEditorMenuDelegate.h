//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBICCommandMenuDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class IBICCommandMenuBuilder, NSString;

@interface IBICEditorMenuDelegate : NSObject <IBICCommandMenuDelegate, NSMenuDelegate>
{
    IBICCommandMenuBuilder *_menuBuilder;
}

- (void).cxx_destruct;
- (id)commandMenuBuilderActionContext:(id)arg1;
- (id)commandMenuBuilderDocumentEditor:(id)arg1;
- (id)documentEditor;
- (void)menuNeedsUpdate:(id)arg1;
- (id)generateMenuItems;
- (id)menuBuilder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

