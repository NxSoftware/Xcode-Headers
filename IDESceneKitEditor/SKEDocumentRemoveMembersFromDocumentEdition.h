//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class NSMutableArray;

@interface SKEDocumentRemoveMembersFromDocumentEdition : SKEDocumentEdition
{
    NSMutableArray *_subEditions;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 members:(id)arg2;

@end

