//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI17WorkingCopyHolder.h>

@class NSArray, NSDictionary, NSString;

@interface _TtC18IDESourceControlUI24ManagedWorkingCopyHolder : _TtC18IDESourceControlUI17WorkingCopyHolder
{
}

- (id)initWithWorkingCopy:(id)arg1 treeCompletion:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSString *navigableItem_groupIdentifier;
@property(nonatomic, readonly) NSDictionary *remoteRepositories;
@property(nonatomic, readonly) BOOL hasRemotes;
@property(nonatomic, readonly) NSArray *branches;

@end

