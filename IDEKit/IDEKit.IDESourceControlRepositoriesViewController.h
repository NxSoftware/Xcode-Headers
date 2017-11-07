//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/NSObject-Protocol.h>
#import <IDEKit/WKNavigationDelegate-Protocol.h>

@class DVTBorderedView, DVTTableView, NSBox, NSButton, NSImageView, NSProgressIndicator, NSScrollView, NSTextField, NSView, NSWindow, WKWebView;

@interface IDEKit.IDESourceControlRepositoriesViewController : DVTViewController <NSObject, WKNavigationDelegate>
{
    // Error parsing type: , name: listRepositoriesOperationQueue
    // Error parsing type: , name: searchOperationQueue
    // Error parsing type: , name: repositoriesTableView
    // Error parsing type: , name: repositoriesView
    // Error parsing type: , name: repositoryDetailContainerView
    // Error parsing type: , name: repositoryDetailView
    // Error parsing type: , name: repoTitleButton
    // Error parsing type: , name: repoDescriptionTextField
    // Error parsing type: , name: languageTextField
    // Error parsing type: , name: languageIcon
    // Error parsing type: , name: forkCountTextField
    // Error parsing type: , name: forkIcon
    // Error parsing type: , name: starCountTextField
    // Error parsing type: , name: readmeIcon
    // Error parsing type: , name: readmeButton
    // Error parsing type: , name: starButton
    // Error parsing type: , name: blankSlateView
    // Error parsing type: , name: blankSlateProgress
    // Error parsing type: , name: blankSlatePlaceholderContainerView
    // Error parsing type: , name: blankSlateTitle
    // Error parsing type: , name: blankSlateSubTitle
    // Error parsing type: , name: currentOperation
    // Error parsing type: , name: reachableRepositoriesByAccount
    // Error parsing type: , name: searchResultsByAccount
    // Error parsing type: , name: currentSearchString
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentViewMode
    // Error parsing type: , name: repoTitleFontAttributes
    // Error parsing type: , name: readmeFontAttributes
    // Error parsing type: , name: addAccountWindow
    // Error parsing type: , name: accountsObservingToken
    // Error parsing type: , name: tableColumnObservationTokens
    // Error parsing type: , name: NAME_COLUMN_IDENTIFIER
    // Error parsing type: , name: DATE_MODIFIED_COLUMN_IDENTIFIER
    // Error parsing type: , name: OWNER_COLUMN_IDENTIFIER
    // Error parsing type: , name: readmeWindow
    // Error parsing type: , name: readmeContainerView
    // Error parsing type: , name: readmeWebView
    // Error parsing type: , name: readmeStatusView
    // Error parsing type: , name: readmeLoadProgress
    // Error parsing type: , name: readmePlaceholderView
    // Error parsing type: , name: reachableRepositoriesLoadingQueue
    // Error parsing type: , name: searchResultsLoadingQueue
    // Error parsing type: , name: headerTableRowView
    // Error parsing type: , name: readmeRequest
    // Error parsing type: , name: previouslyLoadedAccounts
    // Error parsing type: , name: previousSelectedRow
}

- (CDUnknownBlockType).cxx_destruct;
- (void)viewWillDisappear;
- (void)cloneAction:(id)arg1;
- (void)searchFieldDidInsertTab:(id)arg1;
- (void)searchFieldDidMoveDown:(id)arg1;
- (void)searchFieldDidMoveUp:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)reactToAccountsChanged;
- (void)hideBlankSlateProgress;
- (void)closeReadmeWindowClickWithSender:(id)arg1;
- (void)readmeClickWithSender:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)repoTitleClickWithSender:(id)arg1;
- (void)favoriteClickWithSender:(id)arg1;
- (void)beginSearchWithQuery:(id)arg1;
- (void)openURL:(id)arg1;
- (void)endSearch;
- (id)initWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)monospacedFont;
- (void)loadView;
@property(nonatomic) __weak NSView *readmePlaceholderView; // @synthesize readmePlaceholderView;
@property(nonatomic) __weak NSProgressIndicator *readmeLoadProgress; // @synthesize readmeLoadProgress;
@property(nonatomic) __weak NSView *readmeStatusView; // @synthesize readmeStatusView;
@property(nonatomic) __weak WKWebView *readmeWebView; // @synthesize readmeWebView;
@property(nonatomic) __weak DVTBorderedView *readmeContainerView; // @synthesize readmeContainerView;
@property(nonatomic) __weak NSWindow *readmeWindow; // @synthesize readmeWindow;
@property(nonatomic) __weak NSTextField *blankSlateSubTitle; // @synthesize blankSlateSubTitle;
@property(nonatomic) __weak NSTextField *blankSlateTitle; // @synthesize blankSlateTitle;
@property(nonatomic) __weak NSView *blankSlatePlaceholderContainerView; // @synthesize blankSlatePlaceholderContainerView;
@property(nonatomic) __weak NSProgressIndicator *blankSlateProgress; // @synthesize blankSlateProgress;
@property(nonatomic) __weak DVTBorderedView *blankSlateView; // @synthesize blankSlateView;
@property(nonatomic) __weak NSButton *starButton; // @synthesize starButton;
@property(nonatomic) __weak NSButton *readmeButton; // @synthesize readmeButton;
@property(nonatomic) __weak NSImageView *readmeIcon; // @synthesize readmeIcon;
@property(nonatomic) __weak NSTextField *starCountTextField; // @synthesize starCountTextField;
@property(nonatomic) __weak NSImageView *forkIcon; // @synthesize forkIcon;
@property(nonatomic) __weak NSTextField *forkCountTextField; // @synthesize forkCountTextField;
@property(nonatomic) __weak NSImageView *languageIcon; // @synthesize languageIcon;
@property(nonatomic) __weak NSTextField *languageTextField; // @synthesize languageTextField;
@property(nonatomic) __weak NSTextField *repoDescriptionTextField; // @synthesize repoDescriptionTextField;
@property(nonatomic) __weak NSButton *repoTitleButton; // @synthesize repoTitleButton;
@property(nonatomic) __weak NSBox *repositoryDetailView; // @synthesize repositoryDetailView;
@property(nonatomic) __weak DVTBorderedView *repositoryDetailContainerView; // @synthesize repositoryDetailContainerView;
@property(nonatomic) __weak NSScrollView *repositoriesView; // @synthesize repositoriesView;
@property(nonatomic) __weak DVTTableView *repositoriesTableView; // @synthesize repositoriesTableView;

@end

