//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEMenuKeyBindingProvider-Protocol.h>

@class NSString;

@interface IDEAlertsMenuDelegate : NSObject <IDEMenuKeyBindingProvider>
{
}

+ (void)registerMenuKeyBindingsToMenuKeyBindingSet:(id)arg1;
+ (id)_findMenuItemTitled:(id)arg1 inMenu:(id)arg2;
- (void)menuWillOpen:(id)arg1;
- (void)buildMenu:(id)arg1;
- (void)_buildMenu:(id)arg1;
- (void)_keyBindingDidChangeKeyboardShortcuts:(id)arg1;
- (void)performAlertEvent:(id)arg1;
- (void)editAlerts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

