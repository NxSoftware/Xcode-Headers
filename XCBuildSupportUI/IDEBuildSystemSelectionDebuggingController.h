//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCBuildSupportUI/IDECommandHandler-Protocol.h>
#import <XCBuildSupportUI/IDECommandHandlerVendor-Protocol.h>

@class NSString;

@interface IDEBuildSystemSelectionDebuggingController : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)sharedInstance;
- (void)selectXCBuildBuildSystem:(id)arg1;
- (void)selectLegacyBuildSystem:(id)arg1;
- (void)selectDefaultBuildSystem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

