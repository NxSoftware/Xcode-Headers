//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton;

@interface SKEInspectorButtonActionProperty : IDEInspectorProperty
{
    NSButton *_button;
    IDEInspectorKeyPath *_targetKeyPath;
    IDEInspectorKeyPath *_argumentKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)action:(id)arg1;

@end

