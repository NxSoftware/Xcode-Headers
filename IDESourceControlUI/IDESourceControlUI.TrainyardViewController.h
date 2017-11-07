//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTSourceControlWorkingCopy, DVTTableView, NSArray, NSDate, NSString, _TtC18IDESourceControlUI13LogItemFilter, _TtC18IDESourceControlUI17WorkingCopyEditor;

@interface IDESourceControlUI.TrainyardViewController : IDEViewController
{
    // Error parsing type: , name: defaultRowHeight
    // Error parsing type: , name: mergeRowHeight
    // Error parsing type: , name: biggerRowHeightMultiplier
    // Error parsing type: , name: tableView
    // Error parsing type: , name: trainyardCellNibName
    // Error parsing type: , name: trainyardCellIdentifier
    // Error parsing type: , name: logItemFilter
    // Error parsing type: , name: filteredLogItems
    // Error parsing type: , name: unfilteredLogItems
    // Error parsing type: , name: currentSelectedItems
    // Error parsing type: , name: workingCopyEditor
    // Error parsing type: , name: rowToSelect
    // Error parsing type: , name: restoredNumberOfRows
    // Error parsing type: , name: restoredFirstIdentifier
    // Error parsing type: , name: filterToBranches
    // Error parsing type: , name: searchTokens
    // Error parsing type: , name: startDate
    // Error parsing type: , name: endDate
}

+ (id)defaultViewNibName;
+ (BOOL)useBiggerRowHeight;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)copy:(id)arg1;
- (void)openReviewFiles:(id)arg1;
- (id)clickedLogItem;
- (id)selectedLogItem;
- (void)registerNibWithName:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (void)primitiveInvalidate;
@property(nonatomic, copy) NSDate *endDate; // @synthesize endDate;
@property(nonatomic, copy) NSDate *startDate; // @synthesize startDate;
@property(nonatomic, copy) NSArray *searchTokens; // @synthesize searchTokens;
@property(nonatomic, readonly) BOOL hideVisualHistory;
- (void)hideMergedCommitsWithTableCell:(id)arg1;
- (void)showMergedCommitsWithTableCell:(id)arg1;
@property(nonatomic) BOOL filterToFirstParent;
@property(nonatomic, copy) NSString *restoredFirstIdentifier; // @synthesize restoredFirstIdentifier;
- (void)selectRowWhenAvailable:(long long)arg1;
@property(nonatomic) __weak _TtC18IDESourceControlUI17WorkingCopyEditor *workingCopyEditor; // @synthesize workingCopyEditor;
@property(nonatomic, copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems;
@property(nonatomic, readonly) DVTSourceControlWorkingCopy *workingCopy;
@property(nonatomic, copy) NSArray *filteredLogItems; // @synthesize filteredLogItems;
@property(nonatomic, readonly) _TtC18IDESourceControlUI13LogItemFilter *logItemFilter; // @synthesize logItemFilter;
@property(nonatomic, readonly) NSString *trainyardCellIdentifier; // @synthesize trainyardCellIdentifier;
@property(nonatomic, readonly) NSString *trainyardCellNibName; // @synthesize trainyardCellNibName;
@property(nonatomic) __weak DVTTableView *tableView; // @synthesize tableView;

@end

