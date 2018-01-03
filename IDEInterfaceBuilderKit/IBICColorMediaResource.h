//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEColorMediaResource.h>

#import <IDEInterfaceBuilderKit/IBICVariantObject-Protocol.h>

@class IBICColorSetRep, IBICNamedColor, NSString;

@interface IBICColorMediaResource : IDEColorMediaResource <IBICVariantObject>
{
    IBICNamedColor *_color;
    IBICColorSetRep *_colorSetRep;
    NSString *_variantSetName;
}

+ (id)resourceWithColorSetRep:(id)arg1;
@property(retain, nonatomic) NSString *variantSetName; // @synthesize variantSetName=_variantSetName;
@property(retain, nonatomic) IBICColorSetRep *colorSetRep; // @synthesize colorSetRep=_colorSetRep;
- (void).cxx_destruct;
- (long long)compareForVariantMatching:(id)arg1;
- (BOOL)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;
@property(readonly, copy) NSString *description;
- (id)variantSetNameWithFoldingStrategy:(id)arg1;
- (id)variantWithFoldingStrategy:(id)arg1;
- (id)generateIconForFilePath:(id)arg1 contentType:(id)arg2;
- (id)generateContentForFilePath:(id)arg1 contentType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

