//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTPreferenceSet-Protocol.h>

@class DVTCustomDataSpecifier, DVTObservingToken, DVTStackBacktrace, IDEMenuKeyBindingSet, IDETextKeyBindingSet, NSArray, NSImage, NSMutableArray, NSString, NSURL;

@interface IDEKeyBindingPreferenceSet : NSObject <DVTPreferenceSet>
{
    NSString *_name;
    NSString *_localizedName;
    NSURL *_dataURL;
    NSImage *_image;
    DVTCustomDataSpecifier *_customDataSpecifier;
    BOOL _builtIn;
    BOOL _contentNeedsSaving;
    BOOL _isDataLoaded;
    long long _disableActivateCount;
    IDEMenuKeyBindingSet *_menuKeyBindingSet;
    IDETextKeyBindingSet *_textKeyBindingSet;
    NSArray *_cachedAllKeyBindings;
    NSMutableArray *_cachedModifiedKeyBindings;
    NSMutableArray *_cachedHotKeyboardShortcuts;
    NSMutableArray *_cachedConflictedKeyBindings;
    unsigned long long _numConflictedKeyBindings;
    unsigned long long _numConflictedHotKeyBindings;
    DVTObservingToken *_menuKeyBindingsObservingToken;
    DVTObservingToken *_textKeyBindingsObservingToken;
}

+ (id)_logAspect;
+ (id)keyPathsForValuesAffectingConflictedKeyBindings;
+ (id)keyPathsForValuesAffectingAllKeyBindings;
+ (id)titleForManagePreferenceSets;
+ (id)titleForNewPreferenceSetFromTemplate;
+ (id)preferenceSetsListHeader;
+ (id)upgradablePreferenceSetsFileExtensions;
+ (id)preferenceSetsFileExtension;
+ (id)defaultKeyForExcludedBuiltInPreferenceSets;
+ (id)defaultKeyForCurrentPreferenceSet;
+ (id)builtInPreferenceSetsDirectoryURL;
+ (id)systemPreferenceSet;
+ (id)preferenceSetGroupingName;
+ (id)preferenceSetsManager;
+ (id)_defaultKeyBindingsDictionary;
+ (void)initialize;
@property(readonly) NSURL *dataURL; // @synthesize dataURL=_dataURL;
@property BOOL contentNeedsSaving; // @synthesize contentNeedsSaving=_contentNeedsSaving;
@property(readonly, getter=isBuiltIn) BOOL builtIn; // @synthesize builtIn=_builtIn;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(readonly, copy) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)activate;
- (void)_resolveConflictWithMenuKeyBindingSet:(id)arg1 textKeyBindingSet:(id)arg2;
- (id)conflictedKeyBindingsWithKeyBinding:(id)arg1 keyboardShortcut:(id)arg2;
- (id)_conflictedKeyBindingsWithKeyBinding:(id)arg1 keyboardShortcut:(id)arg2 menuKeyBindingSet:(id)arg3 textKeyBindingSet:(id)arg4;
- (id)alternateKeyBindingsForKeyBinding:(id)arg1;
@property(retain) IDETextKeyBindingSet *textKeyBindingSet;
@property(retain) IDEMenuKeyBindingSet *menuKeyBindingSet;
- (void)_symbolicHotKeyDidChange;
- (unsigned long long)_numberOfConflictedHotKeyBindings;
- (unsigned long long)_numberOfConflictedKeyBindigns;
@property(readonly) NSArray *conflictedKeyBindings;
- (void)_updateConflictedKeyBindings;
- (id)_cachedHotKeyboardShortcuts;
@property(readonly) NSArray *modifiedKeyBindings;
@property(readonly) NSArray *allKeyBindings;
- (void)loadData;
- (long long)_disableActivateCount;
- (id)initWithCustomDataSpecifier:(id)arg1 basePreferenceSet:(id)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (id)initWithName:(id)arg1 dataURL:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

