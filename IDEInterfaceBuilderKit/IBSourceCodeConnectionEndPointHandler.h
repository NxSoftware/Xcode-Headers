//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBConnectionEndPointHandler.h>

@class IBSourceCodeConnectionContext, NSArray;

@interface IBSourceCodeConnectionEndPointHandler : IBConnectionEndPointHandler
{
    NSArray *_connectionContexts;
    IBSourceCodeConnectionContext *_preferredMatchConnectionContext;
}

@property(readonly) IBSourceCodeConnectionContext *preferredMatchConnectionContext; // @synthesize preferredMatchConnectionContext=_preferredMatchConnectionContext;
@property(readonly) NSArray *connectionContexts; // @synthesize connectionContexts=_connectionContexts;
- (void).cxx_destruct;
- (id)targetToSendToEndPointProviderForConnectionSuccess;
- (id)connectionForPrototype:(id)arg1 interfaceStyle:(id)arg2;
- (id)connectionForConnectingFromObject:(id)arg1;
- (id)configuredAndCompletedConnectionWithSourceObject:(id)arg1;
- (void)showConnectionPopUpController:(id)arg1;
- (long long)runConnectionPopUpControllerModally:(id)arg1;
- (void)insertCodeForConnectionContext:(id)arg1;
- (id)insertOrPrepareToInsertSourceCodeForConnectionContext:(id)arg1 prepareOrInsertBlock:(CDUnknownBlockType)arg2;
- (id)endPointProvider;
- (struct CGPoint)insertionPointInScreenCoordinates;
- (void)setSpringLoadedTraversal:(id)arg1;
- (id)initWithDocument:(id)arg1 connectionContexts:(id)arg2;

@end

