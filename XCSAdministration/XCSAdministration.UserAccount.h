//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, ODRecord;

@interface XCSAdministration.UserAccount : NSObject
{
    // Error parsing type: , name: uid
    // Error parsing type: , name: username
    // Error parsing type: , name: fullName
    // Error parsing type: , name: attributes
    // Error parsing type: , name: record
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithUid:(long long)arg1 username:(id)arg2 fullName:(id)arg3;
- (id)initWithRecord:(id)arg1;
- (id)initWithAttributes:(id)arg1;
@property(nonatomic, retain) ODRecord *record; // @synthesize record;
@property(nonatomic, readonly) NSDictionary *attributes; // @synthesize attributes;
@property(nonatomic, readonly) NSString *fullName; // @synthesize fullName;
@property(nonatomic, readonly) NSString *username; // @synthesize username;
@property(nonatomic, readonly) long long uid; // @synthesize uid;

@end

