//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class DVTFilePath, NSSet, NSString;

@protocol IDEXcode3ProjectItemRenaming <NSObject>
- (BOOL)renameItems:(NSSet *)arg1 error:(id *)arg2;
- (NSSet *)renameableItemsForFile:(DVTFilePath *)arg1 currentName:(NSString *)arg2;

@optional
- (void)renameCompleted;
@end

