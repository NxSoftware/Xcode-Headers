//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLDirectedRelationship-Protocol.h>

@protocol XDUMLClassifier;

@protocol XDUMLGeneralization <XDUMLDirectedRelationship>
- (void)setSpecific:(id <XDUMLClassifier>)arg1;
- (void)setGeneral:(id <XDUMLClassifier>)arg1;
- (void)remove;
- (id <XDUMLClassifier>)specific;
- (id <XDUMLClassifier>)general;
@end

