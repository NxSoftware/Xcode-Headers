//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class DVTTextCompletionSession;

@interface DVTTextCompletionWindow : NSWindow
{
    DVTTextCompletionSession *_session;
}

@property(retain) DVTTextCompletionSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

