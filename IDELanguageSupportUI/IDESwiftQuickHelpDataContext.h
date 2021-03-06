//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDELanguageSupportUI/IDEQuickHelpDataContext-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexSymbol, NSArray, NSString, NSXMLElement;

@interface IDESwiftQuickHelpDataContext : NSObject <IDEQuickHelpDataContext>
{
    CDStruct_4c46f3f5 _cursorInfo;
    CDUnknownBlockType _deallocHandler;
    IDEIndexSymbol *_indexSymbol;
}

@property(readonly, nonatomic) IDEIndexSymbol *indexSymbol; // @synthesize indexSymbol=_indexSymbol;
- (void).cxx_destruct;
- (void)enumerateRelatedDeclarationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *usrs;
@property(readonly, nonatomic) DVTSourceCodeLanguage *preferredLanguage;
@property(readonly, nonatomic) char *documentationJSON;
@property(readonly, nonatomic) BOOL symbolKindRepresentsAModule;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *documentationSymbolKind;
@property(readonly, nonatomic) NSXMLElement *documentationMarkup;
@property(readonly, nonatomic) NSXMLElement *declarationSymbolMarkup;
- (void)dealloc;
- (id)initWithIndexSymbol:(id)arg1 cursorInfo:(CDStruct_4c46f3f5)arg2 deallocHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

