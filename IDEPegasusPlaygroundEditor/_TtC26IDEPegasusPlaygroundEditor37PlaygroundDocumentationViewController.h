//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEPegasusPlaygroundEditor/_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_-Protocol.h>

@class DVTNotificationToken, IDEPlaygroundSharedContext, NSString, _TtC26IDEPegasusPlaygroundEditor16PlaygroundEditor, _TtC26IDEPegasusPlaygroundEditor18PlaygroundDocument, _TtC9DVTMarkup20PlaygroundMarkupView;

@interface _TtC26IDEPegasusPlaygroundEditor37PlaygroundDocumentationViewController : DVTViewController <_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_>
{
    // Error parsing type: , name: playgroundEditor
    // Error parsing type: , name: markupText
    // Error parsing type: , name: lineRange
    // Error parsing type: , name: fontSettingsChangeNotificationToken
    // Error parsing type: , name: resourcesDirectory
    // Error parsing type: , name: sharedResourcesDirectory
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playgroundMarkupView:(id)arg1 openLink:(id)arg2;
- (void)navigateToPreviousPage;
- (void)navigateToNextPage;
- (void)navigateToLastPage;
- (void)navigateToFirstPage;
- (void)navigateToPageWithIdentifier:(id)arg1;
- (void)navigateToPageContext:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) IDEPlaygroundSharedContext *playgroundContext;
@property(nonatomic, readonly) _TtC26IDEPegasusPlaygroundEditor18PlaygroundDocument *playgroundDocument;
@property(nonatomic, retain) _TtC9DVTMarkup20PlaygroundMarkupView *markupView;
@property(nonatomic, retain) DVTNotificationToken *fontSettingsChangeNotificationToken; // @synthesize fontSettingsChangeNotificationToken;
@property(nonatomic, readonly) NSString *markupText; // @synthesize markupText;
@property(nonatomic, retain) _TtC26IDEPegasusPlaygroundEditor16PlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor;

@end

