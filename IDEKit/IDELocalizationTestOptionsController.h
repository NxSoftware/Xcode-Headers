//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSView, _TtC6IDEKit42IDELocalizationApplicationRegionController, _TtC6IDEKit44IDELocalizationApplicationLanguageController;

@interface IDELocalizationTestOptionsController : IDELaunchActionOptionViewController
{
    // Error parsing type: , name: applicationLanguageController
    // Error parsing type: , name: applicationRegionController
    // Error parsing type: , name: applicationLanguageContainer
    // Error parsing type: , name: applicationRegionContainer
}

+ (BOOL)availableForScheme:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScheme:(id)arg1;
- (void)regionPopUpHasChanged:(id)arg1;
- (void)languagePopUpHasChanged:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
@property(nonatomic) __weak NSView *applicationRegionContainer; // @synthesize applicationRegionContainer;
@property(nonatomic) __weak NSView *applicationLanguageContainer; // @synthesize applicationLanguageContainer;
@property(nonatomic, retain) _TtC6IDEKit42IDELocalizationApplicationRegionController *applicationRegionController; // @synthesize applicationRegionController;
@property(nonatomic, retain) _TtC6IDEKit44IDELocalizationApplicationLanguageController *applicationLanguageController; // @synthesize applicationLanguageController;

@end

