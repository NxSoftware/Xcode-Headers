//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSXMLElement;

@interface IBDocumentUnarchiverRecursionState : NSObject
{
    NSArray *_childElements;
    id _object;
    NSXMLElement *_element;
    long long _kind;
}

@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSXMLElement *element; // @synthesize element=_element;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *childElements;
- (id)initWithElement:(id)arg1 object:(id)arg2 kind:(long long)arg3;

@end

