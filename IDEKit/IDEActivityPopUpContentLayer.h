//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class IDEActivityPopUpReportLayer, NSArray, NSMutableArray, NSString;

@interface IDEActivityPopUpContentLayer : CALayer
{
    id <IDEActivityPopUpContentLayerDelegate> _delegate;
    NSMutableArray *_orderedReportLayers;
    NSMutableArray *_lineLayers;
    BOOL _issuesAreVisible;
    BOOL _botStatusIsVisible;
    NSMutableArray *_orderedVisibleReportLayers;
    NSArray *_issueCategories;
    NSString *_issuesContainerTypeString;
    NSArray *_botStatusCategories;
    IDEActivityPopUpReportLayer *_layerToHide;
    double _spaceNeededForMultiActionIndicator;
}

@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(retain, nonatomic) IDEActivityPopUpReportLayer *layerToHide; // @synthesize layerToHide=_layerToHide;
@property BOOL botStatusIsVisible; // @synthesize botStatusIsVisible=_botStatusIsVisible;
@property(copy) NSArray *botStatusCategories; // @synthesize botStatusCategories=_botStatusCategories;
@property(copy) NSString *issuesContainerTypeString; // @synthesize issuesContainerTypeString=_issuesContainerTypeString;
@property(copy) NSArray *issueCategories; // @synthesize issueCategories=_issueCategories;
@property BOOL issuesAreVisible; // @synthesize issuesAreVisible=_issuesAreVisible;
@property id <IDEActivityPopUpContentLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSublayers;
@property(readonly) NSMutableArray *orderedVisibleReportLayers; // @synthesize orderedVisibleReportLayers=_orderedVisibleReportLayers;
- (void)addActivityReportLayer:(id)arg1;
- (void)_addStandardLineLayer;
- (void)removeActivityReportLayer:(id)arg1;
- (void)_recalculateVisibleReportAndLineLayers;
@property(readonly) double preferredHeight;
- (id)init;

@end

