//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, IDEAlertEvent;

@interface IDEAlertEventProxy : NSObject
{
    IDEAlertEvent *_alertEvent;
    BOOL _triedToLoadClass;
    DVTExtension *_extension;
}

@property(retain) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly) IDEAlertEvent *alertEvent;

@end

