//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

@class NSSet;

@interface IDEFoundation.IDEStructureEditingCoordinator : DVTInvalidation_NSObject
{
    // Error parsing type: , name: _backgroundQueue
    // Error parsing type: , name: activeProcedures
}

+ (BOOL)useNewStructureEditingMoveCoordinator;
- (CDUnknownBlockType).cxx_destruct;
- (void)beginProcedure:(id)arg1;
- (id)createMoveToGroupProcedureWithTopLevelItems:(id)arg1 destinationGroup:(id)arg2 insertingAtIndex:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)createMoveCopyProcedureWithTopLevelItems:(id)arg1 destinationGroup:(id)arg2 insertingAtIndex:(long long)arg3 commandKeyDown:(BOOL)arg4 optionKeyDown:(BOOL)arg5;
- (void)primitiveInvalidate;
- (id)init;
@property(nonatomic, copy) NSSet *activeProcedures; // @synthesize activeProcedures;

@end

