//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTNotificationToken, DVTObservingToken, NSButton;

@interface IDEPlaygroundEditorDFRController : NSObject
{
    NSButton *_toggleInlineQuicklookButton;
    DVTObservingToken *_playgroundToyboxObserver;
    DVTNotificationToken *_didSelectToyNotificationToken;
    DVTNotificationToken *_didToggleInlineResultNotificationToken;
    DVTNotificationToken *_textViewDidChangeSelection;
}

@property(retain) DVTNotificationToken *textViewDidChangeSelection; // @synthesize textViewDidChangeSelection=_textViewDidChangeSelection;
@property(retain) DVTNotificationToken *didToggleInlineResultNotificationToken; // @synthesize didToggleInlineResultNotificationToken=_didToggleInlineResultNotificationToken;
@property(retain) DVTNotificationToken *didSelectToyNotificationToken; // @synthesize didSelectToyNotificationToken=_didSelectToyNotificationToken;
@property(retain) DVTObservingToken *playgroundToyboxObserver; // @synthesize playgroundToyboxObserver=_playgroundToyboxObserver;
@property(retain) NSButton *toggleInlineQuicklookButton; // @synthesize toggleInlineQuicklookButton=_toggleInlineQuicklookButton;
- (void).cxx_destruct;
- (void)dealloc;

@end

