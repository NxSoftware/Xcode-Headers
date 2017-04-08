//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBSourceCodeConnectionContext.h"

@class NSObject, NSString;

@interface IBCocoaBindingsSourceCodeConnectionContext : IBSourceCodeConnectionContext
{
    NSString *_binding;
    NSString *_keyPath;
    NSObject *_controller;
}

+ (id)targetCandidatesForContainingClassNamed:(id)arg1 toObject:(id)arg2 document:(id)arg3 preferredTarget:(id *)arg4;
@property(retain) NSObject *controller; // @synthesize controller=_controller;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSString *binding; // @synthesize binding=_binding;
- (void).cxx_destruct;
- (id)containingClassImage;
- (id)insertionConnectionTypeString;
- (BOOL)parseSourceModelItem:(id)arg1;
- (BOOL)parseSourceModelItem:(id)arg1 sourceModel:(id)arg2;
- (id)springLoadedDocumentLocation;
- (double)positionPriority;
- (BOOL)shouldAlwaysShowConfigurationPopUp;
- (Class)userConfigurableOptionsViewControllerClass;
- (BOOL)userCanConfigureType;
- (BOOL)userCanConfigureName;
- (BOOL)userCanConfigureTarget;

@end

