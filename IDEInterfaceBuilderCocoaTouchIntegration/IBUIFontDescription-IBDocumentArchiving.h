//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUIFontDescription.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUIFontDescription (IBDocumentArchiving) <IBDocumentArchiving>
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (id)ibSwizzledCocoaTouchInstanceForBinaryArchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)fontDescriptionWithTraits:(unsigned long long)arg1 forRuntime:(id)arg2;
- (id)fontDescriptionWithPointSize:(double)arg1 forRuntime:(id)arg2;
- (id)fontDescriptionWithWeightCategory:(long long)arg1 forRuntime:(id)arg2;
- (id)fontDescriptionWithSize:(long long)arg1 forRuntime:(id)arg2;
- (id)fontDescriptionWithFontName:(id)arg1 forRuntime:(id)arg2;
- (id)fontDescriptionWithFamily:(id)arg1 forRuntime:(id)arg2;
- (id)fontDescriptionWithType:(long long)arg1 forRuntime:(id)arg2;
- (id)fontForRuntime:(id)arg1;
- (id)initWithFont:(id)arg1;
- (double)actualPointSizeForRuntime:(id)arg1;
- (id)actualNameForRuntime:(id)arg1;
- (unsigned long long)nsTraitsForRuntime:(id)arg1;
- (unsigned long long)traitsForRuntime:(id)arg1;
- (id)filenameForRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

