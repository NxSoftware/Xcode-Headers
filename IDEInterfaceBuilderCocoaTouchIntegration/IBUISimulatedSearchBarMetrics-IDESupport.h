//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBUISimulatedSearchBarMetrics.h"

#import "IBDocumentArchiving.h"

@class NSString;

@interface IBUISimulatedSearchBarMetrics (IDESupport) <IBDocumentArchiving>
+ (id)simulatedSearchBarMetricsForSearchBar:(id)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)displayName;
- (void)applyMetricsToBar:(id)arg1;
- (unsigned long long)barEdge;
- (Class)barClass;
- (id)ibWidgetType;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

