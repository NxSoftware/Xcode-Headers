//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDESourceControlUpdateOperationInfo.h>

@class IDESourceControlBranch, IDESourceControlRepository;

@interface IDESourceControlPullOperationInfo : IDESourceControlUpdateOperationInfo
{
    IDESourceControlRepository *_remote;
    IDESourceControlBranch *_remoteBranch;
}

@property(retain) IDESourceControlBranch *remoteBranch; // @synthesize remoteBranch=_remoteBranch;
@property(retain) IDESourceControlRepository *remote; // @synthesize remote=_remote;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (int)statusForWorkingTreeItem:(id)arg1;

@end

