//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBSelectionChannel, IBSelectionChannelContext, NSSet;

@protocol IBSelectionChannelApplicator <NSObject>

@optional
- (NSSet *)selectionChannel:(IBSelectionChannel *)arg1 validateSelection:(NSSet *)arg2 context:(IBSelectionChannelContext *)arg3;
- (void)selectionChannel:(IBSelectionChannel *)arg1 applySelection:(NSSet *)arg2 previousSelection:(NSSet *)arg3 context:(IBSelectionChannelContext *)arg4;
- (id)selectionChannel:(IBSelectionChannel *)arg1 validateValue:(id)arg2 context:(IBSelectionChannelContext *)arg3;
- (void)selectionChannel:(IBSelectionChannel *)arg1 applyValue:(id)arg2 previousValue:(id)arg3 context:(IBSelectionChannelContext *)arg4;
@end

