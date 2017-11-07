//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceCodeSymbolKind, IDESourceKitResponse, IDESourceKitUIDSet, NSAttributedString, NSString;

@interface IDESourceKitCompletionItem : NSObject
{
    CDStruct_4c46f3f5 _obj;
    IDESourceKitResponse *_response;
    IDESourceKitUIDSet *_UID;
    double _priority;
    double _fuzzyMatchingScore;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(nonatomic) double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore=_fuzzyMatchingScore;
@property(nonatomic) double priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)description;
@property(readonly) BOOL notRecommended;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly) NSString *completionText;
@property(readonly) NSString *displayType;
@property(readonly) NSString *displayText;
- (id)initWithSourceKitDictionary:(CDStruct_4c46f3f5)arg1 completionResponse:(id)arg2 UIDSet:(id)arg3;

@end

