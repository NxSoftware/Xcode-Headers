//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/NSCopying-Protocol.h>

@class DVTSourceControlPathLocation, DVTSourceControlRepository, NSString;

@interface _TtC18IDESourceControlUI31RepositoryPathFieldPropertyInfo : NSObject <NSCopying>
{
    // Error parsing type: , name: repository
    // Error parsing type: , name: expandedLocation
    // Error parsing type: , name: messageText
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, copy) NSString *messageText; // @synthesize messageText;
@property(nonatomic, retain) DVTSourceControlPathLocation *expandedLocation; // @synthesize expandedLocation;
@property(nonatomic, retain) DVTSourceControlRepository *repository; // @synthesize repository;
- (id)initWithRepository:(id)arg1 expandedLocation:(id)arg2 messageText:(id)arg3;

@end

