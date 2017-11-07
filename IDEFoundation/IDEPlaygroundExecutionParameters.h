//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSSecureCoding-Protocol.h>

@class DVTLineOffsetAwareStringWrapper, IDEPlaygroundPreparationParameters, NSNumber, NSURL;

@interface IDEPlaygroundExecutionParameters : NSObject <NSSecureCoding>
{
    DVTLineOffsetAwareStringWrapper *_sourceCodeToExecute;
    DVTLineOffsetAwareStringWrapper *_sourceCodePreambleToExecute;
    NSURL *_documentFileURL;
    NSNumber *_documentContentTimestamp;
    NSNumber *_autoTerminationDelay;
    IDEPlaygroundPreparationParameters *_preparationParameters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) IDEPlaygroundPreparationParameters *preparationParameters; // @synthesize preparationParameters=_preparationParameters;
@property(readonly) NSNumber *autoTerminationDelay; // @synthesize autoTerminationDelay=_autoTerminationDelay;
@property(readonly) NSNumber *documentContentTimestamp; // @synthesize documentContentTimestamp=_documentContentTimestamp;
@property(readonly) NSURL *documentFileURL; // @synthesize documentFileURL=_documentFileURL;
@property(readonly, copy) DVTLineOffsetAwareStringWrapper *sourceCodePreambleToExecute; // @synthesize sourceCodePreambleToExecute=_sourceCodePreambleToExecute;
@property(readonly, copy) DVTLineOffsetAwareStringWrapper *sourceCodeToExecute; // @synthesize sourceCodeToExecute=_sourceCodeToExecute;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceCodeToExecute:(id)arg1 sourceCodePreambleToExecute:(id)arg2 documentFileURL:(id)arg3 documentContentTimestamp:(id)arg4 autoTerminationDelay:(id)arg5 executionPreparationParameters:(id)arg6;

@end

