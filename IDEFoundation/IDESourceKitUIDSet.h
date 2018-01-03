//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESourceKitLowLevelConnection;

@interface IDESourceKitUIDSet : NSObject
{
    struct UIDContainer _UID;
    struct unordered_map<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *, std::__1::hash<_sourcekit_uid_s *>, std::__1::equal_to<_sourcekit_uid_s *>, std::__1::allocator<std::__1::pair<_sourcekit_uid_s *const, DVTSourceCodeSymbolKind *>>> _symbolKinds;
    IDESourceKitLowLevelConnection *_conn;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_initSymbolKindMap;
- (id)symbolKindForUID:(struct _sourcekit_uid_s *)arg1;
- (struct IDESourceKitUIDValues *)value;
- (struct IDESourceKitUIDRequests *)request;
- (struct IDESourceKitUIDKeys *)key;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

