//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSUI/XCSBotSupportingDocument.h>

@class DVTObservingToken, XCSIntegration;

@interface XCSBotIntegrationDocument : XCSBotSupportingDocument
{
    DVTObservingToken *_maintenanceTasksObserverToken;
    XCSIntegration *botIntegration;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingBot;
@property(retain) XCSIntegration *botIntegration; // @synthesize botIntegration;
- (void).cxx_destruct;
- (id)displayName;
- (id)bot;
- (void)updateBotIntegration:(id)arg1;
- (void)editorDocumentWillClose;
- (void)setFileURL:(id)arg1;

@end

