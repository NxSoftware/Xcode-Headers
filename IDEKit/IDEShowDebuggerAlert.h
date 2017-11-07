//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSString;

@interface IDEShowDebuggerAlert : IDEAlert
{
    BOOL _finalOutputDelayed;
    int _action;
    int _visibility;
    NSString *_destination;
}

@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (BOOL)finalOutputDelayed;
- (void)setFinalOutputDelayed:(BOOL)arg1;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_runForRunGeneratesOutputEventInWorkspace:(id)arg1 context:(id)arg2 showIfOutput:(long long)arg3 hideIfNoOutput:(long long)arg4;
- (void)_configureDebugAreaInWorkspaceTabControler:(id)arg1;
- (void)_resetActionToExternal;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)visibilities;
- (id)actions;
- (id)destinations;
- (id)init;

@end

