//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractFileByFileQuery.h>

@class IDETextFragmentIndexQuickRejectionFilterProbe, NSLocale, NSRegularExpression, NSString;

@interface IDEBatchFindAbstractFileByFileTextualQuery : IDEBatchFindAbstractFileByFileQuery
{
    IDETextFragmentIndexQuickRejectionFilterProbe *_filterProbe;
    NSRegularExpression *_regularExpression;
    NSString *_queryText;
    NSLocale *_locale;
}

- (void).cxx_destruct;
- (void)processFilePath:(id)arg1 fromGroup:(id)arg2 withIndex:(id)arg3 queryStartTime:(id)arg4 progressNotifier:(id)arg5 resultOrder:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)generateFileMatchIfNeeded:(id *)arg1 populatingResults:(id *)arg2 forFilePath:(id)arg3 fromGroup:(id)arg4 resultOrder:(long long)arg5 progressNotifier:(id)arg6;
- (BOOL)requiresEditorDocumentsToSaveBeforeSearching;
- (BOOL)treatsTextAsRegularExpression;
- (id)initWithSpecification:(id)arg1 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg2 initialLineWrappingParameters:(id)arg3 workspace:(id)arg4 andDelegate:(id)arg5 error:(id *)arg6;

@end

