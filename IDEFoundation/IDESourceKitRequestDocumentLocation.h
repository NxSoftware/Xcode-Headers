//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDESourceKitRequestDictionaryWrapper-Protocol.h>

@class IDESourceKitRequestDictionary;

@interface IDESourceKitRequestDocumentLocation : NSObject <IDESourceKitRequestDictionaryWrapper>
{
    IDESourceKitRequestDictionary *_dict;
}

- (void).cxx_destruct;
- (id)internalDictionary;
- (id)initWithUIDSet:(id)arg1 url:(id)arg2 startLine:(long long)arg3 startCol:(long long)arg4 endLine:(long long)arg5 endCol:(long long)arg6 rangeLoc:(long long)arg7 rangeCount:(long long)arg8 timeStamp:(id)arg9 encoding:(long long)arg10;

@end

