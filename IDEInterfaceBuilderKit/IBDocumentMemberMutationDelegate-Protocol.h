//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDocument, NSObject, NSString;

@protocol IBDocumentMemberMutationDelegate <NSObject>
- (void)document:(IBDocument *)arg1 mayHaveTurnedMemberOnOrOff:(NSObject *)arg2;
- (void)document:(IBDocument *)arg1 didChangeRelationshipKeyPath:(NSString *)arg2 forMember:(NSObject *)arg3;
- (void)document:(IBDocument *)arg1 didChangeKeyPath:(NSString *)arg2 forMember:(NSObject *)arg3;
- (void)document:(IBDocument *)arg1 didRemoveChildObject:(NSObject *)arg2 fromMember:(NSObject *)arg3;
- (void)document:(IBDocument *)arg1 didAddChildObject:(NSObject *)arg2 toMember:(NSObject *)arg3;
- (void)document:(IBDocument *)arg1 willRemoveChildObject:(NSObject *)arg2 fromMember:(NSObject *)arg3;
- (void)document:(IBDocument *)arg1 willAddChildObject:(NSObject *)arg2 toMember:(NSObject *)arg3;
- (void)document:(IBDocument *)arg1 willRemoveMember:(NSObject *)arg2;
@end

